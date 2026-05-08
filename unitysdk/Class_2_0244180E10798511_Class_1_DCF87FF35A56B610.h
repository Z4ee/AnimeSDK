#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

class Class_2_0244180E10798511;
class Class_2_13ADC9176EE2A97C;
class Class_3_32CD58E95ADFF8F5_12;
namespace System { class Action; }

#define CLASS_2_0244180E10798511_CLASS_1_DCF87FF35A56B610_METHOD_1_407825C80963655C_OFFSET UNITYSDK_OFFSET(0xFB7FCB0)
#define CLASS_2_0244180E10798511_CLASS_1_DCF87FF35A56B610__CTOR_OFFSET UNITYSDK_OFFSET(0xFB7FCA0)

inline static constexpr unsigned int Class_2_0244180E10798511_Class_1_DCF87FF35A56B610_TypeDefinitionIndex = 58090;

class Class_2_0244180E10798511_Class_1_DCF87FF35A56B610 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::Class_2_13ADC9176EE2A97C* Field_1_1; // 0x18
	::System::Action* Field_1_6; // 0x20
	::Class_2_0244180E10798511* Field_1_0; // 0x28
	::Enum_3_DFCB42601400F441 Field_1_4; // 0x30
	::System::Int32 Field_1_3; // 0x34
	::System::Int32 Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_DCF87FF35A56B610__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_407825C80963655C(::Class_3_32CD58E95ADFF8F5_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_12*))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_DCF87FF35A56B610_METHOD_1_407825C80963655C_OFFSET))(this, a1);
	}
};
