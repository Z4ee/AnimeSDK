#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/StableSystemPuzzlePillarStatus.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLAR_INITPILLAR_OFFSET UNITYSDK_OFFSET(0x1610E110)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLAR_REFRESHCOLORSTATUSBYANIM_OFFSET UNITYSDK_OFFSET(0x1610E1C0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLAR_SETCOLORSTATUS_OFFSET UNITYSDK_OFFSET(0x1610E250)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1610E390)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int StableSystemPuzzlePillar_TypeDefinitionIndex = 74921;

	class StableSystemPuzzlePillar : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Color0Obj; // 0x18
		::UnityEngine::GameObject* Color1Obj; // 0x20
		::UnityEngine::GameObject* Color2Obj; // 0x28
		::RPG::Client::Prop::StableSystemPuzzlePillarStatus ColorStatus; // 0x30
		::UnityEngine::Animator* Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLAR__CTOR_OFFSET))(this);
		}

		::System::Void InitPillar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLAR_INITPILLAR_OFFSET))(this);
		}

		::System::Void SetColorStatus(::RPG::Client::Prop::StableSystemPuzzlePillarStatus a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::StableSystemPuzzlePillarStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLAR_SETCOLORSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshColorStatusByAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPILLAR_REFRESHCOLORSTATUSBYANIM_OFFSET))(this);
		}
	};
}
