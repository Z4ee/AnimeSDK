#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_10B9ACD0BDABD4D7__CTOR_OFFSET UNITYSDK_OFFSET(0x3A31A40)

inline static constexpr unsigned int Struct_2_10B9ACD0BDABD4D7_TypeDefinitionIndex = 72306;

struct alignas(8) Struct_2_10B9ACD0BDABD4D7
{
	::RPG::Client::TextID NMMKDFFHOLL; // 0x10
	::System::UInt32 NBAHBKCPOGF; // 0x20

	::System::Void _ctor(::RPG::Client::TextID a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_10B9ACD0BDABD4D7__CTOR_OFFSET))(this, a1, a2);
	}
};
