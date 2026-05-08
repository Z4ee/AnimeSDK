#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BF6B29D18B16113B.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerListWidgetController; }

#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFF640)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x13EFF650)
#define MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x13EFF6C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerListWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 45974;

	class UIBabeltowerListWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerListWidgetController* __4__this; // 0x10
		::Struct_2_BF6B29D18B16113B data; // 0x18
		::System::Int32 index; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERLISTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
