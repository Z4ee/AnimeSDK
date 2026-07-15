#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/StableSystemBoardBaseAreaStatus.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class StableSystemPuzzleBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA_GET_AREASTATUS_OFFSET UNITYSDK_OFFSET(0x1610AE00)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA_GET_ISSTABLE_OFFSET UNITYSDK_OFFSET(0x1610AB60)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA_INITBASEAREA_OFFSET UNITYSDK_OFFSET(0x1610A8C0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA_REFRESHSTABLE_OFFSET UNITYSDK_OFFSET(0x1610A9A0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA_REFRESHSTATUS_OFFSET UNITYSDK_OFFSET(0x1610A920)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA_SET_AREASTATUS_OFFSET UNITYSDK_OFFSET(0x1610AE10)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1610AEC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int StableSystemPuzzleBaseArea_TypeDefinitionIndex = 74914;

	class StableSystemPuzzleBaseArea : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* SolidRoot; // 0x18
		::UnityEngine::GameObject* CoreRoot; // 0x20
		::System::Int32 x; // 0x28
		::System::Int32 y; // 0x2C
		::System::Int32 z; // 0x30
		::RPG::GameCore::GameEntity* Field_5_5; // 0x38
		::RPG::Client::Prop::StableSystemPuzzleBoard* Field_5_6; // 0x40
		::RPG::Client::Prop::StableSystemBoardBaseAreaStatus _Status; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA__CTOR_OFFSET))(this);
		}

		::System::Void InitBaseArea(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::StableSystemPuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::StableSystemPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA_INITBASEAREA_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA_REFRESHSTATUS_OFFSET))(this);
		}

		::System::Void RefreshStable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA_REFRESHSTABLE_OFFSET))(this);
		}

		::System::Boolean get_IsStable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA_GET_ISSTABLE_OFFSET))(this);
		}

		::RPG::Client::Prop::StableSystemBoardBaseAreaStatus get_AreaStatus()
		{
			return ((::RPG::Client::Prop::StableSystemBoardBaseAreaStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA_GET_AREASTATUS_OFFSET))(this);
		}

		::System::Void set_AreaStatus(::RPG::Client::Prop::StableSystemBoardBaseAreaStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::StableSystemBoardBaseAreaStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEBASEAREA_SET_AREASTATUS_OFFSET))(this, a1);
		}
	};
}
