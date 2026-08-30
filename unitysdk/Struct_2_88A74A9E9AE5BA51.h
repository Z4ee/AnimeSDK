#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_88A74A9E9AE5BA51_METHOD_2_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x3AFF7B0)

inline static constexpr unsigned int Struct_2_88A74A9E9AE5BA51_TypeDefinitionIndex = 57088;

struct alignas(8) Struct_2_88A74A9E9AE5BA51
{
	::RPG::Client::TextID NLCHJCDAKCB; // 0x10
	::RPG::Client::TextID FEBCIGEBJJM; // 0x20
	::System::String* PEGNLFICABO; // 0x30
	::System::String* OCPAACFIDMF; // 0x38
	::System::String* AEAHHOHBDCE; // 0x40
	::System::String* JIKHGGFLHOO; // 0x48
	::System::String* MEAHEEJJFCM; // 0x50
	::System::String* OJGFKPKJAHE; // 0x58
	::System::String* EGLAAFCNBKF; // 0x60
	::System::String* FGOCPOGANCF; // 0x68

	::System::Void Method_2_602A336CBD30C930(::Struct_2_88A74A9E9AE5BA51 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + STRUCT_2_88A74A9E9AE5BA51_METHOD_2_602A336CBD30C930_OFFSET))(this, a1);
	}
};
