#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_447ED43F9613F177_1_METHOD_1_1FA67F2466ED59EC_OFFSET UNITYSDK_OFFSET(0x1C8BC260)
#define CLASS_1_447ED43F9613F177_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BC4B0)

inline static constexpr unsigned int Class_1_447ED43F9613F177_1_TypeDefinitionIndex = 12390;

class Class_1_447ED43F9613F177_1 : public ::System::Object
{
public:
	::System::String* HCCKLLGBPIA; // 0x10
	::System::UInt32 PHFMCACHFIJ; // 0x18
	::RPG::Client::TextID OENAMINOLLF; // 0x20
	::RPG::Client::TextID NMAHGFAPENI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_447ED43F9613F177_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FA67F2466ED59EC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_447ED43F9613F177_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_447ED43F9613F177_1*&))((::PBYTE)hIl2Cpp + CLASS_1_447ED43F9613F177_1_METHOD_1_1FA67F2466ED59EC_OFFSET))(a1, a2);
	}
};
