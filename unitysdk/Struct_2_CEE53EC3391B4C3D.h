#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/FightServerLogLevel.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_CEE53EC3391B4C3D__CTOR_OFFSET UNITYSDK_OFFSET(0xDA4C0)

inline static constexpr unsigned int Struct_2_CEE53EC3391B4C3D_TypeDefinitionIndex = 34445;

struct alignas(8) Struct_2_CEE53EC3391B4C3D
{
	::RPG::Client::LittleGameShare::FightServerLogLevel Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel))((::PBYTE)hIl2Cpp + STRUCT_2_CEE53EC3391B4C3D__CTOR_OFFSET))(this, a1, a2);
	}
};
