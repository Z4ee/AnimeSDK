#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEAREAUNIFIEDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE6AB90)
#define RPG_GAMECORE_BATTLEAREAUNIFIEDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6AC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAreaUnifiedConfigRow_TypeDefinitionIndex = 12740;

	class BattleAreaUnifiedConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAUNIFIEDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAreaUnifiedConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAreaUnifiedConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAUNIFIEDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
