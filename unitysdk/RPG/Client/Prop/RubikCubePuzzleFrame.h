#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::Client::Prop { class RubikCubePuzzleFrameData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME_CHECKBLOCK_OFFSET UNITYSDK_OFFSET(0xA15B610)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA15B150)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA15B560)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME_INITFRAME_OFFSET UNITYSDK_OFFSET(0xA143D40)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME_INITPREVIEWCUBE_OFFSET UNITYSDK_OFFSET(0xA15B190)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME_REFRESHSTATUS_OFFSET UNITYSDK_OFFSET(0xA15B1D0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0xA15BA50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleFrame_TypeDefinitionIndex = 64287;

	class RubikCubePuzzleFrame : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* FrameNormal; // 0x18
		::UnityEngine::Material* FrameComplete; // 0x20
		::UnityEngine::Material* FrameThirdStatusNormal; // 0x28
		::UnityEngine::Material* FrameThirdStatusComplete; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FrameObj; // 0x38
		::RPG::Client::Prop::RubikCubePuzzleCube* Field_5_5; // 0x40
		::RPG::Client::Prop::RubikCubePuzzleFrameData* Field_5_6; // 0x48
		::Il2CppArray<::UnityEngine::GameObject*>* Field_5_7; // 0x50
		::Il2CppArray<::System::Int32>* Field_5_8; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME_DISPOSE_OFFSET))(this);
		}

		::System::Void InitPreviewCube()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME_INITPREVIEWCUBE_OFFSET))(this);
		}

		::System::Void InitFrame(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::RubikCubePuzzleFrameData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RubikCubePuzzleFrameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME_INITFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME_REFRESHSTATUS_OFFSET))(this);
		}

		::System::Boolean CheckBlock(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME_CHECKBLOCK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAME_GET_ISCOMPLETE_OFFSET))(this);
		}
	};
}
