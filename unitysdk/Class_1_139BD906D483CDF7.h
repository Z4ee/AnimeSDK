#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C032F688595C037D;
namespace System { class String; }

#define CLASS_1_139BD906D483CDF7__CTOR_OFFSET UNITYSDK_OFFSET(0x12504B90)

inline static constexpr unsigned int Class_1_139BD906D483CDF7_TypeDefinitionIndex = 68934;

class Class_1_139BD906D483CDF7 : public ::System::Object
{
public:
	::Class_3_C032F688595C037D* Field_1_10; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Boolean Field_1_6; // 0x20
	::System::Boolean Field_1_11; // 0x21
	::System::Boolean Field_1_7; // 0x22
	::System::Single Field_1_0; // 0x24
	::System::Int32 Field_1_1; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::System::Boolean Field_1_5; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139BD906D483CDF7__CTOR_OFFSET))(this);
	}
};
