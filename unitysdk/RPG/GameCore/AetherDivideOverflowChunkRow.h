#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AETHERDIVIDEOVERFLOWCHUNKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186860C0)
#define RPG_GAMECORE_AETHERDIVIDEOVERFLOWCHUNKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186862E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideOverflowChunkRow_TypeDefinitionIndex = 10475;

	class AetherDivideOverflowChunkRow : public ::System::Object
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 BattleAreaID; // 0x14
		::System::UInt32 EventID; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 MazeBuffID; // 0x20
		::System::UInt32 SpiritID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEOVERFLOWCHUNKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AetherDivideOverflowChunkRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideOverflowChunkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEOVERFLOWCHUNKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
