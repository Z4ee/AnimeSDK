#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_CA2F5FC90FEC446E_Enum_3_56582377E8F44B3B.h"

namespace System { class String; }

#define CLASS_2_0D0B57FF916F9911_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1343A000)
#define CLASS_2_0D0B57FF916F9911_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1343A090)
#define CLASS_2_0D0B57FF916F9911__CCTOR_OFFSET UNITYSDK_OFFSET(0x13439F80)
#define CLASS_2_0D0B57FF916F9911__CTOR_OFFSET UNITYSDK_OFFSET(0x13439FF0)

inline static constexpr unsigned int Class_2_0D0B57FF916F9911_TypeDefinitionIndex = 52593;

class Class_2_0D0B57FF916F9911 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0xF2; // 0x0
	::System::String* Field_2_0; // 0x20
	::Class_2_CA2F5FC90FEC446E_Enum_3_56582377E8F44B3B Field_2_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0D0B57FF916F9911__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D0B57FF916F9911__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D0B57FF916F9911_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D0B57FF916F9911_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
