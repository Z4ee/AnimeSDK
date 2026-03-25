#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_171F9D986BE70A7F.h"

namespace System { class String; }

#define CLASS_2_CD5E39DFF42F2C46_METHOD_2_284A00008B880FD6_OFFSET UNITYSDK_OFFSET(0xB25E900)
#define CLASS_2_CD5E39DFF42F2C46_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB25E950)
#define CLASS_2_CD5E39DFF42F2C46__CTOR_OFFSET UNITYSDK_OFFSET(0xB25E8F0)
#define CLASS_2_CD5E39DFF42F2C46___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB25E9C0)

inline static constexpr unsigned int Class_2_CD5E39DFF42F2C46_TypeDefinitionIndex = 64461;

class Class_2_CD5E39DFF42F2C46 : public ::Class_1_171F9D986BE70A7F
{
public:
	::System::Double Field_2_0; // 0x10

	::System::Void _ctor(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_CD5E39DFF42F2C46__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_2_284A00008B880FD6()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5E39DFF42F2C46_METHOD_2_284A00008B880FD6_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5E39DFF42F2C46_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD5E39DFF42F2C46___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
