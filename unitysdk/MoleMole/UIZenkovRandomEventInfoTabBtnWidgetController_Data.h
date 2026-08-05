#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_35;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B12520)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRandomEventInfoTabBtnWidgetController_Data_TypeDefinitionIndex = 68649;

	class UIZenkovRandomEventInfoTabBtnWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_35* EventInfo; // 0x10
		::System::Action_1<::System::Int32>* AfterSelectEventAction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
