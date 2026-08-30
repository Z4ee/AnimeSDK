#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define SRF_HELPERS_METHODREFERENCE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A8B50)
#define SRF_HELPERS_METHODREFERENCE___C__DISPLAYCLASS1_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1E6A8C60)

namespace SRF::Helpers
{
	inline static constexpr unsigned int MethodReference___c__DisplayClass1_0_TypeDefinitionIndex = 34755;

	class MethodReference___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* method; // 0x10
		::System::Object* target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_METHODREFERENCE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Object* __ctor_b__0(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SRF_HELPERS_METHODREFERENCE___C__DISPLAYCLASS1_0___CTOR_B__0_OFFSET))(this, a1);
		}
	};
}
