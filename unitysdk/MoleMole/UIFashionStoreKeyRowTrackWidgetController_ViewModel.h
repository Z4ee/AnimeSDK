#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_0_16E4307DCC419505_139;
namespace MoleMole { class UIFashionStoreKeyRowTrackItemWidgetController_Data; }
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL_GET_NOTEDATAS_OFFSET UNITYSDK_OFFSET(0x187D9600)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x187D9620)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL_SET_NOTEDATAS_OFFSET UNITYSDK_OFFSET(0x187D9610)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x187D95F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreKeyRowTrackWidgetController_ViewModel_TypeDefinitionIndex = 59355;

	class UIFashionStoreKeyRowTrackWidgetController_ViewModel : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC41950C_12<::MoleMole::UIFashionStoreKeyRowTrackItemWidgetController_Data*>* _NoteDatas_k__BackingField; // 0x60

		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC41950C_12<::MoleMole::UIFashionStoreKeyRowTrackItemWidgetController_Data*>* get_NoteDatas()
		{
			return ((::Class_0_16E4307DCC41950C_12<::MoleMole::UIFashionStoreKeyRowTrackItemWidgetController_Data*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL_GET_NOTEDATAS_OFFSET))(this);
		}

		::System::Void set_NoteDatas(::Class_0_16E4307DCC41950C_12<::MoleMole::UIFashionStoreKeyRowTrackItemWidgetController_Data*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_12<::MoleMole::UIFashionStoreKeyRowTrackItemWidgetController_Data*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL_SET_NOTEDATAS_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
