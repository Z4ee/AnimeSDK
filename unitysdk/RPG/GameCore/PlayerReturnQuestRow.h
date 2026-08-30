#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERRETURNQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D355730)
#define RPG_GAMECORE_PLAYERRETURNQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D355E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnQuestRow_TypeDefinitionIndex = 14362;

	class PlayerReturnQuestRow : public ::System::Object
	{
	public:
		::System::UInt32 LinearQuestID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerReturnQuestRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerReturnQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
