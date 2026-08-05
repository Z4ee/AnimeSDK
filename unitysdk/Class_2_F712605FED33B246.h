#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/Class_1_7B7970D0E94833DA.h"
#include "unitysdk/MoleMole/AICompareType.h"

class Class_3_D252341484B6EB1D;
class Class_3_F33F9DC5F4112336;
namespace System { class String; }

#define CLASS_2_F712605FED33B246_METHOD_2_1139E4D260921DF7_OFFSET UNITYSDK_OFFSET(0x1479E150)
#define CLASS_2_F712605FED33B246_METHOD_2_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0x1479DA50)
#define CLASS_2_F712605FED33B246_METHOD_2_CB093E2033B125C5_OFFSET UNITYSDK_OFFSET(0x1479E0C0)
#define CLASS_2_F712605FED33B246__CTOR_OFFSET UNITYSDK_OFFSET(0x1479E140)

inline static constexpr unsigned int Class_2_F712605FED33B246_TypeDefinitionIndex = 42474;

class Class_2_F712605FED33B246 : public ::Class_1_7B7970D0E94833DA
{
public:
	::System::String* Field_2_5; // 0x28
	::Class_3_F33F9DC5F4112336* Field_2_1; // 0x30
	::System::Int32 Field_2_4; // 0x38
	::System::Single Field_2_8; // 0x3C
	::System::Boolean Field_2_6; // 0x40
	::System::Int32 Field_2_11; // 0x44
	::System::Single Field_2_0; // 0x48
	::System::Int32 Field_2_7; // 0x4C
	::System::Int32 Field_2_10; // 0x50
	::MoleMole::AICompareType Field_2_9; // 0x54
	::System::Single Field_2_15; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F712605FED33B246__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F712605FED33B246_METHOD_2_35942D7A8A374AB0_OFFSET))(this);
	}

	::System::Void Method_2_1139E4D260921DF7(::Class_3_F33F9DC5F4112336* a1, ::Class_3_D252341484B6EB1D* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Class_3_D252341484B6EB1D*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F712605FED33B246_METHOD_2_1139E4D260921DF7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CB093E2033B125C5(::BehaviorDesigner::Runtime::Tasks::TaskStatus a1)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + CLASS_2_F712605FED33B246_METHOD_2_CB093E2033B125C5_OFFSET))(this, a1);
	}
};
