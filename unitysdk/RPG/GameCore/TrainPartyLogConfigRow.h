#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TrainPartyGameRecordType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYLOGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5DE200)
#define RPG_GAMECORE_TRAINPARTYLOGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DE3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyLogConfigRow_TypeDefinitionIndex = 15151;

	class TrainPartyLogConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::TrainPartyGameRecordType LogType; // 0x10
		::System::UInt32 Priority; // 0x14
		::RPG::Client::TextID LogContent; // 0x18

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
