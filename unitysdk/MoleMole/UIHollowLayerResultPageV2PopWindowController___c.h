#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController_RankDataItem.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F09880)
#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14F098C0)
#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__GETMISSIONLIST_B__44_0_OFFSET UNITYSDK_OFFSET(0x14F098D0)
#define MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__REFRESHMISSIONVIEW_B__47_0_OFFSET UNITYSDK_OFFSET(0x14F098E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowLayerResultPageV2PopWindowController___c_TypeDefinitionIndex = 58498;

	class UIHollowLayerResultPageV2PopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>** StaticGet___9__44_0()
		{
			return (::System::Comparison_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowLayerResultPageV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CBB0);
		}
		static ::System::Comparison_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>** StaticGet___9__47_0()
		{
			return (::System::Comparison_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowLayerResultPageV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CBB8);
		}
		static ::MoleMole::UIHollowLayerResultPageV2PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowLayerResultPageV2PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowLayerResultPageV2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CBC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMissionList_b__44_0(::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem a, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__GETMISSIONLIST_B__44_0_OFFSET))(this, a, b);
		}

		::System::Int32 _RefreshMissionView_b__47_0(::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem a, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem, ::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTPAGEV2POPWINDOWCONTROLLER___C__REFRESHMISSIONVIEW_B__47_0_OFFSET))(this, a, b);
		}
	};
}
