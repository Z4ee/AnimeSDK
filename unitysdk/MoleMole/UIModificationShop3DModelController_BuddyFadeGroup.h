#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0x16DA2640)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP_START_OFFSET UNITYSDK_OFFSET(0x16DA2800)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP_WAITDONE_OFFSET UNITYSDK_OFFSET(0x16DA27B0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DA2B20)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA2B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIModificationShop3DModelController_BuddyFadeGroup_TypeDefinitionIndex = 48303;

	class UIModificationShop3DModelController_BuddyFadeGroup : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Switch_Out_Right()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIModificationShop3DModelController_BuddyFadeGroup_TypeDefinitionIndex)->GetStaticField(0x37C10);
		}
		static ::System::String** StaticGet_Switch_Out_Left()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIModificationShop3DModelController_BuddyFadeGroup_TypeDefinitionIndex)->GetStaticField(0x37C18);
		}
		static ::System::String** StaticGet_Switch_In_Right()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIModificationShop3DModelController_BuddyFadeGroup_TypeDefinitionIndex)->GetStaticField(0x37C20);
		}
		static ::System::String** StaticGet_Switch_In_Left()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIModificationShop3DModelController_BuddyFadeGroup_TypeDefinitionIndex)->GetStaticField(0x37C28);
		}
		// static const ::System::Single switchInTimeOffset; // 0x0
		// static const ::System::Single switchOutTimeOffset; // 0x0
		::UnityEngine::Animator* fadeOut; // 0x10
		::System::Action* waitDone; // 0x18
		::System::Action* endCall; // 0x20
		::UnityEngine::Animator* fadeIn; // 0x28
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
