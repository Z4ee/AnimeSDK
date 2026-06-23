#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_945ACFB1FEBC7A2C.h"

namespace System { class String; }

#define CLASS_2_03B97630B489D7CA_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1305C910)
#define CLASS_2_03B97630B489D7CA_METHOD_2_C0D97952CA99F11F_OFFSET UNITYSDK_OFFSET(0x1305C860)
#define CLASS_2_03B97630B489D7CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1305C900)

inline static constexpr unsigned int Class_2_03B97630B489D7CA_TypeDefinitionIndex = 84259;

class Class_2_03B97630B489D7CA : public ::Class_1_945ACFB1FEBC7A2C
{
public:
	::System::String* Field_2_3; // 0x18
	::System::Boolean Field_2_4; // 0x20
	::System::Int32 Field_2_0; // 0x24
	::System::Int32 Field_2_1; // 0x28
	::System::Int32 Field_2_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03B97630B489D7CA__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_C0D97952CA99F11F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03B97630B489D7CA_METHOD_2_C0D97952CA99F11F_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03B97630B489D7CA_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
