#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_096F1977562CCE84;
class Class_2_D6FEE2A35B0F262A;
namespace MoleMole { class UIFortuneFlowerShop3DModelController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_FLOWERSHOP3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15B8F220)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_FLOWERSTATES_OFFSET UNITYSDK_OFFSET(0x15B8F240)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_FLOWERTIMLINEINFORMDATA_OFFSET UNITYSDK_OFFSET(0x15B8F260)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_HIDETAG_OFFSET UNITYSDK_OFFSET(0x15B8F2A0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_PARTNERID_OFFSET UNITYSDK_OFFSET(0x15B8F280)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_FLOWERSHOP3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15B8F230)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_FLOWERSTATES_OFFSET UNITYSDK_OFFSET(0x15B8F250)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_FLOWERTIMLINEINFORMDATA_OFFSET UNITYSDK_OFFSET(0x15B8F270)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_HIDETAG_OFFSET UNITYSDK_OFFSET(0x15B8F2B0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_PARTNERID_OFFSET UNITYSDK_OFFSET(0x15B8F290)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8F2C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerTimeLinePageController_Context_TypeDefinitionIndex = 66803;

	class UIFlowerTimeLinePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIFortuneFlowerShop3DModelController* _FlowerShop3DModelController_k__BackingField; // 0x28
		::System::Collections::Generic::IReadOnlyDictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_D6FEE2A35B0F262A*>* _FlowerStates_k__BackingField; // 0x30
		::Class_2_096F1977562CCE84* _FlowerTimlineInformData_k__BackingField; // 0x38
		::System::Boolean _HideTag_k__BackingField; // 0x40
		::System::Int32 _PartnerID_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::MoleMole::UIFortuneFlowerShop3DModelController* get_FlowerShop3DModelController()
		{
			return ((::MoleMole::UIFortuneFlowerShop3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_FLOWERSHOP3DMODELCONTROLLER_OFFSET))(this);
		}

		::System::Void set_FlowerShop3DModelController(::MoleMole::UIFortuneFlowerShop3DModelController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFortuneFlowerShop3DModelController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_FLOWERSHOP3DMODELCONTROLLER_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_D6FEE2A35B0F262A*>* get_FlowerStates()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_D6FEE2A35B0F262A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_FLOWERSTATES_OFFSET))(this);
		}

		::System::Void set_FlowerStates(::System::Collections::Generic::IReadOnlyDictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_D6FEE2A35B0F262A*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_D6FEE2A35B0F262A*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_FLOWERSTATES_OFFSET))(this, value);
		}

		::Class_2_096F1977562CCE84* get_FlowerTimlineInformData()
		{
			return ((::Class_2_096F1977562CCE84*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_FLOWERTIMLINEINFORMDATA_OFFSET))(this);
		}

		::System::Void set_FlowerTimlineInformData(::Class_2_096F1977562CCE84* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_096F1977562CCE84*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_FLOWERTIMLINEINFORMDATA_OFFSET))(this, value);
		}

		::System::Int32 get_PartnerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_PARTNERID_OFFSET))(this);
		}

		::System::Void set_PartnerID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_PARTNERID_OFFSET))(this, value);
		}

		::System::Boolean get_HideTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_HIDETAG_OFFSET))(this);
		}

		::System::Void set_HideTag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_HIDETAG_OFFSET))(this, value);
		}
	};
}
