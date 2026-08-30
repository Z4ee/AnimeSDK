#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_TIMER_METHOD_4_A11C0775389F9D99_OFFSET UNITYSDK_OFFSET(0x1DB45DC0)
#define RPG_GAMECORE_ST_SIDE_TIMER_METHOD_4_F6A121ACB11FCD22_OFFSET UNITYSDK_OFFSET(0x1DB45E00)
#define RPG_GAMECORE_ST_SIDE_TIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB45DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Timer_TypeDefinitionIndex = 19913;

	class ST_Side_Timer : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Time; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TIMER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A11C0775389F9D99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Timer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Timer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TIMER_METHOD_4_A11C0775389F9D99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6A121ACB11FCD22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Timer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Timer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_TIMER_METHOD_4_F6A121ACB11FCD22_OFFSET))(a1, a2);
		}
	};
}
