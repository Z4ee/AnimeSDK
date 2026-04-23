#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESOPTICALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C0A180)
#define RPG_GAMECORE_PLANETFESOPTICALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0A420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesOpticalRow_TypeDefinitionIndex = 11613;

	class PlanetFesOpticalRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Progress; // 0x10
		::System::UInt32 RealProgress; // 0x20
		::System::UInt32 MainMissionID; // 0x24
		::System::UInt32 QuestID; // 0x28
		::System::UInt32 Type; // 0x2C
		::System::UInt32 GotoConfig; // 0x30
		::System::UInt32 ActivityModuleID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESOPTICALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesOpticalRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesOpticalRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESOPTICALROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
