#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_METHOD_4_5257AC64C9E0CE8E_OFFSET UNITYSDK_OFFSET(0x1D6C49F0)
#define RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_METHOD_4_E9AA3B11EC8821BF_OFFSET UNITYSDK_OFFSET(0x1D6C4A70)
#define RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C4A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction_TypeDefinitionIndex = 16773;

	class FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5257AC64C9E0CE8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_METHOD_4_5257AC64C9E0CE8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E9AA3B11EC8821BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelTriggerAll2DBrickUpgradeFinishAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELTRIGGERALL2DBRICKUPGRADEFINISHACTION_METHOD_4_E9AA3B11EC8821BF_OFFSET))(a1, a2);
		}
	};
}
