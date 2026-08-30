#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESTASKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A27A0)
#define RPG_GAMECORE_PLANETFESTASKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A29A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesTaskRow_TypeDefinitionIndex = 12146;

	class PlanetFesTaskRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::UInt32 TaskID; // 0x14
		::System::UInt32 RandomGroupID; // 0x18
		::RPG::Client::TextID TaskTips; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESTASKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesTaskRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesTaskRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESTASKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
