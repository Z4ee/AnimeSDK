#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_527BF0C90BB0E2A7_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x177E86A0)
#define CLASS_2_527BF0C90BB0E2A7_METHOD_2_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0x177E87C0)
#define CLASS_2_527BF0C90BB0E2A7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x177E8730)
#define CLASS_2_527BF0C90BB0E2A7__CCTOR_OFFSET UNITYSDK_OFFSET(0x177E8620)
#define CLASS_2_527BF0C90BB0E2A7__CTOR_OFFSET UNITYSDK_OFFSET(0x177E8690)

inline static constexpr unsigned int Class_2_527BF0C90BB0E2A7_TypeDefinitionIndex = 63436;

class Class_2_527BF0C90BB0E2A7 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0x127; // 0x0
	::System::String* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_527BF0C90BB0E2A7__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_527BF0C90BB0E2A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_527BF0C90BB0E2A7_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_527BF0C90BB0E2A7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_60DC879ACE99CF48(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_527BF0C90BB0E2A7_METHOD_2_60DC879ACE99CF48_OFFSET))(this, a1);
	}
};
