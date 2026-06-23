#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass444_0; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS444_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17309300)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS444_1__SETAVATARNEW_B__3_OFFSET UNITYSDK_OFFSET(0x17309310)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass444_1_TypeDefinitionIndex = 54845;

	class UIGalgamePageController___c__DisplayClass444_1 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* npcGO; // 0x10
		::MoleMole::UIGalgamePageController___c__DisplayClass444_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS444_1__CTOR_OFFSET))(this);
		}

		::System::Void _SetAvatarNew_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS444_1__SETAVATARNEW_B__3_OFFSET))(this);
		}
	};
}
