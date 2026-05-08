#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerPage01Controller; }

#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B5FE40)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___C__DISPLAYCLASS4_0__ONPOSTREFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x12B5FE50)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___C__DISPLAYCLASS4_0__ONPOSTREFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x12B60160)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPage01Controller___c__DisplayClass4_0_TypeDefinitionIndex = 38044;

	class UIBabeltowerPage01Controller___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerPage01Controller* __4__this; // 0x10
		::System::Int32 initScrollIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPostRefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___C__DISPLAYCLASS4_0__ONPOSTREFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _OnPostRefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___C__DISPLAYCLASS4_0__ONPOSTREFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
