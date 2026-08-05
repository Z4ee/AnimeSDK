#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_0_16E4307DCC419505_135;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_152;

#define MOLEMOLE_UIFLOWERSHOPNEWQUESTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x185821E0)
#define MOLEMOLE_UIFLOWERSHOPNEWQUESTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x185821D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopNewQuestPopWindowController_ViewModel_TypeDefinitionIndex = 57251;

	class UIFlowerShopNewQuestPopWindowController_ViewModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_152<::System::Collections::Generic::List_1<::System::Int32>*>* CustomQuestIDs; // 0x80

		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWQUESTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWQUESTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
