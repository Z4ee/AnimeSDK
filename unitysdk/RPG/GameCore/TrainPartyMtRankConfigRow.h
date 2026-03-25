#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYMTRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178ADAB0)
#define RPG_GAMECORE_TRAINPARTYMTRANKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178ADCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyMtRankConfigRow_TypeDefinitionIndex = 14089;

	class TrainPartyMtRankConfigRow : public ::System::Object
	{
	public:
		::System::String* RankPrefabPath; // 0x10
		::System::UInt32 Rank; // 0x18
		::System::UInt32 RankNum; // 0x1C
		::RPG::Client::TextID RankName; // 0x20
		::System::UInt32 RankScore; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMTRANKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyMtRankConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyMtRankConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMTRANKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
