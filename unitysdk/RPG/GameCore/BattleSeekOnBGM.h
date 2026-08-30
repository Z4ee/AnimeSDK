#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLESEEKONBGM_METHOD_3_4360DF5C50B7B1C8_OFFSET UNITYSDK_OFFSET(0x1CE805A0)
#define RPG_GAMECORE_BATTLESEEKONBGM_METHOD_3_E9B88A87A5B62FB3_OFFSET UNITYSDK_OFFSET(0x1CE805E0)
#define RPG_GAMECORE_BATTLESEEKONBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE805D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleSeekOnBGM_TypeDefinitionIndex = 22710;

	class BattleSeekOnBGM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MilliSecondPosition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESEEKONBGM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4360DF5C50B7B1C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleSeekOnBGM*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleSeekOnBGM*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESEEKONBGM_METHOD_3_4360DF5C50B7B1C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9B88A87A5B62FB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleSeekOnBGM* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleSeekOnBGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESEEKONBGM_METHOD_3_E9B88A87A5B62FB3_OFFSET))(a1, a2);
		}
	};
}
