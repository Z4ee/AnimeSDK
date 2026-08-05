#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerPage03Controller; }

#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19564EB0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___C__DISPLAYCLASS11_0__ONPOSTREFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x19566A50)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___C__DISPLAYCLASS11_0__ONPOSTREFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x19566A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPage03Controller___c__DisplayClass11_0_TypeDefinitionIndex = 48544;

	class UIBabeltowerPage03Controller___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerPage03Controller* __4__this; // 0x10
		::System::Int32 initScrollIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPostRefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___C__DISPLAYCLASS11_0__ONPOSTREFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _OnPostRefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___C__DISPLAYCLASS11_0__ONPOSTREFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
