#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_DB66722311040883_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x18B8F060)
#define CLASS_1_DB66722311040883__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8F460)

inline static constexpr unsigned int Class_1_DB66722311040883_TypeDefinitionIndex = 10808;

class Class_1_DB66722311040883 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_9; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::UInt32 Field_1_7; // 0x28
	::System::UInt32 Field_1_0; // 0x2C
	::System::UInt32 Field_1_6; // 0x30
	::System::UInt32 Field_1_8; // 0x34
	::System::UInt32 Field_1_5; // 0x38
	::RPG::Client::TextID Field_1_3; // 0x40
	::System::Boolean Field_1_10; // 0x50
	::System::UInt32 Field_1_4; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB66722311040883__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_DB66722311040883*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_DB66722311040883*&))((::PBYTE)hIl2Cpp + CLASS_1_DB66722311040883_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
