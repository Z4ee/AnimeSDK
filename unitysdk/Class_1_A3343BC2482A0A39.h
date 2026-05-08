#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A39345DBB4A757B0.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_A3343BC2482A0A39_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x10C032D0)
#define CLASS_1_A3343BC2482A0A39_METHOD_1_F08DF4AEFEA53D40_OFFSET UNITYSDK_OFFSET(0x10C03320)
#define CLASS_1_A3343BC2482A0A39__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10C032B0)
#define CLASS_1_A3343BC2482A0A39__CTOR_OFFSET UNITYSDK_OFFSET(0x10C032A0)

inline static constexpr unsigned int Class_1_A3343BC2482A0A39_TypeDefinitionIndex = 45528;

class Class_1_A3343BC2482A0A39 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Enum_3_A39345DBB4A757B0 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Int32 Field_1_3; // 0x20
	::System::Single Field_1_5; // 0x24
	::System::Single Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3343BC2482A0A39__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1, ::Enum_3_A39345DBB4A757B0 a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_A39345DBB4A757B0, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A3343BC2482A0A39__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A3343BC2482A0A39_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_F08DF4AEFEA53D40(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A3343BC2482A0A39_METHOD_1_F08DF4AEFEA53D40_OFFSET))(this, a1, a2);
	}
};
