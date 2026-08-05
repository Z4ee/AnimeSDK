#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_C34CCD7720C1C051.h"

#define CLASS_2_95842040E0DD1336_2_METHOD_2_4D623CB5F7A86270_OFFSET UNITYSDK_OFFSET(0x125AC960)
#define CLASS_2_95842040E0DD1336_2_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x125AC8D0)
#define CLASS_2_95842040E0DD1336_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x125AC9F0)
#define CLASS_2_95842040E0DD1336_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x125AC850)
#define CLASS_2_95842040E0DD1336_2__CTOR_OFFSET UNITYSDK_OFFSET(0x125AC8C0)

inline static constexpr unsigned int Class_2_95842040E0DD1336_2_TypeDefinitionIndex = 73603;

class Class_2_95842040E0DD1336_2 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0xC8; // 0x0
	::Enum_3_C34CCD7720C1C051 Field_2_1; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_95842040E0DD1336_2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95842040E0DD1336_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95842040E0DD1336_2_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_4D623CB5F7A86270(::System::UInt32 a1, ::Enum_3_C34CCD7720C1C051 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_C34CCD7720C1C051))((::PBYTE)hIl2Cpp + CLASS_2_95842040E0DD1336_2_METHOD_2_4D623CB5F7A86270_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95842040E0DD1336_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
