#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_A2FBC2AB44325ABA;
class Class_3_AC409CB634C73560_1;
namespace System { class String; }

#define CLASS_1_5F7DC6C255126730__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11919240)
#define CLASS_1_5F7DC6C255126730__CTOR_OFFSET UNITYSDK_OFFSET(0x119190E0)

inline static constexpr unsigned int Class_1_5F7DC6C255126730_TypeDefinitionIndex = 58839;

class Class_1_5F7DC6C255126730 : public ::System::Object
{
public:
	::System::String* Field_1_8; // 0x10
	::System::String* Field_1_5; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_0; // 0x28
	::System::String* Field_1_1; // 0x30
	::System::UInt32 Field_1_11; // 0x38
	::System::UInt32 Field_1_10; // 0x3C
	::System::UInt32 Field_1_7; // 0x40
	::System::UInt32 Field_1_6; // 0x44
	::System::Boolean Field_1_4; // 0x48
	::System::Int32 Field_1_9; // 0x4C

	::System::Void _ctor(::Class_3_AC409CB634C73560_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AC409CB634C73560_1*))((::PBYTE)hIl2Cpp + CLASS_1_5F7DC6C255126730__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_3_A2FBC2AB44325ABA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A2FBC2AB44325ABA*))((::PBYTE)hIl2Cpp + CLASS_1_5F7DC6C255126730__CTOR_1_OFFSET))(this, a1);
	}
};
