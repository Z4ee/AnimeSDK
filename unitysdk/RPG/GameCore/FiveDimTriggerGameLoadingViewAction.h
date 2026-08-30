#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimCustomScreenTransferStyle.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_METHOD_3_791088880809E6D1_OFFSET UNITYSDK_OFFSET(0x1DCA96A0)
#define RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_METHOD_3_ACDC4213E7843CAA_OFFSET UNITYSDK_OFFSET(0x1DCA9660)
#define RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA9690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerGameLoadingViewAction_TypeDefinitionIndex = 18448;

	class FiveDimTriggerGameLoadingViewAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsClose; // 0x10
		::RPG::GameCore::FiveDimCustomScreenTransferStyle TransferStyle; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ACDC4213E7843CAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_METHOD_3_ACDC4213E7843CAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_791088880809E6D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_METHOD_3_791088880809E6D1_OFFSET))(a1, a2);
		}
	};
}
