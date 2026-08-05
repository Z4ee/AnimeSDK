#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_3_999A2548CEC8AF9A_2_Class_1_534EF681CC2FBEA4_2_Class_3_BFA7E4E771888D0F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_DDE4AB70DC1F94B5_METHOD_1_7D72973E319E69B4_OFFSET UNITYSDK_OFFSET(0x1FB612A0)
#define CLASS_1_DDE4AB70DC1F94B5_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1FB61300)
#define CLASS_1_DDE4AB70DC1F94B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB61080)

inline static constexpr unsigned int Class_1_DDE4AB70DC1F94B5_TypeDefinitionIndex = 18986;

class Class_1_DDE4AB70DC1F94B5 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Field_1_11; // 0x10
	::System::String* Field_1_4; // 0x18
	::Class_0_16E4307DCC419505_29* Field_1_2; // 0x20
	::System::String* Field_1_5; // 0x28
	::System::Int32 Field_1_0; // 0x30
	::System::Int32 Field_1_7; // 0x34
	::System::Int32 Field_1_1; // 0x38
	::System::Int32 Field_1_6; // 0x3C

	::System::Void _ctor(::Class_0_16E4307DCC419505_29* a1, ::Class_3_999A2548CEC8AF9A_2_Class_1_534EF681CC2FBEA4_2_Class_3_BFA7E4E771888D0F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*, ::Class_3_999A2548CEC8AF9A_2_Class_1_534EF681CC2FBEA4_2_Class_3_BFA7E4E771888D0F*))((::PBYTE)hIl2Cpp + CLASS_1_DDE4AB70DC1F94B5__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_DDE4AB70DC1F94B5* Method_1_7D72973E319E69B4(::Class_0_16E4307DCC419505_29* a1, ::Class_3_999A2548CEC8AF9A_2_Class_1_534EF681CC2FBEA4_2_Class_3_BFA7E4E771888D0F* a2)
	{
		return ((::Class_1_DDE4AB70DC1F94B5*(*)(::Class_0_16E4307DCC419505_29*, ::Class_3_999A2548CEC8AF9A_2_Class_1_534EF681CC2FBEA4_2_Class_3_BFA7E4E771888D0F*))((::PBYTE)hIl2Cpp + CLASS_1_DDE4AB70DC1F94B5_METHOD_1_7D72973E319E69B4_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDE4AB70DC1F94B5_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
