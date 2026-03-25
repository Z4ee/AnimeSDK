#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D96CF3F32F0BF24C.h"

namespace System { class String; }

#define CLASS_2_DB009987A61D3F51_METHOD_2_AC36A207159EF742_OFFSET UNITYSDK_OFFSET(0x8A86770)
#define CLASS_2_DB009987A61D3F51__CTOR_OFFSET UNITYSDK_OFFSET(0x8A86930)

inline static constexpr unsigned int Class_2_DB009987A61D3F51_TypeDefinitionIndex = 62113;

class Class_2_DB009987A61D3F51 : public ::Class_1_D96CF3F32F0BF24C
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB009987A61D3F51__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_AC36A207159EF742(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DB009987A61D3F51_METHOD_2_AC36A207159EF742_OFFSET))(this, a1, a2);
	}
};
