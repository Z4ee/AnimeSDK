#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7B044D15E4826ADC.h"
#include "unitysdk/Enum_3_DB663931210BBC27_38.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_HADALTABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1960B610)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalGuideWidgetController_HadalTabData_TypeDefinitionIndex = 50069;

	class UIHadalGuideWidgetController_HadalTabData : public ::System::Object
	{
	public:
		::Class_1_D375C91CCE5D3999* ActivityData; // 0x10
		::System::Action_1<::Class_1_D375C91CCE5D3999*>* ClickCallback; // 0x18
		::Enum_3_7B044D15E4826ADC ActivityType; // 0x20
		::Enum_3_DB663931210BBC27_38 PlayType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_HADALTABDATA__CTOR_OFFSET))(this);
		}
	};
}
