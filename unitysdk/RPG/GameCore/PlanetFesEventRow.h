#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D340820)
#define RPG_GAMECORE_PLANETFESEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D340AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesEventRow_TypeDefinitionIndex = 12153;

	class PlanetFesEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::System::UInt32 StayInterval; // 0x18
		::System::UInt32 FailRecurCD; // 0x1C
		::System::UInt32 InitialAppearCD; // 0x20
		::System::UInt32 RecurCD; // 0x24
		::System::UInt32 ReenterAppearCD; // 0x28
		::RPG::GameCore::PlanetFesEventType ID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
