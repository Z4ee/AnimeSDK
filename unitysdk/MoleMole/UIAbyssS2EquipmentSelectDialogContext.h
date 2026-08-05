#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B237A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EquipmentSelectDialogContext_TypeDefinitionIndex = 63398;

	class UIAbyssS2EquipmentSelectDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* equipments; // 0x28
		::System::String* titleKey; // 0x30
		::System::Action* lineupSelectAction; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
