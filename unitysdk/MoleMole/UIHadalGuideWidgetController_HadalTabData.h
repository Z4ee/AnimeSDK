#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7AEF4D15E4700EEA.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_HADALTABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7DC60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalGuideWidgetController_HadalTabData_TypeDefinitionIndex = 58902;

	class UIHadalGuideWidgetController_HadalTabData : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_D375C91CCE5D3999*>* ClickCallback; // 0x10
		::Class_1_D375C91CCE5D3999* ActivityData; // 0x18
		::Enum_3_7AEF4D15E4700EEA ActivityType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_HADALTABDATA__CTOR_OFFSET))(this);
		}
	};
}
