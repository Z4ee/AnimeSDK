#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROBOTEMOTIONNOTIFYCONFIG_METHOD_2_278ECB742C8D1295_OFFSET UNITYSDK_OFFSET(0x19AE0D90)
#define RPG_GAMECORE_ROBOTEMOTIONNOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE0E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RobotEmotionNotifyConfig_TypeDefinitionIndex = 16098;

	class RobotEmotionNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 EmotionIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROBOTEMOTIONNOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_278ECB742C8D1295(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RobotEmotionNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RobotEmotionNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROBOTEMOTIONNOTIFYCONFIG_METHOD_2_278ECB742C8D1295_OFFSET))(a1, a2);
		}
	};
}
