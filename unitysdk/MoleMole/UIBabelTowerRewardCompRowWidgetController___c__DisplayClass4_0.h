#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;

#define MOLEMOLE_UIBABELTOWERREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14EB1BE0)
#define MOLEMOLE_UIBABELTOWERREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__REFRESHREWARDINFO_B__0_OFFSET UNITYSDK_OFFSET(0x14EB1BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabelTowerRewardCompRowWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 46234;

	class UIBabelTowerRewardCompRowWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Boolean isReceived; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::Class_1_1685EC66FBD28897* _RefreshRewardInfo_b__0(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 x)
		{
			return ((::Class_1_1685EC66FBD28897*(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__REFRESHREWARDINFO_B__0_OFFSET))(this, x);
		}
	};
}
