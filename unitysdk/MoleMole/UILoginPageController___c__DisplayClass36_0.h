#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILoginPageController; }
namespace MoleMole { class UIResourceLoadWidgetContext; }

#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179E4250)
#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS36_0__STARTLOGINANDLOADRESOURCE_B__0_OFFSET UNITYSDK_OFFSET(0x179E4260)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginPageController___c__DisplayClass36_0_TypeDefinitionIndex = 46283;

	class UILoginPageController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::MoleMole::UILoginPageController* __4__this; // 0x10
		::MoleMole::UIResourceLoadWidgetContext* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartLoginAndLoadResource_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS36_0__STARTLOGINANDLOADRESOURCE_B__0_OFFSET))(this);
		}
	};
}
