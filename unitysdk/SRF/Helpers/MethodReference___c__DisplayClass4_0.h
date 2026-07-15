#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define SRF_HELPERS_METHODREFERENCE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECC430)
#define SRF_HELPERS_METHODREFERENCE___C__DISPLAYCLASS4_0__OP_IMPLICIT_B__0_OFFSET UNITYSDK_OFFSET(0x1CECC4F0)

namespace SRF::Helpers
{
	inline static constexpr unsigned int MethodReference___c__DisplayClass4_0_TypeDefinitionIndex = 33989;

	class MethodReference___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_METHODREFERENCE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Object* _op_Implicit_b__0(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SRF_HELPERS_METHODREFERENCE___C__DISPLAYCLASS4_0__OP_IMPLICIT_B__0_OFFSET))(this, a1);
		}
	};
}
