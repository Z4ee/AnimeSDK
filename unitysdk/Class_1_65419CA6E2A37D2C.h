#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9EC844EFE0300763.h"
#include "unitysdk/System/Object.h"

class Class_1_859AC9B9C1B970A4;
class Class_1_BF85135934DD45B5;
class Class_3_8840398725162854;
class Class_3_8840398725162854_1;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_65419CA6E2A37D2C_METHOD_1_433DD2C2F7417F16_OFFSET UNITYSDK_OFFSET(0x161C2DE0)
#define CLASS_1_65419CA6E2A37D2C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x161C3260)
#define CLASS_1_65419CA6E2A37D2C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x161C32B0)
#define CLASS_1_65419CA6E2A37D2C_METHOD_1_CD64D66BD4CBB3D8_OFFSET UNITYSDK_OFFSET(0x161C32C0)
#define CLASS_1_65419CA6E2A37D2C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x161C2DD0)
#define CLASS_1_65419CA6E2A37D2C__CTOR_OFFSET UNITYSDK_OFFSET(0x161C2D90)

inline static constexpr unsigned int Class_1_65419CA6E2A37D2C_TypeDefinitionIndex = 43979;

class Class_1_65419CA6E2A37D2C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_3_8840398725162854_1* Field_1_5; // 0x18
	::Class_3_8840398725162854* Field_1_6; // 0x20
	::Class_1_BF85135934DD45B5* Field_1_7; // 0x28
	::System::Boolean Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_433DD2C2F7417F16(::Class_1_859AC9B9C1B970A4* a1, ::System::Action* a2, ::System::Action_1<::Struct_2_9EC844EFE0300763>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_859AC9B9C1B970A4*, ::System::Action*, ::System::Action_1<::Struct_2_9EC844EFE0300763>*))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C_METHOD_1_433DD2C2F7417F16_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CD64D66BD4CBB3D8(::Class_1_859AC9B9C1B970A4* a1, ::System::Action* a2, ::System::Action_1<::Struct_2_9EC844EFE0300763>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_859AC9B9C1B970A4*, ::System::Action*, ::System::Action_1<::Struct_2_9EC844EFE0300763>*))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C_METHOD_1_CD64D66BD4CBB3D8_OFFSET))(this, a1, a2, a3);
	}
};
