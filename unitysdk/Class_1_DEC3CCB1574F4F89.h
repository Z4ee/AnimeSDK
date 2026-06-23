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

#define CLASS_1_DEC3CCB1574F4F89_METHOD_1_411D979336CF04FF_OFFSET UNITYSDK_OFFSET(0xFDFF5C0)
#define CLASS_1_DEC3CCB1574F4F89_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xFDFF560)
#define CLASS_1_DEC3CCB1574F4F89_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xFDFFA30)
#define CLASS_1_DEC3CCB1574F4F89_METHOD_1_CD64D66BD4CBB3D8_OFFSET UNITYSDK_OFFSET(0xFDFFA40)
#define CLASS_1_DEC3CCB1574F4F89_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xFDFF5B0)
#define CLASS_1_DEC3CCB1574F4F89__CTOR_OFFSET UNITYSDK_OFFSET(0xFDFF520)

inline static constexpr unsigned int Class_1_DEC3CCB1574F4F89_TypeDefinitionIndex = 40519;

class Class_1_DEC3CCB1574F4F89 : public ::System::Object
{
public:
	::Class_3_8840398725162854* Field_1_3; // 0x10
	::Class_3_8840398725162854_1* Field_1_2; // 0x18
	::Class_1_BF85135934DD45B5* Field_1_1; // 0x20
	::System::String* Field_1_0; // 0x28
	::System::Boolean Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEC3CCB1574F4F89__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEC3CCB1574F4F89_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEC3CCB1574F4F89_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_411D979336CF04FF(::Class_1_859AC9B9C1B970A4* a1, ::System::Action* a2, ::System::Action_1<::Struct_2_9EC844EFE0300763>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_859AC9B9C1B970A4*, ::System::Action*, ::System::Action_1<::Struct_2_9EC844EFE0300763>*))((::PBYTE)hIl2Cpp + CLASS_1_DEC3CCB1574F4F89_METHOD_1_411D979336CF04FF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DEC3CCB1574F4F89_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD64D66BD4CBB3D8(::Class_1_859AC9B9C1B970A4* a1, ::System::Action* a2, ::System::Action_1<::Struct_2_9EC844EFE0300763>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_859AC9B9C1B970A4*, ::System::Action*, ::System::Action_1<::Struct_2_9EC844EFE0300763>*))((::PBYTE)hIl2Cpp + CLASS_1_DEC3CCB1574F4F89_METHOD_1_CD64D66BD4CBB3D8_OFFSET))(this, a1, a2, a3);
	}
};
