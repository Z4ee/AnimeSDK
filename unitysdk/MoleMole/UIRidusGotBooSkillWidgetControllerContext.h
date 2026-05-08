#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIRidusGotBooPageController_KeyPosition.h"

class Class_2_208CC9941471731A_108;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLERCONTEXT_BUILD_OFFSET UNITYSDK_OFFSET(0x14DB10D0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB1090)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSkillWidgetControllerContext_TypeDefinitionIndex = 47905;

	class UIRidusGotBooSkillWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_108* Cfg; // 0x28
		::System::Action_2<::System::Int32, ::MoleMole::UIRidusGotBooPageController_KeyPosition>* OnClickAction; // 0x30
		::System::String* ColorPath; // 0x38
		::MoleMole::UIRidusGotBooPageController_KeyPosition KeyPos; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Build()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLERCONTEXT_BUILD_OFFSET))(this);
		}
	};
}
