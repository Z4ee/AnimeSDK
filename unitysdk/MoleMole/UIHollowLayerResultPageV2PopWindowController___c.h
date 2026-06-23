#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController_RankDataItem.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16911200)
#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16911240)
#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__GETMISSIONLIST_B__45_0_OFFSET UNITYSDK_OFFSET(0x16911250)
#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__REFRESHMISSIONVIEW_B__48_0_OFFSET UNITYSDK_OFFSET(0x16911260)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowLayerResultPageV2PopWindowController___c_TypeDefinitionIndex = 86155;

	class UIHollowLayerResultPageV2PopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>** StaticGet___9__45_0()
		{
			return (::System::Comparison_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowLayerResultPageV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F1C0);
		}
		static ::System::Comparison_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>** StaticGet___9__48_0()
		{
			return (::System::Comparison_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowLayerResultPageV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F1C8);
		}
		static ::MoleMole::UIHollowLayerResultPageV2PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowLayerResultPageV2PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowLayerResultPageV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F1D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMissionList_b__45_0(::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem a, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__GETMISSIONLIST_B__45_0_OFFSET))(this, a, b);
		}

		::System::Int32 _RefreshMissionView_b__48_0(::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem a, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__REFRESHMISSIONVIEW_B__48_0_OFFSET))(this, a, b);
		}
	};
}
