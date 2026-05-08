#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_3;
class Class_3_538386D24BBB5EC4_1_Class_1_534EF681CC2FBEA4_2_Class_3_28B40D96A1DAF20D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_DDE4AB70DC1F94B5_METHOD_1_7D72973E319E69B4_OFFSET UNITYSDK_OFFSET(0x1B516240)
#define CLASS_1_DDE4AB70DC1F94B5_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1B5162A0)
#define CLASS_1_DDE4AB70DC1F94B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1B516020)

inline static constexpr unsigned int Class_1_DDE4AB70DC1F94B5_TypeDefinitionIndex = 9236;

class Class_1_DDE4AB70DC1F94B5 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::Class_0_16E4307DCC419505_3* Field_1_0; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Field_1_7; // 0x20
	::System::String* Field_1_5; // 0x28
	::System::Int32 Field_1_2; // 0x30
	::System::Int32 Field_1_4; // 0x34
	::System::Int32 Field_1_1; // 0x38
	::System::Int32 Field_1_3; // 0x3C

	::System::Void _ctor(::Class_0_16E4307DCC419505_3* a1, ::Class_3_538386D24BBB5EC4_1_Class_1_534EF681CC2FBEA4_2_Class_3_28B40D96A1DAF20D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_3*, ::Class_3_538386D24BBB5EC4_1_Class_1_534EF681CC2FBEA4_2_Class_3_28B40D96A1DAF20D*))((::PBYTE)hIl2Cpp + CLASS_1_DDE4AB70DC1F94B5__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_DDE4AB70DC1F94B5* Method_1_7D72973E319E69B4(::Class_0_16E4307DCC419505_3* a1, ::Class_3_538386D24BBB5EC4_1_Class_1_534EF681CC2FBEA4_2_Class_3_28B40D96A1DAF20D* a2)
	{
		return ((::Class_1_DDE4AB70DC1F94B5*(*)(::Class_0_16E4307DCC419505_3*, ::Class_3_538386D24BBB5EC4_1_Class_1_534EF681CC2FBEA4_2_Class_3_28B40D96A1DAF20D*))((::PBYTE)hIl2Cpp + CLASS_1_DDE4AB70DC1F94B5_METHOD_1_7D72973E319E69B4_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDE4AB70DC1F94B5_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
