#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_9C0B4E74A45C3414_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x19D532B0)
#define CLASS_1_9C0B4E74A45C3414__CTOR_OFFSET UNITYSDK_OFFSET(0x19D53820)

inline static constexpr unsigned int Class_1_9C0B4E74A45C3414_TypeDefinitionIndex = 10849;

class Class_1_9C0B4E74A45C3414 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::RPG::Client::TextID Field_1_6; // 0x40
	::System::UInt32 Field_1_7; // 0x50
	::RPG::Client::TextID Field_1_8; // 0x58
	::RPG::Client::TextID Field_1_9; // 0x68
	::RPG::Client::TextID Field_1_10; // 0x78
	::RPG::Client::TextID Field_1_11; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C0B4E74A45C3414__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_9C0B4E74A45C3414*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_9C0B4E74A45C3414*&))((::PBYTE)hIl2Cpp + CLASS_1_9C0B4E74A45C3414_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
