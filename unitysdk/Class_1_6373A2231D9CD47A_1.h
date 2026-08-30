#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinPrepareFightTalker.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_6373A2231D9CD47A_1_METHOD_1_417A218C63D0B3DA_OFFSET UNITYSDK_OFFSET(0x1DC5DD00)
#define CLASS_1_6373A2231D9CD47A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5E460)

inline static constexpr unsigned int Class_1_6373A2231D9CD47A_1_TypeDefinitionIndex = 11550;

class Class_1_6373A2231D9CD47A_1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* BNGEMNHEMAK; // 0x10
	::System::String* JKCHLJNLLNA; // 0x18
	::System::UInt32 KAHNDIPJGHI; // 0x20
	::System::UInt32 HNEIIAGADGO; // 0x24
	::System::UInt32 NHAINGEIMJA; // 0x28
	::System::UInt32 PHFMCACHFIJ; // 0x2C
	::RPG::Client::TextID NCHLCBICBGO; // 0x30
	::RPG::Client::TextID BMOKJDHHJBH; // 0x40
	::System::UInt32 MMEGCIGMALC; // 0x50
	::System::UInt32 JFDHFPIIGCC; // 0x54
	::System::Boolean PKLFLANJCDG; // 0x58
	::RPG::GameCore::FateRinPrepareFightTalker EHAFJKIKKMC; // 0x5C
	::RPG::Client::TextID KPJMHEPOOBL; // 0x60
	::RPG::Client::TextID JAJPGCBAIJA; // 0x70
	::RPG::Client::TextID OBJEJHKENKF; // 0x80
	::System::UInt32 OHFGNODANEP; // 0x90
	::System::UInt32 HPJHKACDIMB; // 0x94
	::RPG::Client::TextID HGNACOAJMIJ; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6373A2231D9CD47A_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_417A218C63D0B3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_6373A2231D9CD47A_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_6373A2231D9CD47A_1*&))((::PBYTE)hIl2Cpp + CLASS_1_6373A2231D9CD47A_1_METHOD_1_417A218C63D0B3DA_OFFSET))(a1, a2);
	}
};
