#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYSLOTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178B0050)
#define RPG_GAMECORE_TRAINPARTYSLOTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178B02B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartySlotConfigRow_TypeDefinitionIndex = 14077;

	class TrainPartySlotConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TagList; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 SortID; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 CameraStaticID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSLOTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartySlotConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartySlotConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSLOTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
