#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0x198728E0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP_START_OFFSET UNITYSDK_OFFSET(0x19872AA0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP_WAITDONE_OFFSET UNITYSDK_OFFSET(0x19872A50)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x19872DC0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19872DB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIModificationShop3DModelController_BuddyFadeGroup_TypeDefinitionIndex = 67401;

	class UIModificationShop3DModelController_BuddyFadeGroup : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Switch_Out_Right()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIModificationShop3DModelController_BuddyFadeGroup_TypeDefinitionIndex)->GetStaticField(0x3A5C0);
		}
		static ::System::String** StaticGet_Switch_In_Right()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIModificationShop3DModelController_BuddyFadeGroup_TypeDefinitionIndex)->GetStaticField(0x3A5C8);
		}
		static ::System::String** StaticGet_Switch_In_Left()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIModificationShop3DModelController_BuddyFadeGroup_TypeDefinitionIndex)->GetStaticField(0x3A5D0);
		}
		static ::System::String** StaticGet_Switch_Out_Left()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIModificationShop3DModelController_BuddyFadeGroup_TypeDefinitionIndex)->GetStaticField(0x3A5D8);
		}
		// static const ::System::Single switchInTimeOffset; // 0x0
		// static const ::System::Single switchOutTimeOffset; // 0x0
		::UnityEngine::Animator* fadeIn; // 0x10
		::UnityEngine::Animator* fadeOut; // 0x18
		::System::Action* waitDone; // 0x20
		::System::Action* endCall; // 0x28
		::Foundation::Coroutine::CoroutineHandle fadeIn_Coroutine; // 0x30
		::Foundation::Coroutine::CoroutineHandle fadeOut_Coroutine; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP__CCTOR_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP_CLEAR_OFFSET))(this);
		}

		::System::Void WaitDone(::System::Action* done)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP_WAITDONE_OFFSET))(this, done);
		}

		::System::Void Start(::System::Action* endCall, ::System::Action* onSwitch, ::System::Boolean isLeft)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP_START_OFFSET))(this, endCall, onSwitch, isLeft);
		}
	};
}
