#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBANGKOVSPLITPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1677D140)
#define MOLEMOLE_UIBANGKOVSPLITPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0x1677D150)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovSplitPopWindowController___c__DisplayClass21_0_TypeDefinitionIndex = 73493;

	class UIBangkovSplitPopWindowController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* callback; // 0x10
		::System::Int32 splitNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSPLITPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnConfirm_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSPLITPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCONFIRM_B__0_OFFSET))(this);
		}
	};
}
