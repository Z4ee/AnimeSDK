#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARENHANCEDSEASONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A076360)
#define RPG_GAMECORE_AVATARENHANCEDSEASONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A076480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedSeasonRow_TypeDefinitionIndex = 12314;

	class AvatarEnhancedSeasonRow : public ::System::Object
	{
	public:
		::System::UInt32 SeasonID; // 0x10
		::System::UInt32 ActivityID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSEASONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarEnhancedSeasonRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarEnhancedSeasonRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSEASONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
