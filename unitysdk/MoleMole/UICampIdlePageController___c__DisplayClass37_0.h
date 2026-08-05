#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICampIdlePageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A643540)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS37_0__ONSELECTCHECKHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x1A643550)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c__DisplayClass37_0_TypeDefinitionIndex = 75906;

	class UICampIdlePageController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MoleMole::UICampIdlePageController* __4__this; // 0x10
		::System::Action_1<::System::Boolean>* closeAction; // 0x18
		::System::Int32 nodeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectCheckHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS37_0__ONSELECTCHECKHANDLE_B__0_OFFSET))(this);
		}
	};
}
