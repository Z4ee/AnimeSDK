#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C032F688595C037D;
namespace System { class String; }

#define CLASS_1_139BD906D483CDF7__CTOR_OFFSET UNITYSDK_OFFSET(0x175B6AC0)

inline static constexpr unsigned int Class_1_139BD906D483CDF7_TypeDefinitionIndex = 62506;

class Class_1_139BD906D483CDF7 : public ::System::Object
{
public:
	::Class_3_C032F688595C037D* Field_1_8; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Boolean Field_1_4; // 0x20
	::System::Boolean Field_1_7; // 0x21
	::System::Int32 Field_1_1; // 0x24
	::System::Boolean Field_1_5; // 0x28
	::System::Boolean Field_1_6; // 0x29
	::System::Boolean Field_1_3; // 0x2A
	::System::Single Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139BD906D483CDF7__CTOR_OFFSET))(this);
	}
};
