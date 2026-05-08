#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_103;
class Class_1_1B85226610A5D17C;
class Class_1_48D56DACBE4271BC;
class Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_5;
class MonoUITableScrollV2;
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_0_16E4307DCC419505_97;
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_CALSCROLLVIEWSTARTTIME_OFFSET UNITYSDK_OFFSET(0x16493280)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x164928F0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_ONMUSICTRACKMOVE_OFFSET UNITYSDK_OFFSET(0x16493B30)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_SCROLLVIEWSTARTTIMETOSCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x16493030)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_UPDATESCROLLVIEWSTARTTIME_OFFSET UNITYSDK_OFFSET(0x16492ED0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16492E70)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x16492860)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStorePreviewPanelWidgetController_ScrollViewStartTimeAndPosSyncHelper_TypeDefinitionIndex = 64575;

	class UIFashionStorePreviewPanelWidgetController_ScrollViewStartTimeAndPosSyncHelper : public ::System::Object
	{
	public:
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x10
		::System::Func_1<::MonoUITableScrollV2*>* _scrollViewGetter; // 0x18
		::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_5* _fashionStoreData; // 0x20
		::Class_0_16E4307DCC419505_97<::System::Single>* _sizePerItem; // 0x28
		::Class_0_16E4307DCC419505_97<::System::Single>* _timePerItem; // 0x30
		::Class_0_16E4307DCC41950C_13<::System::Single>* _scrollViewStartTime; // 0x38
		::Class_1_1B85226610A5D17C* _propertyAllocateHelper; // 0x40
		::System::Boolean _scrollViewStartTimeDirty; // 0x48

		::System::Void _ctor(::Class_0_16E4307DCC419505_103* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void Init(::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_5* fashionStoreData, ::Class_0_16E4307DCC419505_97<::System::Single>* sizePerItem, ::Class_0_16E4307DCC419505_97<::System::Single>* timePerItem, ::Class_0_16E4307DCC41950C_13<::System::Single>* scrollViewStartTime, ::System::Func_1<::MonoUITableScrollV2*>* scrollViewGetter)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_5*, ::Class_0_16E4307DCC419505_97<::System::Single>*, ::Class_0_16E4307DCC419505_97<::System::Single>*, ::Class_0_16E4307DCC41950C_13<::System::Single>*, ::System::Func_1<::MonoUITableScrollV2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_INIT_OFFSET))(this, fashionStoreData, sizePerItem, timePerItem, scrollViewStartTime, scrollViewGetter);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_UPDATE_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> ScrollViewStartTimeToScrollDelta(::System::Single newStartTime)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_SCROLLVIEWSTARTTIMETOSCROLLDELTA_OFFSET))(this, newStartTime);
		}

		::System::Nullable_1<::System::Single> CalScrollViewStartTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_CALSCROLLVIEWSTARTTIME_OFFSET))(this);
		}

		::System::Void OnMusicTrackMove(::MonoUITableScrollV2_MoveContext moveContext, ::System::Single currentPosition)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_ONMUSICTRACKMOVE_OFFSET))(this, moveContext, currentPosition);
		}

		::System::Boolean UpdateScrollViewStartTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_UPDATESCROLLVIEWSTARTTIME_OFFSET))(this);
		}
	};
}
