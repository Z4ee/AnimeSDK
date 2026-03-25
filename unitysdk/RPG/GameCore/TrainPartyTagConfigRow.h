#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYTAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178B0F50)
#define RPG_GAMECORE_TRAINPARTYTAGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178B10D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyTagConfigRow_TypeDefinitionIndex = 14081;

	class TrainPartyTagConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYTAGCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyTagConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyTagConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYTAGCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
