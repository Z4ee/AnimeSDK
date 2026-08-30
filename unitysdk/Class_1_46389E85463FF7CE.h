#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournPersonaStyleGiftRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_46389E85463FF7CE_METHOD_1_417A218C63D0B3DA_OFFSET UNITYSDK_OFFSET(0x1CA669B0)
#define CLASS_1_46389E85463FF7CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA66E00)

inline static constexpr unsigned int Class_1_46389E85463FF7CE_TypeDefinitionIndex = 14898;

class Class_1_46389E85463FF7CE : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* NIKKAPEIDJO; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x18
	::System::String* OLOIFNNLKJP; // 0x20
	::RPG::Client::TextID MJOOFPBABEA; // 0x28
	::RPG::Client::TextID DEGHFCJNECP; // 0x38
	::RPG::Client::TextID NMAHGFAPENI; // 0x48
	::System::UInt32 FMDMDDCBPAM; // 0x58
	::RPG::GameCore::RogueTournPersonaStyleGiftRarityType PMIEAEGJNMJ; // 0x5C
	::System::Boolean HILFNIOLPHN; // 0x60
	::System::UInt32 KGOEAGHJFKD; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46389E85463FF7CE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_417A218C63D0B3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_46389E85463FF7CE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_46389E85463FF7CE*&))((::PBYTE)hIl2Cpp + CLASS_1_46389E85463FF7CE_METHOD_1_417A218C63D0B3DA_OFFSET))(a1, a2);
	}
};
