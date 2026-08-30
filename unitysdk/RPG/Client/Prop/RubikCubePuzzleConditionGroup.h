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

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_CHECKBLOCK_OFFSET UNITYSDK_OFFSET(0xDD1A7D0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD199C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xDD1A490)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_GET_MATCHEDANIMFINISH_OFFSET UNITYSDK_OFFSET(0xDD1ACE0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_INITCONDITIONGROUP_OFFSET UNITYSDK_OFFSET(0xDD14F20)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_INITPREVIEWCUBE_OFFSET UNITYSDK_OFFSET(0xDD19A00)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDD19F70)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_REFRESHSTATUS_OFFSET UNITYSDK_OFFSET(0xDD1A0C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_SETCOMPLETE_OFFSET UNITYSDK_OFFSET(0xDD1A6C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_SET_MATCHEDANIMFINISH_OFFSET UNITYSDK_OFFSET(0xDD1ACF0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0xDD1AD50)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xDD1AD00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleConditionGroup_TypeDefinitionIndex = 78350;

	class RubikCubePuzzleConditionGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_NBPBPHICDAJ()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleConditionGroup_TypeDefinitionIndex)->GetStaticField(0x65A60);
		}
		static ::System::String** StaticGet_GIMDMMDNPHO()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleConditionGroup_TypeDefinitionIndex)->GetStaticField(0x65A68);
		}
		static ::System::Int32* StaticGet_CHBOPBBJNAK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RubikCubePuzzleConditionGroup_TypeDefinitionIndex)->GetStaticField(0x14F50);
		}
		::System::Boolean _MatchedAnimFinish_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FrameObj; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* TatumObj; // 0x28
		::RPG::Client::Prop::RubikCubeFrameFace FaceGroup; // 0x30
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x38
		::RPG::Client::Prop::RubikCubePuzzleCube* FNHJKBEIKOA; // 0x40
		::UnityEngine::Animator* APPGGMLEPLN; // 0x48
		::Il2CppArray<::System::Int32>* LMNAODMFONI; // 0x50
		::System::Boolean OJNMBKMGEOM; // 0x58
		::System::Boolean PKEGAILBFBL; // 0x59
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleConditionObject*>* AKKEFNIDMJP; // 0x60

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

		::System::Void set_MatchedAnimFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONGROUP_SET_MATCHEDANIMFINISH_OFFSET))(this, a1);
		}
	};
}
