#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/ST_AlertLevel.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_SETALERTLEVEL_METHOD_4_035F752176DE1F77_OFFSET UNITYSDK_OFFSET(0x1DB45B40)
#define RPG_GAMECORE_ST_SIDE_SETALERTLEVEL_METHOD_4_7DBA64570392AB3C_OFFSET UNITYSDK_OFFSET(0x1DB45B00)
#define RPG_GAMECORE_ST_SIDE_SETALERTLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB45B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_SetAlertLevel_TypeDefinitionIndex = 19874;

	class ST_Side_SetAlertLevel : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ST_AlertLevel AlertLevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SETALERTLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7DBA64570392AB3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_SetAlertLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_SetAlertLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SETALERTLEVEL_METHOD_4_7DBA64570392AB3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_035F752176DE1F77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_SetAlertLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_SetAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SETALERTLEVEL_METHOD_4_035F752176DE1F77_OFFSET))(a1, a2);
		}
	};
}
