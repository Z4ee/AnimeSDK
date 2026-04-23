#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeFrameFace.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class RubikCubePuzzleConditionObject; }
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_CHECKBLOCK_OFFSET UNITYSDK_OFFSET(0xAEC8EA0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEC7DE0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xAEC8BC0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_GET_MATCHEDANIMFINISH_OFFSET UNITYSDK_OFFSET(0xAEC9550)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_INITCONDITIONGROUP_OFFSET UNITYSDK_OFFSET(0xAEC85E0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_INITPREVIEWCUBE_OFFSET UNITYSDK_OFFSET(0xAEC7E20)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAEC8310)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_REFRESHSTATUS_OFFSET UNITYSDK_OFFSET(0xAEC87D0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_SETCOMPLETE_OFFSET UNITYSDK_OFFSET(0xAEC8E00)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_SET_MATCHEDANIMFINISH_OFFSET UNITYSDK_OFFSET(0xAEC9560)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0xAEC95C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xAEC9570)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleConditionGroup_TypeDefinitionIndex = 72317;

	class RubikCubePuzzleConditionGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_12()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleConditionGroup_TypeDefinitionIndex)->GetStaticField(0xB340);
		}
		static ::System::String** StaticGet_Field_5_13()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleConditionGroup_TypeDefinitionIndex)->GetStaticField(0xB348);
		}
		static ::System::Int32* StaticGet_Field_5_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleConditionGroup_TypeDefinitionIndex)->GetStaticField(0x4380);
		}
		::System::Boolean _MatchedAnimFinish_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FrameObj; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* TatumObj; // 0x28
		::RPG::Client::Prop::RubikCubeFrameFace FaceGroup; // 0x30
		::RPG::GameCore::GameEntity* Field_5_4; // 0x38
		::RPG::Client::Prop::RubikCubePuzzleCube* Field_5_5; // 0x40
		::UnityEngine::Animator* Field_5_6; // 0x48
		::Il2CppArray<::System::Int32>* Field_5_7; // 0x50
		::System::Boolean Field_5_8; // 0x58
		::System::Boolean Field_5_9; // 0x59
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleConditionObject*>* Field_5_10; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_DISPOSE_OFFSET))(this);
		}

		::System::Void InitPreviewCube()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_INITPREVIEWCUBE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_LATEUPDATE_OFFSET))(this);
		}

		::System::Void InitConditionGroup(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::RubikCubePuzzleCube* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RubikCubePuzzleCube*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_INITCONDITIONGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_REFRESHSTATUS_OFFSET))(this);
		}

		::System::Void SetComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_SETCOMPLETE_OFFSET))(this);
		}

		::System::Boolean CheckBlock(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_CHECKBLOCK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Boolean get_MatchedAnimFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_GET_MATCHEDANIMFINISH_OFFSET))(this);
		}

		::System::Void set_MatchedAnimFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_SET_MATCHEDANIMFINISH_OFFSET))(this, value);
		}
	};
}
