#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeFrameFace.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class LightRubikCubePuzzleConditionObj; }
namespace RPG::Client::Prop { class LightRubikCubePuzzleCube; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUP_CHECKBLOCK_OFFSET UNITYSDK_OFFSET(0xA0C9FC0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0C9930)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUP_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA0C9F10)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUP_INITCONDITIONGROUP_OFFSET UNITYSDK_OFFSET(0xA0C73C0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUP_REFRESHSTATUS_OFFSET UNITYSDK_OFFSET(0xA0C9AC0)
#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xA0CA680)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LightRubikCubePuzzleConditionGroup_TypeDefinitionIndex = 64130;

	class LightRubikCubePuzzleConditionGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* SubObj; // 0x18
		::RPG::Client::Prop::RubikCubeFrameFace FaceGroup; // 0x20
		::RPG::Client::Prop::LightRubikCubePuzzleCube* Field_5_2; // 0x28
		::Il2CppArray<::RPG::Client::Prop::LightRubikCubePuzzleConditionObj*>* Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUP_DISPOSE_OFFSET))(this);
		}

		::System::Void InitConditionGroup(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::LightRubikCubePuzzleCube* a2, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::LightRubikCubePuzzleCube*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUP_INITCONDITIONGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUP_REFRESHSTATUS_OFFSET))(this);
		}

		::System::Boolean CheckBlock(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUP_CHECKBLOCK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUP_GET_ISCOMPLETE_OFFSET))(this);
		}
	};
}
