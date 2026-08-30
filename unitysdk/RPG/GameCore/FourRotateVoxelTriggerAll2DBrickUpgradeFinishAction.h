#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_METHOD_3_47312FFFF4243AC0_OFFSET UNITYSDK_OFFSET(0x1DCB9C00)
#define RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_METHOD_3_D72259B3BE40C585_OFFSET UNITYSDK_OFFSET(0x1DCB9B80)
#define RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB9BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction_TypeDefinitionIndex = 16598;

	class FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D72259B3BE40C585(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_METHOD_3_D72259B3BE40C585_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47312FFFF4243AC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_METHOD_3_47312FFFF4243AC0_OFFSET))(a1, a2);
		}
	};
}
