#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AETHERDIVIDESPIRITTRIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AE71940)
#define RPG_GAMECORE_AETHERDIVIDESPIRITTRIALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE71AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritTrialRow_TypeDefinitionIndex = 10577;

	class AetherDivideSpiritTrialRow : public ::System::Object
	{
	public:
		::System::UInt32 Promotion; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 SpiritID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITTRIALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideSpiritTrialRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideSpiritTrialRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITTRIALROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
