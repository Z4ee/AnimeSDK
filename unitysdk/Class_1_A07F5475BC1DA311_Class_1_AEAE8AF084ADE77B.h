#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_480;
class Class_3_3B91E9B720B814BB;
namespace System { class String; }

#define CLASS_1_A07F5475BC1DA311_CLASS_1_AEAE8AF084ADE77B__CTOR_OFFSET UNITYSDK_OFFSET(0x8CACF70)

inline static constexpr unsigned int Class_1_A07F5475BC1DA311_Class_1_AEAE8AF084ADE77B_TypeDefinitionIndex = 48186;

class Class_1_A07F5475BC1DA311_Class_1_AEAE8AF084ADE77B : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_480* Field_1_2; // 0x18
	::Class_3_3B91E9B720B814BB* Field_1_1; // 0x20
	::RPG::Client::ByteHash16 Field_1_3; // 0x28
	::System::Int64 Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07F5475BC1DA311_CLASS_1_AEAE8AF084ADE77B__CTOR_OFFSET))(this);
	}
};
