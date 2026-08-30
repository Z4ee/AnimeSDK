#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATERINMONSTERHITBOXOFFSETENTRY_METHOD_2_1E026FBED551ADC9_OFFSET UNITYSDK_OFFSET(0x1D0909D0)
#define RPG_GAMECORE_FATERINMONSTERHITBOXOFFSETENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D090C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinMonsterHitBoxOffsetEntry_TypeDefinitionIndex = 17946;

	class FateRinMonsterHitBoxOffsetEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single LeftOffset; // 0x10
		::System::Single RightOffset; // 0x14
		::System::Single UpOffset; // 0x18
		::System::Single DownOffset; // 0x1C
		::System::Single ForwardOffset; // 0x20
		::System::Single BackOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINMONSTERHITBOXOFFSETENTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1E026FBED551ADC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinMonsterHitBoxOffsetEntry*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinMonsterHitBoxOffsetEntry*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINMONSTERHITBOXOFFSETENTRY_METHOD_2_1E026FBED551ADC9_OFFSET))(a1, a2);
		}
	};
}
