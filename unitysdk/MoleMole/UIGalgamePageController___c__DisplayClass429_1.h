#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass429_0; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS429_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15F06D80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS429_1__SETAVATARNEW_B__3_OFFSET UNITYSDK_OFFSET(0x15F06D90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass429_1_TypeDefinitionIndex = 41780;

	class UIGalgamePageController___c__DisplayClass429_1 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* npcGO; // 0x10
		::MoleMole::UIGalgamePageController___c__DisplayClass429_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS429_1__CTOR_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS429_1__SETAVATARNEW_B__3_OFFSET))(this);
		}
	};
}
