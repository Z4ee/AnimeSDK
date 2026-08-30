#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONBATTLELEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D081300)
#define RPG_GAMECORE_EXPEDITIONBATTLELEVELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D081420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleLevelConfigRow_TypeDefinitionIndex = 11430;

	class ExpeditionBattleLevelConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 StageID; // 0x10
		::System::UInt32 ID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLELEVELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleLevelConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleLevelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLELEVELCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
