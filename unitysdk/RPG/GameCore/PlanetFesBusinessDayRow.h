#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESBUSINESSDAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4D5710)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D5F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBusinessDayRow_TypeDefinitionIndex = 11759;

	class PlanetFesBusinessDayRow : public ::System::Object
	{
	public:
		::System::UInt32 BusinessDay; // 0x10
		::System::UInt32 NaturalDay; // 0x14
		::RPG::Client::TextID StartText; // 0x18
		::System::UInt32 AvatarEventNum; // 0x28
		::System::UInt32 PamNum; // 0x2C
		::System::UInt32 LittleBonusNum; // 0x30
		::System::UInt32 LargeBonusNum; // 0x34
		::System::UInt32 GameNum; // 0x38
		::System::UInt32 MiddleBonusNum; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesBusinessDayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesBusinessDayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
