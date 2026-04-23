#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESTASKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C0B8A0)
#define RPG_GAMECORE_PLANETFESTASKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0BAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesTaskRow_TypeDefinitionIndex = 11558;

	class PlanetFesTaskRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::RPG::Client::TextID TaskTips; // 0x18
		::System::UInt32 RandomGroupID; // 0x28
		::System::UInt32 TaskID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESTASKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesTaskRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesTaskRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESTASKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
