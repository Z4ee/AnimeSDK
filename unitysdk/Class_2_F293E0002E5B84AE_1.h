#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_F293E0002E5B84AE_1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1A8246E0)
#define CLASS_2_F293E0002E5B84AE_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A824770)
#define CLASS_2_F293E0002E5B84AE_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A824660)
#define CLASS_2_F293E0002E5B84AE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8246D0)

inline static constexpr unsigned int Class_2_F293E0002E5B84AE_1_TypeDefinitionIndex = 51711;

class Class_2_F293E0002E5B84AE_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0xF0; // 0x0
	::System::String* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F293E0002E5B84AE_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F293E0002E5B84AE_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F293E0002E5B84AE_1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F293E0002E5B84AE_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
