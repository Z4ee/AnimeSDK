#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AETHERDIVIDEMAXSPIRITLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F62C60)
#define RPG_GAMECORE_AETHERDIVIDEMAXSPIRITLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F62D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideMaxSpiritLevelRow_TypeDefinitionIndex = 10268;

	class AetherDivideMaxSpiritLevelRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10
		::System::UInt32 MaxSpiritLevel; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMAXSPIRITLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AetherDivideMaxSpiritLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideMaxSpiritLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMAXSPIRITLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
