#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERSELECTMOTIONMODE_METHOD_3_76BDB5329482A38D_OFFSET UNITYSDK_OFFSET(0x1D7B2E80)
#define RPG_GAMECORE_PLAYERSELECTMOTIONMODE_METHOD_3_A4FDB661AC63834E_OFFSET UNITYSDK_OFFSET(0x1D7B2EC0)
#define RPG_GAMECORE_PLAYERSELECTMOTIONMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B2EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerSelectMotionMode_TypeDefinitionIndex = 20925;

	class PlayerSelectMotionMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CharacterMotionMode MotionMode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERSELECTMOTIONMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_76BDB5329482A38D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerSelectMotionMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerSelectMotionMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERSELECTMOTIONMODE_METHOD_3_76BDB5329482A38D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A4FDB661AC63834E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerSelectMotionMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerSelectMotionMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERSELECTMOTIONMODE_METHOD_3_A4FDB661AC63834E_OFFSET))(a1, a2);
		}
	};
}
