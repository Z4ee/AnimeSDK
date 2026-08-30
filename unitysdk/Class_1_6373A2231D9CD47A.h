#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/FateRinHouguRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_6373A2231D9CD47A_METHOD_1_417A218C63D0B3DA_OFFSET UNITYSDK_OFFSET(0x1CA95210)
#define CLASS_1_6373A2231D9CD47A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA95A60)

inline static constexpr unsigned int Class_1_6373A2231D9CD47A_TypeDefinitionIndex = 11522;

class Class_1_6373A2231D9CD47A : public ::System::Object
{
public:
	::System::String* OLOIFNNLKJP; // 0x10
	::Il2CppArray<::System::UInt32>* NOFHEEJMCLH; // 0x18
	::System::String* HHBNIODGKKE; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x28
	::System::String* GINFOPOAKHK; // 0x30
	::Il2CppArray<::System::UInt32>* AHONBLHLHIO; // 0x38
	::System::String* JKCHLJNLLNA; // 0x40
	::System::String* KALCGCPPMBD; // 0x48
	::System::String* OCMHKMFBLJN; // 0x50
	::System::Int32 OICGFNGNLOE; // 0x58
	::System::UInt32 PHFMCACHFIJ; // 0x5C
	::RPG::Client::TextID OENAMINOLLF; // 0x60
	::RPG::GameCore::FateRinHouguOwnerType GMPGDEINODK; // 0x70
	::System::UInt32 NHALJPDONCP; // 0x74
	::RPG::Client::TextID IJEJGCEAFAF; // 0x78
	::System::UInt32 NALMBOOCCIN; // 0x88
	::System::Boolean GBOMPEGMLEN; // 0x8C
	::System::Boolean KEDLONFFJHO; // 0x8D
	::System::UInt32 PDLFPMJCLDF; // 0x90
	::RPG::GameCore::FateRinHouguRarityType PMIEAEGJNMJ; // 0x94
	::RPG::Client::TextID PLHINENDNDO; // 0x98
	::RPG::Client::TextID OKCCPDBENOJ; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6373A2231D9CD47A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_417A218C63D0B3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_6373A2231D9CD47A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_6373A2231D9CD47A*&))((::PBYTE)hIl2Cpp + CLASS_1_6373A2231D9CD47A_METHOD_1_417A218C63D0B3DA_OFFSET))(a1, a2);
	}
};
