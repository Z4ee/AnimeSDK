#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_418226234D9A97D8_METHOD_1_C98173A7D7D715B5_OFFSET UNITYSDK_OFFSET(0x1CB71F30)
#define CLASS_1_418226234D9A97D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB72160)

inline static constexpr unsigned int Class_1_418226234D9A97D8_TypeDefinitionIndex = 12397;

class Class_1_418226234D9A97D8 : public ::System::Object
{
public:
	::RPG::Client::TextID AABNPBGMOFN; // 0x10
	::System::UInt32 PHFMCACHFIJ; // 0x20
	::System::Single IEHPFADHJFD; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_418226234D9A97D8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_C98173A7D7D715B5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_418226234D9A97D8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_418226234D9A97D8*&))((::PBYTE)hIl2Cpp + CLASS_1_418226234D9A97D8_METHOD_1_C98173A7D7D715B5_OFFSET))(a1, a2);
	}
};
