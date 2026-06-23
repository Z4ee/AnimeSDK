#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController_RankDataItem.h"
#include "unitysdk/MoleMole/UIMonsterFantasyResultRowWidgetController_RowData.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1685EC66FBD28897;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DA7AA0)
#define MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA7AE0)
#define MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__GETMISSIONLIST_B__10_0_OFFSET UNITYSDK_OFFSET(0x16DA7AF0)
#define MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__REFRESHLOSETIPS_B__12_0_OFFSET UNITYSDK_OFFSET(0x16DA7B10)
#define MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__REFRESHLOSETIPS_B__12_1_OFFSET UNITYSDK_OFFSET(0x16DA7B40)
#define MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__REFRESHREWARDVIEW_G__INTO_16_0_OFFSET UNITYSDK_OFFSET(0x16DA7B60)
#define MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__REFRESHSAB_B__11_0_OFFSET UNITYSDK_OFFSET(0x16DA7B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyResultPageController___c_TypeDefinitionIndex = 52040;

	class UIMonsterFantasyResultPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::MoleMole::UIMonsterFantasyResultRowWidgetController_RowData>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::System::String*, ::MoleMole::UIMonsterFantasyResultRowWidgetController_RowData>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasyResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x37C40);
		}
		static ::System::Func_2<::System::Int32, ::MoleMole::UIMonsterFantasyResultRowWidgetController_RowData>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::System::Int32, ::MoleMole::UIMonsterFantasyResultRowWidgetController_RowData>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasyResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x37C48);
		}
		static ::MoleMole::UIMonsterFantasyResultPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMonsterFantasyResultPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasyResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x37C50);
		}
		static ::System::Comparison_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasyResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x37C58);
		}
		static ::System::Comparison_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasyResultPageController___c_TypeDefinitionIndex)->GetStaticField(0x37C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMissionList_b__10_0(::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem a, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__GETMISSIONLIST_B__10_0_OFFSET))(this, a, b);
		}

		::System::Int32 _RefreshSAB_b__11_0(::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem a, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__REFRESHSAB_B__11_0_OFFSET))(this, a, b);
		}

		::MoleMole::UIMonsterFantasyResultRowWidgetController_RowData _RefreshLoseTips_b__12_0(::System::String* tip)
		{
			return ((::MoleMole::UIMonsterFantasyResultRowWidgetController_RowData(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__REFRESHLOSETIPS_B__12_0_OFFSET))(this, tip);
		}

		::MoleMole::UIMonsterFantasyResultRowWidgetController_RowData _RefreshLoseTips_b__12_1(::System::Int32 _)
		{
			return ((::MoleMole::UIMonsterFantasyResultRowWidgetController_RowData(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__REFRESHLOSETIPS_B__12_1_OFFSET))(this, _);
		}

		::Class_1_1685EC66FBD28897* _RefreshRewardView_g__Into_16_0(::Class_1_0D6706375CDAAE8C* item)
		{
			return ((::Class_1_1685EC66FBD28897*(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYRESULTPAGECONTROLLER___C__REFRESHREWARDVIEW_G__INTO_16_0_OFFSET))(this, item);
		}
	};
}
