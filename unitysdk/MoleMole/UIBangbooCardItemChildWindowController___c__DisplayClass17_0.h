#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangbooCardItemChildWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBANGBOOCARDITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x172C30A0)
#define MOLEMOLE_UIBANGBOOCARDITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__REGISTERCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x172C30B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooCardItemChildWindowController___c__DisplayClass17_0_TypeDefinitionIndex = 49666;

	class UIBangbooCardItemChildWindowController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangbooCardItemChildWindowController* __4__this; // 0x10
		::System::Action_1<::System::Int32>* action; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCARDITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCARDITEMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__REGISTERCALLBACK_B__0_OFFSET))(this);
		}
	};
}
