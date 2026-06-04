#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_8427E1359F2A63E4_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x19358280)
#define CLASS_1_8427E1359F2A63E4__CTOR_OFFSET UNITYSDK_OFFSET(0x19358660)

inline static constexpr unsigned int Class_1_8427E1359F2A63E4_TypeDefinitionIndex = 10812;

class Class_1_8427E1359F2A63E4 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x28
	::System::UInt32 Field_1_3; // 0x2C
	::System::UInt32 Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x34
	::RPG::Client::TextID Field_1_6; // 0x38
	::System::UInt32 Field_1_7; // 0x48
	::RPG::Client::TextID Field_1_8; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8427E1359F2A63E4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_8427E1359F2A63E4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_8427E1359F2A63E4*&))((::PBYTE)hIl2Cpp + CLASS_1_8427E1359F2A63E4_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
