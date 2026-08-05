#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C66E4DE78E6562C8_Struct_2_283448166573D89C.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19641590)
#define MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x196415D0)
#define MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__REFRESHREGIONINFO_B__5_0_OFFSET UNITYSDK_OFFSET(0x196415E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c_TypeDefinitionIndex = 65895;

	class UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_C66E4DE78E6562C8_Struct_2_283448166573D89C, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Class_2_C66E4DE78E6562C8_Struct_2_283448166573D89C, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x451A0);
		}
		static ::MoleMole::UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPause_MPRegionTarget_BattleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x451A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshRegionInfo_b__5_0(::Class_2_C66E4DE78E6562C8_Struct_2_283448166573D89C r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_C66E4DE78E6562C8_Struct_2_283448166573D89C))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_MPREGIONTARGET_BATTLEINFOWIDGETCONTROLLER___C__REFRESHREGIONINFO_B__5_0_OFFSET))(this, r);
		}
	};
}
