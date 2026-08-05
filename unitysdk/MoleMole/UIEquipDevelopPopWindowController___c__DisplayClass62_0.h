#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MatAnimation;
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183D9DD0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__ONLEVELUPMATCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x183D9DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopPopWindowController___c__DisplayClass62_0_TypeDefinitionIndex = 70948;

	class UIEquipDevelopPopWindowController___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* anim; // 0x10
		::MatAnimation* matAnim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLevelUpMatChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__ONLEVELUPMATCHANGED_B__0_OFFSET))(this);
		}
	};
}
