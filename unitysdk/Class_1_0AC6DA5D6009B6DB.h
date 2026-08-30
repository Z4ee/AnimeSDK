#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_0AC6DA5D6009B6DB_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1A405DD0)
#define CLASS_1_0AC6DA5D6009B6DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A406600)

inline static constexpr unsigned int Class_1_0AC6DA5D6009B6DB_TypeDefinitionIndex = 11562;

class Class_1_0AC6DA5D6009B6DB : public ::System::Object
{
public:
	::System::String* IAOIMDKHPCG; // 0x10
	::System::String* OLOIFNNLKJP; // 0x18
	::RPG::Client::TextID PDBNACBFHGN; // 0x20
	::RPG::GameCore::FateRinCaseBoardAvatarType BEDFGGKCODK; // 0x30
	::System::UInt32 GMCBNNKJAGJ; // 0x34
	::RPG::Client::TextID FGKOGGMACBA; // 0x38
	::RPG::Client::TextID LEPNNKOAOJF; // 0x48
	::RPG::Client::TextID NNLLEEHJHMK; // 0x58
	::RPG::Client::TextID ENACPJCCIAP; // 0x68
	::RPG::Client::TextID EEJPJOPLIFH; // 0x78
	::RPG::Client::TextID OENAMINOLLF; // 0x88
	::RPG::Client::TextID HKDMGOBJIMA; // 0x98
	::RPG::Client::TextID IIIOIGMEHGG; // 0xA8
	::RPG::Client::TextID ILEHHBEEDBP; // 0xB8
	::RPG::Client::TextID CENPLDELHNG; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC6DA5D6009B6DB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0AC6DA5D6009B6DB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0AC6DA5D6009B6DB*&))((::PBYTE)hIl2Cpp + CLASS_1_0AC6DA5D6009B6DB_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
