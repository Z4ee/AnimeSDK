#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_832;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10895260)
#define MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__REFRESHSELECTEDVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x10895270)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleRewardListPopWindowController___c__DisplayClass13_0_TypeDefinitionIndex = 58396;

	class UITriDiceOracleRewardListPopWindowController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* takenRewardList; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* unlockedRewardList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshSelectedView_b__0(::Class_2_208CC9941471731A_832* reward)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_832*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEREWARDLISTPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__REFRESHSELECTEDVIEW_B__0_OFFSET))(this, reward);
		}
	};
}
