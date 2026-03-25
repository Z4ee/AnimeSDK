#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/CodecType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Timeline
{
	inline static constexpr unsigned int ManaVideoClip_Struct_2_521121E86E6D773E_TypeDefinitionIndex = 60113;

	struct alignas(4) ManaVideoClip_Struct_2_521121E86E6D773E
	{
		::System::UInt32 Field_2_0; // 0x10
		::System::UInt32 Field_2_1; // 0x14
		::System::UInt32 Field_2_2; // 0x18
		::System::UInt32 Field_2_3; // 0x1C
		::System::UInt32 Field_2_4; // 0x20
		::System::UInt32 Field_2_5; // 0x24
		::System::UInt32 Field_2_6; // 0x28
		::CriWare::CriMana::CodecType Field_2_7; // 0x2C
		::CriWare::CriMana::CodecType Field_2_8; // 0x30
	};
}
