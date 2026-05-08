#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_196;
class Class_0_16E4307DCC419505_544;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIGROCERYITEMICONWIDGETCONTROLLER_ADDITIONALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16875670)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryItemIconWidgetController_AdditionalData_TypeDefinitionIndex = 68144;

	class UIGroceryItemIconWidgetController_AdditionalData : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_544* IconStyle; // 0x10
		::System::Action_2<::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_196*>* AdditionalRefreshItemMethod; // 0x18
		::System::Boolean IsSetRefreshTimeToText; // 0x20
		::System::Boolean IsShowRedSign; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYITEMICONWIDGETCONTROLLER_ADDITIONALDATA__CTOR_OFFSET))(this);
		}
	};
}
