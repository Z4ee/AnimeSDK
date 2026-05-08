#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralBlackMaskContext; }
namespace MoleMole { class UIGeneralBlackMaskController; }

#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1679E2B0)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___C__DISPLAYCLASS3_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x1679E2C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBlackMaskController___c__DisplayClass3_0_TypeDefinitionIndex = 56630;

	class UIGeneralBlackMaskController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralBlackMaskController* __4__this; // 0x10
		::MoleMole::UIGeneralBlackMaskContext* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___C__DISPLAYCLASS3_0__ONUIOPEN_B__0_OFFSET))(this);
		}
	};
}
