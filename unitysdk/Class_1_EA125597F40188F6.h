#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_EA125597F40188F6_METHOD_1_2C65790CDB581E2C_OFFSET UNITYSDK_OFFSET(0xACA1FA0)
#define CLASS_1_EA125597F40188F6__CTOR_OFFSET UNITYSDK_OFFSET(0xACA2050)

inline static constexpr unsigned int Class_1_EA125597F40188F6_TypeDefinitionIndex = 73724;

class Class_1_EA125597F40188F6 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA125597F40188F6__CTOR_OFFSET))(this);
	}

	static ::Class_1_EA125597F40188F6* Method_1_2C65790CDB581E2C(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::Class_1_EA125597F40188F6*(*)(::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA125597F40188F6_METHOD_1_2C65790CDB581E2C_OFFSET))(a1, a2, a3);
	}
};
