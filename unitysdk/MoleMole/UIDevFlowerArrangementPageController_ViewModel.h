#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"

class Class_0_16E4307DCC419505_103;
namespace MoleMole { class UIDevFlowerArrangementRowWidgetController_Data; }
template <typename T> class Class_0_16E4307DCC419505_109;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_GET_CURRENTSCROLLVIEWDATA_OFFSET UNITYSDK_OFFSET(0x149B67E0)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_GET_TABSTATE_OFFSET UNITYSDK_OFFSET(0x149B6800)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x149B6820)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_SET_CURRENTSCROLLVIEWDATA_OFFSET UNITYSDK_OFFSET(0x149B67F0)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_SET_TABSTATE_OFFSET UNITYSDK_OFFSET(0x149B6810)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x149B67D0)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x149B6770)

namespace MoleMole
{
	inline static constexpr unsigned int UIDevFlowerArrangementPageController_ViewModel_TypeDefinitionIndex = 44236;

	class UIDevFlowerArrangementPageController_ViewModel : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_0_16E4307DCC419505_109<::MoleMole::UI::FlowerShop::ESlotType>* _TabState_k__BackingField; // 0x70
		::Class_0_16E4307DCC41950C_14<::MoleMole::UIDevFlowerArrangementRowWidgetController_Data*>* _CurrentScrollViewData_k__BackingField; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_0_16E4307DCC419505_103* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL__CTOR_1_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC41950C_14<::MoleMole::UIDevFlowerArrangementRowWidgetController_Data*>* get_CurrentScrollViewData()
		{
			return ((::Class_0_16E4307DCC41950C_14<::MoleMole::UIDevFlowerArrangementRowWidgetController_Data*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_GET_CURRENTSCROLLVIEWDATA_OFFSET))(this);
		}

		::System::Void set_CurrentScrollViewData(::Class_0_16E4307DCC41950C_14<::MoleMole::UIDevFlowerArrangementRowWidgetController_Data*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_14<::MoleMole::UIDevFlowerArrangementRowWidgetController_Data*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_SET_CURRENTSCROLLVIEWDATA_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_109<::MoleMole::UI::FlowerShop::ESlotType>* get_TabState()
		{
			return ((::Class_0_16E4307DCC419505_109<::MoleMole::UI::FlowerShop::ESlotType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_GET_TABSTATE_OFFSET))(this);
		}

		::System::Void set_TabState(::Class_0_16E4307DCC419505_109<::MoleMole::UI::FlowerShop::ESlotType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_109<::MoleMole::UI::FlowerShop::ESlotType>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_SET_TABSTATE_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTPAGECONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
