#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C7CDAED596480153;
class Class_2_15E317187C4E8254;
class Class_3_626F93E2306641CC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6F8F338C61AC3C1F_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8AD3790)
#define CLASS_1_6F8F338C61AC3C1F_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8AD3580)
#define CLASS_1_6F8F338C61AC3C1F_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x8AD4100)
#define CLASS_1_6F8F338C61AC3C1F_METHOD_1_1F5E0226DAD91587_OFFSET UNITYSDK_OFFSET(0x8AD3440)
#define CLASS_1_6F8F338C61AC3C1F_METHOD_1_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x8AD4CB0)
#define CLASS_1_6F8F338C61AC3C1F_METHOD_1_8DC1E1A0FA2BFE92_OFFSET UNITYSDK_OFFSET(0x8AD3D10)
#define CLASS_1_6F8F338C61AC3C1F_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x8AD53E0)
#define CLASS_1_6F8F338C61AC3C1F_METHOD_1_C69F10DC94E739D2_OFFSET UNITYSDK_OFFSET(0x8AD5210)
#define CLASS_1_6F8F338C61AC3C1F_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x8AD4010)
#define CLASS_1_6F8F338C61AC3C1F__CTOR_OFFSET UNITYSDK_OFFSET(0x8AD34C0)

inline static constexpr unsigned int Class_1_6F8F338C61AC3C1F_TypeDefinitionIndex = 63582;

class Class_1_6F8F338C61AC3C1F : public ::System::Object
{
public:
	::Class_1_C7CDAED596480153* Field_1_5; // 0x10
	::Class_3_626F93E2306641CC* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_2_15E317187C4E8254*>* Field_1_4; // 0x20
	::Class_1_C7CDAED596480153* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x30
	::System::Single Field_1_2; // 0x38
	::System::UInt32 Field_1_1; // 0x3C

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_6F8F338C61AC3C1F__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_6F8F338C61AC3C1F* Method_1_1F5E0226DAD91587(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_6F8F338C61AC3C1F*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_6F8F338C61AC3C1F_METHOD_1_1F5E0226DAD91587_OFFSET))(a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8F338C61AC3C1F_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8F338C61AC3C1F_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_8DC1E1A0FA2BFE92(::Class_2_15E317187C4E8254* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + CLASS_1_6F8F338C61AC3C1F_METHOD_1_8DC1E1A0FA2BFE92_OFFSET))(this, a1);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8F338C61AC3C1F_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8F338C61AC3C1F_METHOD_1_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_1_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8F338C61AC3C1F_METHOD_1_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_C69F10DC94E739D2(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F8F338C61AC3C1F_METHOD_1_C69F10DC94E739D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8F338C61AC3C1F_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}
};
