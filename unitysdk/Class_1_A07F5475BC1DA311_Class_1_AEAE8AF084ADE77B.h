#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_652;
class Class_3_3B91E9B720B814BB;
namespace System { class String; }

#define CLASS_1_A07F5475BC1DA311_CLASS_1_AEAE8AF084ADE77B__CTOR_OFFSET UNITYSDK_OFFSET(0x1919EE40)

inline static constexpr unsigned int Class_1_A07F5475BC1DA311_Class_1_AEAE8AF084ADE77B_TypeDefinitionIndex = 59690;

class Class_1_A07F5475BC1DA311_Class_1_AEAE8AF084ADE77B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_652* FJCAKOIDONG; // 0x10
	::Class_3_3B91E9B720B814BB* JCHIMPGIMCE; // 0x18
	::System::String* MLACNPDMCGK; // 0x20
	::System::Int64 EEBBDOKAKOM; // 0x28
	::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_CLASS_1_AEAE8AF084ADE77B__CTOR_OFFSET))(this);
	}
};
