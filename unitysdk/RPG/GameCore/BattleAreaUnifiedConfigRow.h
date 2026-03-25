#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEAREAUNIFIEDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FCC0D0)
#define RPG_GAMECORE_BATTLEAREAUNIFIEDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCC190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAreaUnifiedConfigRow_TypeDefinitionIndex = 11715;

	class BattleAreaUnifiedConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAUNIFIEDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleAreaUnifiedConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAreaUnifiedConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAUNIFIEDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
