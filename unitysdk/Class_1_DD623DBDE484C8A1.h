#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EBEEF823C6ADDCAA.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DD623DBDE484C8A1_METHOD_1_169C9AE8F88E4F64_OFFSET UNITYSDK_OFFSET(0x156295C0)
#define CLASS_1_DD623DBDE484C8A1__CTOR_OFFSET UNITYSDK_OFFSET(0x156295B0)

inline static constexpr unsigned int Class_1_DD623DBDE484C8A1_TypeDefinitionIndex = 54945;

class Class_1_DD623DBDE484C8A1 : public ::System::Object
{
public:
	::System::Int32 Field_1_5; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::Boolean Field_1_3; // 0x18
	::System::Boolean Field_1_4; // 0x19
	::Enum_3_EBEEF823C6ADDCAA Field_1_0; // 0x1C
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD623DBDE484C8A1__CTOR_OFFSET))(this);
	}

	static ::Class_1_DD623DBDE484C8A1* Method_1_169C9AE8F88E4F64(::Class_1_DD623DBDE484C8A1* a1)
	{
		return ((::Class_1_DD623DBDE484C8A1*(*)(::Class_1_DD623DBDE484C8A1*))((::PBYTE)hIl2Cpp + CLASS_1_DD623DBDE484C8A1_METHOD_1_169C9AE8F88E4F64_OFFSET))(a1);
	}
};
