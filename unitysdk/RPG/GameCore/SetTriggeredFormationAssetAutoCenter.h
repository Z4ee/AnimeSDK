#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETTRIGGEREDFORMATIONASSETAUTOCENTER_METHOD_3_2BB729B0EBF8134C_OFFSET UNITYSDK_OFFSET(0x176E59D0)
#define RPG_GAMECORE_SETTRIGGEREDFORMATIONASSETAUTOCENTER_METHOD_3_8761B2A26BFE6DDD_OFFSET UNITYSDK_OFFSET(0x176E5940)
#define RPG_GAMECORE_SETTRIGGEREDFORMATIONASSETAUTOCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x176E59A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTriggeredFormationAssetAutoCenter_TypeDefinitionIndex = 20828;

	class SetTriggeredFormationAssetAutoCenter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamTypeMask TargetTeam; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRIGGEREDFORMATIONASSETAUTOCENTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8761B2A26BFE6DDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTriggeredFormationAssetAutoCenter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTriggeredFormationAssetAutoCenter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRIGGEREDFORMATIONASSETAUTOCENTER_METHOD_3_8761B2A26BFE6DDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2BB729B0EBF8134C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTriggeredFormationAssetAutoCenter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTriggeredFormationAssetAutoCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRIGGEREDFORMATIONASSETAUTOCENTER_METHOD_3_2BB729B0EBF8134C_OFFSET))(a1, a2);
		}
	};
}
