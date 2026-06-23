#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D180CBB13D9EF395_Enum_3_9AA9D33D5FAC2443.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMixedStreamingPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS6_0__CHANGESTATUS_B__0_OFFSET UNITYSDK_OFFSET(0x178B6C20)
#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x178B6C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIMixedStreamingPageController___c__DisplayClass6_0_TypeDefinitionIndex = 62915;

	class UIMixedStreamingPageController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10
		::MoleMole::UIMixedStreamingPageController* __4__this; // 0x18
		::Class_2_D180CBB13D9EF395_Enum_3_9AA9D33D5FAC2443 slotState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeStatus_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__DISPLAYCLASS6_0__CHANGESTATUS_B__0_OFFSET))(this);
		}
	};
}
