#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMBOOSTCHECK_METHOD_3_61E08937568C0ACF_OFFSET UNITYSDK_OFFSET(0x190902E0)
#define RPG_GAMECORE_TEAMBOOSTCHECK_METHOD_3_F5A048D77F91B3FE_OFFSET UNITYSDK_OFFSET(0x19090360)
#define RPG_GAMECORE_TEAMBOOSTCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x19090330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamBoostCheck_TypeDefinitionIndex = 21891;

	class TeamBoostCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean CanUse; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBOOSTCHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_61E08937568C0ACF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamBoostCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamBoostCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBOOSTCHECK_METHOD_3_61E08937568C0ACF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F5A048D77F91B3FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamBoostCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamBoostCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBOOSTCHECK_METHOD_3_F5A048D77F91B3FE_OFFSET))(a1, a2);
		}
	};
}
