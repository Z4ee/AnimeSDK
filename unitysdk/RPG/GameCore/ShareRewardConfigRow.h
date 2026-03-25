#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHAREREWARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x176EDA10)
#define RPG_GAMECORE_SHAREREWARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x176EDB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShareRewardConfigRow_TypeDefinitionIndex = 13836;

	class ShareRewardConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 RewardNum; // 0x14
		::System::UInt32 RewardID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREREWARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ShareRewardConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShareRewardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREREWARDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
