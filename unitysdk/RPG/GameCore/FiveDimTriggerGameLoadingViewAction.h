#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimCustomScreenTransferStyle.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_METHOD_4_3FAB389BDC94D3C8_OFFSET UNITYSDK_OFFSET(0x1D6B44E0)
#define RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_METHOD_4_EC44C72AAC5CFCAB_OFFSET UNITYSDK_OFFSET(0x1D6B44A0)
#define RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B44D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerGameLoadingViewAction_TypeDefinitionIndex = 18657;

	class FiveDimTriggerGameLoadingViewAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsClose; // 0x10
		::RPG::GameCore::FiveDimCustomScreenTransferStyle TransferStyle; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EC44C72AAC5CFCAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_METHOD_4_EC44C72AAC5CFCAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3FAB389BDC94D3C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_METHOD_4_3FAB389BDC94D3C8_OFFSET))(a1, a2);
		}
	};
}
