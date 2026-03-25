#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_METHOD_3_27BDF911FFC9F958_OFFSET UNITYSDK_OFFSET(0x17211130)
#define RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_METHOD_3_913BA470D39616CC_OFFSET UNITYSDK_OFFSET(0x17211000)
#define RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17211110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerGameLoadingViewAction_TypeDefinitionIndex = 17126;

	class FiveDimTriggerGameLoadingViewAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsClose; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_913BA470D39616CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_METHOD_3_913BA470D39616CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_27BDF911FFC9F958(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_METHOD_3_27BDF911FFC9F958_OFFSET))(a1, a2);
		}
	};
}
