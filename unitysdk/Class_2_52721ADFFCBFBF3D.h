#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D96CF3F32F0BF24C.h"

namespace System { class String; }

#define CLASS_2_52721ADFFCBFBF3D_METHOD_2_0896BD0A4874338C_OFFSET UNITYSDK_OFFSET(0x104D6D80)
#define CLASS_2_52721ADFFCBFBF3D__CTOR_OFFSET UNITYSDK_OFFSET(0x104D6E20)

inline static constexpr unsigned int Class_2_52721ADFFCBFBF3D_TypeDefinitionIndex = 62112;

class Class_2_52721ADFFCBFBF3D : public ::Class_1_D96CF3F32F0BF24C
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52721ADFFCBFBF3D__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_0896BD0A4874338C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_52721ADFFCBFBF3D_METHOD_2_0896BD0A4874338C_OFFSET))(this, a1, a2);
	}
};
