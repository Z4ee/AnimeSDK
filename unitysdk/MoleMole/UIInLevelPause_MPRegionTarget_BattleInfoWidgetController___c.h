#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C04F87C132BA9A06_Struct_2_283448166573D89C.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x174A7120)
#define MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x174A7160)
#define MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__REFRESHREGIONINFO_B__5_0_OFFSET UNITYSDK_OFFSET(0x174A7170)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c_TypeDefinitionIndex = 77318;

	class UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46C30);
		}
		static ::System::Func_2<::Class_2_C04F87C132BA9A06_Struct_2_283448166573D89C, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Class_2_C04F87C132BA9A06_Struct_2_283448166573D89C, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46C38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshRegionInfo_b__5_0(::Class_2_C04F87C132BA9A06_Struct_2_283448166573D89C r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_C04F87C132BA9A06_Struct_2_283448166573D89C))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__REFRESHREGIONINFO_B__5_0_OFFSET))(this, r);
		}
	};
}
