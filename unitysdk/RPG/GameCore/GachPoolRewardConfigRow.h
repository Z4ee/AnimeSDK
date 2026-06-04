#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GACHPOOLREWARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197AC8F0)
#define RPG_GAMECORE_GACHPOOLREWARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197ACCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachPoolRewardConfigRow_TypeDefinitionIndex = 13893;

	class GachPoolRewardConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ActivityID; // 0x10
		::System::UInt32 GachaID; // 0x14
		::System::UInt32 ID; // 0x18
		::System::UInt32 QuestID; // 0x1C
		::RPG::Client::TextID Tips; // 0x20
		::RPG::Client::TextID Bubble; // 0x30
		::RPG::Client::TextID Title; // 0x40
		::RPG::Client::TextID Desc; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHPOOLREWARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GachPoolRewardConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GachPoolRewardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHPOOLREWARDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
