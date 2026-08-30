#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEAEONLISTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3C1450)
#define RPG_GAMECORE_ROGUEAEONLISTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C15D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonListConfigRow_TypeDefinitionIndex = 14680;

	class RogueAeonListConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Sort; // 0x10
		::System::UInt32 ActivityModuleID; // 0x14
		::System::UInt32 RogueAeonID; // 0x18
		::System::UInt32 DisplayID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLISTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAeonListConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAeonListConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLISTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
