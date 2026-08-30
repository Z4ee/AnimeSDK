#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLEBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0804F0)
#define RPG_GAMECORE_EXPEDITIONBATTLEBUFFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D080760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleBuffConfigRow_TypeDefinitionIndex = 11432;

	class ExpeditionBattleBuffConfigRow : public ::System::Object
	{
	public:
		::System::UInt64 BuffRank; // 0x10
		::RPG::Client::TextID BuffDataDesc; // 0x18
		::System::UInt32 ID; // 0x28
		::System::UInt32 MazeBuffID; // 0x2C
		::System::Boolean BuffDataIsPercentage; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEBUFFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleBuffConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleBuffConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEBUFFCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
