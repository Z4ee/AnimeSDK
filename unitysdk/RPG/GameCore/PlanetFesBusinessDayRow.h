#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESBUSINESSDAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174B8E50)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174B9630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBusinessDayRow_TypeDefinitionIndex = 11157;

	class PlanetFesBusinessDayRow : public ::System::Object
	{
	public:
		::System::UInt32 PamNum; // 0x10
		::System::UInt32 LittleBonusNum; // 0x14
		::System::UInt32 LargeBonusNum; // 0x18
		::System::UInt32 GameNum; // 0x1C
		::RPG::Client::TextID StartText; // 0x20
		::System::UInt32 MiddleBonusNum; // 0x30
		::System::UInt32 NaturalDay; // 0x34
		::System::UInt32 BusinessDay; // 0x38
		::System::UInt32 AvatarEventNum; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesBusinessDayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesBusinessDayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
