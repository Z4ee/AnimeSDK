#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::BehaviourTrees { class Filter; }

#define NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D7C2FA0)
#define NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7C3050)
#define NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7C30B0)
#define NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D7C3060)
#define NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7C2F90)
#define NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C2F80)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Filter__Cooldown_d__11_TypeDefinitionIndex = 30642;

	class Filter__Cooldown_d__11 : public ::System::Object
	{
	public:
		::NodeCanvas::BehaviourTrees::Filter* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER__COOLDOWN_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
