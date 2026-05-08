#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICampIdlePageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16784BA0)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS38_0__ONSELECTCAMPIDLEACTIVITY_B__0_OFFSET UNITYSDK_OFFSET(0x16784BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c__DisplayClass38_0_TypeDefinitionIndex = 69149;

	class UICampIdlePageController___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* closeAction; // 0x10
		::MoleMole::UICampIdlePageController* __4__this; // 0x18
		::System::Int32 nodeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectCampIdleActivity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS38_0__ONSELECTCAMPIDLEACTIVITY_B__0_OFFSET))(this);
		}
	};
}
