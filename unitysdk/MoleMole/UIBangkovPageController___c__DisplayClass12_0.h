#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovPageController; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBANGKOVPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1802B640)
#define MOLEMOLE_UIBANGKOVPAGECONTROLLER___C__DISPLAYCLASS12_0__ONSELECTBANGBOOCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x1802B650)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovPageController___c__DisplayClass12_0_TypeDefinitionIndex = 49127;

	class UIBangkovPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovPageController* __4__this; // 0x10
		::System::Int32 index; // 0x18
		::System::Int32 newBangbooId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectBangbooChanged_b__0(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVPAGECONTROLLER___C__DISPLAYCLASS12_0__ONSELECTBANGBOOCHANGED_B__0_OFFSET))(this, go);
		}
	};
}
