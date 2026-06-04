#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TrainPartyGameRecordType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYLOGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19DF5DC0)
#define RPG_GAMECORE_TRAINPARTYLOGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF5F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyLogConfigRow_TypeDefinitionIndex = 14557;

	class TrainPartyLogConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID LogContent; // 0x10
		::System::UInt32 Priority; // 0x20
		::RPG::GameCore::TrainPartyGameRecordType LogType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYLOGCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyLogConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyLogConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYLOGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
