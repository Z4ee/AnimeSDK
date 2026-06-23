#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovTalentPageController; }
namespace MoleMole { class UIBangkovTalentPageController_TalentConnectionLine; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176D65C0)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS29_0__ONNODESTATECHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x176D65D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTalentPageController___c__DisplayClass29_0_TypeDefinitionIndex = 69428;

	class UIBangkovTalentPageController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIBangkovTalentPageController_TalentConnectionLine*>* value; // 0x10
		::MoleMole::UIBangkovTalentPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnNodeStateChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS29_0__ONNODESTATECHANGED_B__0_OFFSET))(this);
		}
	};
}
