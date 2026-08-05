#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageAbyssS2LayerChangeWindowController_RankDataItem.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEABYSSS2LAYERCHANGEWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FEF930)
#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEABYSSS2LAYERCHANGEWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19FEF970)
#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEABYSSS2LAYERCHANGEWINDOWCONTROLLER___C__QUITDUNGEON_B__12_1_OFFSET UNITYSDK_OFFSET(0x19FEF990)
#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEABYSSS2LAYERCHANGEWINDOWCONTROLLER___C__REFRESHMISSIONVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0x19FEF980)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowLayerResultPageAbyssS2LayerChangeWindowController___c_TypeDefinitionIndex = 50633;

	class UIHollowLayerResultPageAbyssS2LayerChangeWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::UIHollowLayerResultPageAbyssS2LayerChangeWindowController_RankDataItem>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::MoleMole::UIHollowLayerResultPageAbyssS2LayerChangeWindowController_RankDataItem>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowLayerResultPageAbyssS2LayerChangeWindowController___c_TypeDefinitionIndex)->GetStaticField(0x490F0);
		}
		static ::MoleMole::UIHollowLayerResultPageAbyssS2LayerChangeWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowLayerResultPageAbyssS2LayerChangeWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowLayerResultPageAbyssS2LayerChangeWindowController___c_TypeDefinitionIndex)->GetStaticField(0x490F8);
		}
		static ::System::Action** StaticGet___9__12_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowLayerResultPageAbyssS2LayerChangeWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEABYSSS2LAYERCHANGEWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEABYSSS2LAYERCHANGEWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshMissionView_b__8_0(::MoleMole::UIHollowLayerResultPageAbyssS2LayerChangeWindowController_RankDataItem a, ::MoleMole::UIHollowLayerResultPageAbyssS2LayerChangeWindowController_RankDataItem b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHollowLayerResultPageAbyssS2LayerChangeWindowController_RankDataItem, ::MoleMole::UIHollowLayerResultPageAbyssS2LayerChangeWindowController_RankDataItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEABYSSS2LAYERCHANGEWINDOWCONTROLLER___C__REFRESHMISSIONVIEW_B__8_0_OFFSET))(this, a, b);
		}

		::System::Void _QuitDungeon_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEABYSSS2LAYERCHANGEWINDOWCONTROLLER___C__QUITDUNGEON_B__12_1_OFFSET))(this);
		}
	};
}
