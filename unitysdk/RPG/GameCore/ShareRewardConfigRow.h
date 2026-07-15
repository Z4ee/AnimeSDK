#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHAREREWARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BE32910)
#define RPG_GAMECORE_SHAREREWARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE32A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShareRewardConfigRow_TypeDefinitionIndex = 14511;

	class ShareRewardConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardNum; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 RewardID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREREWARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShareRewardConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShareRewardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREREWARDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
