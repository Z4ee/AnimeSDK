#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_8427E1359F2A63E4_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x1BB9BA90)
#define CLASS_1_8427E1359F2A63E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB9BE70)

inline static constexpr unsigned int Class_1_8427E1359F2A63E4_TypeDefinitionIndex = 10862;

class Class_1_8427E1359F2A63E4 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x28
	::RPG::Client::TextID Field_1_3; // 0x38
	::System::UInt32 Field_1_4; // 0x48
	::System::UInt32 Field_1_5; // 0x4C
	::System::UInt32 Field_1_6; // 0x50
	::System::UInt32 Field_1_7; // 0x54
	::System::UInt32 Field_1_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8427E1359F2A63E4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_8427E1359F2A63E4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_8427E1359F2A63E4*&))((::PBYTE)hIl2Cpp + CLASS_1_8427E1359F2A63E4_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
