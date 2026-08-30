#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AnimatorButton; }

#define RPG_CLIENT_ANIMATORBUTTON___ONANIMATORFINISHSUBMIT_D__55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B315F60)
#define RPG_CLIENT_ANIMATORBUTTON___ONANIMATORFINISHSUBMIT_D__55_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B316020)
#define RPG_CLIENT_ANIMATORBUTTON___ONANIMATORFINISHSUBMIT_D__55_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B316080)
#define RPG_CLIENT_ANIMATORBUTTON___ONANIMATORFINISHSUBMIT_D__55_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B316030)
#define RPG_CLIENT_ANIMATORBUTTON___ONANIMATORFINISHSUBMIT_D__55_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B315F50)
#define RPG_CLIENT_ANIMATORBUTTON___ONANIMATORFINISHSUBMIT_D__55__CTOR_OFFSET UNITYSDK_OFFSET(0x1B315B90)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorButton___OnAnimatorFinishSubmit_d__55_TypeDefinitionIndex = 72429;

	class AnimatorButton___OnAnimatorFinishSubmit_d__55 : public ::System::Object
	{
	public:
		::RPG::Client::AnimatorButton* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single _elapsedTime_5__3; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Single _fadeTime_5__2; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___ONANIMATORFINISHSUBMIT_D__55__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___ONANIMATORFINISHSUBMIT_D__55_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___ONANIMATORFINISHSUBMIT_D__55_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___ONANIMATORFINISHSUBMIT_D__55_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___ONANIMATORFINISHSUBMIT_D__55_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBUTTON___ONANIMATORFINISHSUBMIT_D__55_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
