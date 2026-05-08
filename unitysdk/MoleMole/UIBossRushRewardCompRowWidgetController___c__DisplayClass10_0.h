#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;

#define MOLEMOLE_UIBOSSRUSHREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12F74B80)
#define MOLEMOLE_UIBOSSRUSHREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__GETVIEWDATAS_B__0_OFFSET UNITYSDK_OFFSET(0x12F74B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossRushRewardCompRowWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 76044;

	class UIBossRushRewardCompRowWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Boolean rewardTaken; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSRUSHREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::Class_1_1685EC66FBD28897* _GetViewDatas_b__0(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 x)
		{
			return ((::Class_1_1685EC66FBD28897*(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSRUSHREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__GETVIEWDATAS_B__0_OFFSET))(this, x);
		}
	};
}
