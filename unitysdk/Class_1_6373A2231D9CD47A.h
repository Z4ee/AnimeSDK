#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/FateRinHouguRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_6373A2231D9CD47A_METHOD_1_417A218C63D0B3DA_OFFSET UNITYSDK_OFFSET(0x1D01BFF0)
#define CLASS_1_6373A2231D9CD47A__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01C840)

inline static constexpr unsigned int Class_1_6373A2231D9CD47A_TypeDefinitionIndex = 11538;

class Class_1_6373A2231D9CD47A : public ::System::Object
{
public:
	::System::String* HHBNIODGKKE; // 0x10
	::System::String* OCMHKMFBLJN; // 0x18
	::System::String* KALCGCPPMBD; // 0x20
	::System::String* GINFOPOAKHK; // 0x28
	::Il2CppArray<::System::UInt32>* NOFHEEJMCLH; // 0x30
	::Il2CppArray<::System::UInt32>* AHONBLHLHIO; // 0x38
	::System::String* JKCHLJNLLNA; // 0x40
	::System::String* OLOIFNNLKJP; // 0x48
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x50
	::RPG::Client::TextID OKCCPDBENOJ; // 0x58
	::System::Int32 OICGFNGNLOE; // 0x68
	::RPG::GameCore::FateRinHouguRarityType PMIEAEGJNMJ; // 0x6C
	::RPG::Client::TextID OENAMINOLLF; // 0x70
	::RPG::GameCore::FateRinHouguOwnerType GMPGDEINODK; // 0x80
	::System::UInt32 PDLFPMJCLDF; // 0x84
	::RPG::Client::TextID PLHINENDNDO; // 0x88
	::RPG::Client::TextID IJEJGCEAFAF; // 0x98
	::System::UInt32 NALMBOOCCIN; // 0xA8
	::System::UInt32 NHALJPDONCP; // 0xAC
	::System::Boolean GBOMPEGMLEN; // 0xB0
	::System::Boolean KEDLONFFJHO; // 0xB1
	::System::UInt32 PHFMCACHFIJ; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6373A2231D9CD47A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_417A218C63D0B3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_6373A2231D9CD47A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_6373A2231D9CD47A*&))((::PBYTE)hIl2Cpp + CLASS_1_6373A2231D9CD47A_METHOD_1_417A218C63D0B3DA_OFFSET))(a1, a2);
	}
};
