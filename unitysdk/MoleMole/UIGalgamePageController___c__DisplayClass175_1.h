#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass175_0; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS175_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18809620)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS175_1__GENERATEWHITESCREENSHAKEPLAYITEM_B__1_OFFSET UNITYSDK_OFFSET(0x18809630)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass175_1_TypeDefinitionIndex = 62829;

	class UIGalgamePageController___c__DisplayClass175_1 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* whiteBGRoot; // 0x10
		::MoleMole::UIGalgamePageController___c__DisplayClass175_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS175_1__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateWhiteScreenShakePlayItem_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS175_1__GENERATEWHITESCREENSHAKEPLAYITEM_B__1_OFFSET))(this);
		}
	};
}
