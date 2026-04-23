#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_8427E1359F2A63E4_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x182F57F0)
#define CLASS_1_8427E1359F2A63E4__CTOR_OFFSET UNITYSDK_OFFSET(0x182F5BD0)

inline static constexpr unsigned int Class_1_8427E1359F2A63E4_TypeDefinitionIndex = 10757;

class Class_1_8427E1359F2A63E4 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::UInt32 Field_1_8; // 0x18
	::System::UInt32 Field_1_1; // 0x1C
	::RPG::Client::TextID Field_1_6; // 0x20
	::System::UInt32 Field_1_2; // 0x30
	::System::UInt32 Field_1_0; // 0x34
	::System::UInt32 Field_1_7; // 0x38
	::RPG::Client::TextID Field_1_5; // 0x40
	::RPG::Client::TextID Field_1_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8427E1359F2A63E4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_8427E1359F2A63E4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_8427E1359F2A63E4*&))((::PBYTE)hIl2Cpp + CLASS_1_8427E1359F2A63E4_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
