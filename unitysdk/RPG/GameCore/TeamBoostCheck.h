#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMBOOSTCHECK_METHOD_3_C8FF71CCB66644BD_OFFSET UNITYSDK_OFFSET(0x1C144D90)
#define RPG_GAMECORE_TEAMBOOSTCHECK_METHOD_3_F5A048D77F91B3FE_OFFSET UNITYSDK_OFFSET(0x1C144DE0)
#define RPG_GAMECORE_TEAMBOOSTCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C144DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamBoostCheck_TypeDefinitionIndex = 22142;

	class TeamBoostCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean CanUse; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBOOSTCHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C8FF71CCB66644BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamBoostCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamBoostCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBOOSTCHECK_METHOD_3_C8FF71CCB66644BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F5A048D77F91B3FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamBoostCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamBoostCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBOOSTCHECK_METHOD_3_F5A048D77F91B3FE_OFFSET))(a1, a2);
		}
	};
}
