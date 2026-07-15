#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_117;
class Class_0_16E4307DCC419505_224;
class Class_0_16E4307DCC419505_225;
class Class_1_D33B7D6901AE39E9;
class Class_2_1C9DAFE8E76EE3E9;
class Class_2_FD51057495DB654F;
class Class_3_7E25C9E6907AC48F;
namespace System { class Random; }

#define CLASS_1_A7511FA91F691388_EXECUTE_OFFSET UNITYSDK_OFFSET(0x187B2AC0)
#define CLASS_1_A7511FA91F691388_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x187B2690)
#define CLASS_1_A7511FA91F691388_METHOD_1_461D639BFE49CBBC_OFFSET UNITYSDK_OFFSET(0x187B2B70)
#define CLASS_1_A7511FA91F691388_METHOD_1_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x187B3C60)
#define CLASS_1_A7511FA91F691388_METHOD_1_98E97994F1118E66_OFFSET UNITYSDK_OFFSET(0x187B4890)
#define CLASS_1_A7511FA91F691388_ONFEVERTIMEREMOVED_OFFSET UNITYSDK_OFFSET(0x187B4440)
#define CLASS_1_A7511FA91F691388_ONFEVERTIME_OFFSET UNITYSDK_OFFSET(0x187B3FC0)
#define CLASS_1_A7511FA91F691388__CTOR_OFFSET UNITYSDK_OFFSET(0x187B2610)

inline static constexpr unsigned int Class_1_A7511FA91F691388_TypeDefinitionIndex = 40227;

class Class_1_A7511FA91F691388 : public ::System::Object
{
public:
	::System::Random* Field_1_0; // 0x10
	::Class_1_D33B7D6901AE39E9* Field_1_1; // 0x18
	::Class_3_7E25C9E6907AC48F* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::System::Boolean Field_1_5; // 0x2D
	::System::Int32 Field_1_6; // 0x30
	::System::Single Field_1_7; // 0x34
	::System::Single Field_1_8; // 0x38
	::System::Single Field_1_9; // 0x3C
	::System::Single Field_1_10; // 0x40

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_7E25C9E6907AC48F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + CLASS_1_A7511FA91F691388__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7511FA91F691388_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7511FA91F691388_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_80313B77C31AD02B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7511FA91F691388_METHOD_1_80313B77C31AD02B_OFFSET))(this);
	}

	::System::Void Method_1_461D639BFE49CBBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7511FA91F691388_METHOD_1_461D639BFE49CBBC_OFFSET))(this);
	}

	::System::Void OnFeverTime(::Class_2_1C9DAFE8E76EE3E9* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1C9DAFE8E76EE3E9*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A7511FA91F691388_ONFEVERTIME_OFFSET))(this, a1, a2);
	}

	::System::Void OnFeverTimeRemoved(::Class_2_1C9DAFE8E76EE3E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1C9DAFE8E76EE3E9*))((::PBYTE)hIl2Cpp + CLASS_1_A7511FA91F691388_ONFEVERTIMEREMOVED_OFFSET))(this, a1);
	}

	::System::Void Method_1_98E97994F1118E66(::Class_2_FD51057495DB654F* a1, ::Class_0_16E4307DCC419505_224* a2, ::Class_0_16E4307DCC419505_225* a3, ::Class_0_16E4307DCC419505_117* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*, ::Class_0_16E4307DCC419505_224*, ::Class_0_16E4307DCC419505_225*, ::Class_0_16E4307DCC419505_117*))((::PBYTE)hIl2Cpp + CLASS_1_A7511FA91F691388_METHOD_1_98E97994F1118E66_OFFSET))(this, a1, a2, a3, a4);
	}
};
