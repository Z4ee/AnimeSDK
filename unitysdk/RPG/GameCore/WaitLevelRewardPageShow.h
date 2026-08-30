#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITLEVELREWARDPAGESHOW_METHOD_3_2B608EAF98213575_OFFSET UNITYSDK_OFFSET(0x1D6A5C40)
#define RPG_GAMECORE_WAITLEVELREWARDPAGESHOW_METHOD_3_A5C5993090FE2276_OFFSET UNITYSDK_OFFSET(0x1D6A5C80)
#define RPG_GAMECORE_WAITLEVELREWARDPAGESHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A5C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitLevelRewardPageShow_TypeDefinitionIndex = 21000;

	class WaitLevelRewardPageShow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitExit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLEVELREWARDPAGESHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2B608EAF98213575(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLevelRewardPageShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLevelRewardPageShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLEVELREWARDPAGESHOW_METHOD_3_2B608EAF98213575_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A5C5993090FE2276(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLevelRewardPageShow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLevelRewardPageShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLEVELREWARDPAGESHOW_METHOD_3_A5C5993090FE2276_OFFSET))(a1, a2);
		}
	};
}
