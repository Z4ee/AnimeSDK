#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERSELECTMOTIONMODE_METHOD_3_A64066BC766EB8D7_OFFSET UNITYSDK_OFFSET(0x19A42D80)
#define RPG_GAMECORE_PLAYERSELECTMOTIONMODE_METHOD_3_DE108FF4F4745684_OFFSET UNITYSDK_OFFSET(0x19A42D00)
#define RPG_GAMECORE_PLAYERSELECTMOTIONMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A42D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerSelectMotionMode_TypeDefinitionIndex = 20001;

	class PlayerSelectMotionMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CharacterMotionMode MotionMode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERSELECTMOTIONMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE108FF4F4745684(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerSelectMotionMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerSelectMotionMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERSELECTMOTIONMODE_METHOD_3_DE108FF4F4745684_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A64066BC766EB8D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerSelectMotionMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerSelectMotionMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERSELECTMOTIONMODE_METHOD_3_A64066BC766EB8D7_OFFSET))(a1, a2);
		}
	};
}
