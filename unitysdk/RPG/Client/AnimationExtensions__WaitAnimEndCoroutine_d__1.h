#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_ANIMATIONEXTENSIONS__WAITANIMENDCOROUTINE_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x90C3070)
#define RPG_CLIENT_ANIMATIONEXTENSIONS__WAITANIMENDCOROUTINE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x90C30E0)
#define RPG_CLIENT_ANIMATIONEXTENSIONS__WAITANIMENDCOROUTINE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x90C3140)
#define RPG_CLIENT_ANIMATIONEXTENSIONS__WAITANIMENDCOROUTINE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x90C30F0)
#define RPG_CLIENT_ANIMATIONEXTENSIONS__WAITANIMENDCOROUTINE_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90C3060)
#define RPG_CLIENT_ANIMATIONEXTENSIONS__WAITANIMENDCOROUTINE_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x90C2BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimationExtensions__WaitAnimEndCoroutine_d__1_TypeDefinitionIndex = 59636;

	class AnimationExtensions__WaitAnimEndCoroutine_d__1 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* animation; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Action_1<::System::Object*>* callback; // 0x20
		::System::Object* callbackParam; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONEXTENSIONS__WAITANIMENDCOROUTINE_D__1__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONEXTENSIONS__WAITANIMENDCOROUTINE_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONEXTENSIONS__WAITANIMENDCOROUTINE_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONEXTENSIONS__WAITANIMENDCOROUTINE_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONEXTENSIONS__WAITANIMENDCOROUTINE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONEXTENSIONS__WAITANIMENDCOROUTINE_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
