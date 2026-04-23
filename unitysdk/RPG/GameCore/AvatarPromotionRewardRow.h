#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARPROMOTIONREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186CA2D0)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186CA810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPromotionRewardRow_TypeDefinitionIndex = 12033;

	class AvatarPromotionRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Promotion; // 0x10
		::System::UInt32 PromotionRewardId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarPromotionRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPromotionRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
