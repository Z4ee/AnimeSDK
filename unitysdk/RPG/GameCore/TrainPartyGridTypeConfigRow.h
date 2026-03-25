#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TrainPartyGridType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYGRIDTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178AC540)
#define RPG_GAMECORE_TRAINPARTYGRIDTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178AC760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyGridTypeConfigRow_TypeDefinitionIndex = 14035;

	class TrainPartyGridTypeConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::TrainPartyGridType GridType; // 0x10
		::RPG::Client::TextID GridTypeTipInfo; // 0x18
		::RPG::Client::TextID GridTypeName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDTYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyGridTypeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyGridTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDTYPECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
