#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_0AC6DA5D6009B6DB_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1B5F0DB0)
#define CLASS_1_0AC6DA5D6009B6DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F15F0)

inline static constexpr unsigned int Class_1_0AC6DA5D6009B6DB_TypeDefinitionIndex = 11173;

class Class_1_0AC6DA5D6009B6DB : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x20
	::RPG::Client::TextID Field_1_3; // 0x30
	::RPG::Client::TextID Field_1_4; // 0x40
	::RPG::Client::TextID Field_1_5; // 0x50
	::RPG::Client::TextID Field_1_6; // 0x60
	::RPG::Client::TextID Field_1_7; // 0x70
	::RPG::Client::TextID Field_1_8; // 0x80
	::System::UInt32 Field_1_9; // 0x90
	::RPG::GameCore::FateRinCaseBoardAvatarType Field_1_10; // 0x94
	::RPG::Client::TextID Field_1_11; // 0x98
	::RPG::Client::TextID Field_1_12; // 0xA8
	::RPG::Client::TextID Field_1_13; // 0xB8
	::RPG::Client::TextID Field_1_14; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC6DA5D6009B6DB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0AC6DA5D6009B6DB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0AC6DA5D6009B6DB*&))((::PBYTE)hIl2Cpp + CLASS_1_0AC6DA5D6009B6DB_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
