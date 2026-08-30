#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class PropertyInfo; }

#define SRF_HELPERS_PROPERTYREFERENCE___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A9570)
#define SRF_HELPERS_PROPERTYREFERENCE___C__DISPLAYCLASS14_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1E6A9A40)
#define SRF_HELPERS_PROPERTYREFERENCE___C__DISPLAYCLASS14_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x1E6A9C80)

namespace SRF::Helpers
{
	inline static constexpr unsigned int PropertyReference___c__DisplayClass14_0_TypeDefinitionIndex = 34761;

	class PropertyReference___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Object* target; // 0x10
		::System::Reflection::PropertyInfo* property; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Object* __ctor_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE___C__DISPLAYCLASS14_0___CTOR_B__0_OFFSET))(this);
		}

		::System::Void __ctor_b__1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE___C__DISPLAYCLASS14_0___CTOR_B__1_OFFSET))(this, a1);
		}
	};
}
