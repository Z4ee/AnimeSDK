#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_AF84DCC8E0AA63E0_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xA6DB540)
#define CLASS_1_AF84DCC8E0AA63E0_METHOD_1_659B881A8763C779_1_OFFSET UNITYSDK_OFFSET(0xA6DB450)
#define CLASS_1_AF84DCC8E0AA63E0_METHOD_1_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0xA6DB380)
#define CLASS_1_AF84DCC8E0AA63E0__CTOR_OFFSET UNITYSDK_OFFSET(0xA6DB600)

inline static constexpr unsigned int Class_1_AF84DCC8E0AA63E0_TypeDefinitionIndex = 57245;

class Class_1_AF84DCC8E0AA63E0 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::DateTime Field_1_1; // 0x18
	::System::Double Field_1_2; // 0x20
	::System::DateTime Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF84DCC8E0AA63E0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF84DCC8E0AA63E0_METHOD_1_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_1_659B881A8763C779_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF84DCC8E0AA63E0_METHOD_1_659B881A8763C779_1_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF84DCC8E0AA63E0_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}
};
