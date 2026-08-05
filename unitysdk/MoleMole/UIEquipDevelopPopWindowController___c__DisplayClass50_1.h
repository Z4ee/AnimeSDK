#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MatAnimation;
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16065F00)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_1__ONCLICKEQUIPLEVELBTN_B__1_OFFSET UNITYSDK_OFFSET(0x16065F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopPopWindowController___c__DisplayClass50_1_TypeDefinitionIndex = 70946;

	class UIEquipDevelopPopWindowController___c__DisplayClass50_1 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* anim; // 0x10
		::MatAnimation* matAnim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickEquipLevelBtn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_1__ONCLICKEQUIPLEVELBTN_B__1_OFFSET))(this);
		}
	};
}
