#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass179_2; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17D958E0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_3__PLAYSWITCHSCENEGROUPNODE_INNER_B__12_OFFSET UNITYSDK_OFFSET(0x17D958F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_3__PLAYSWITCHSCENEGROUPNODE_INNER_B__13_OFFSET UNITYSDK_OFFSET(0x17D95900)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass179_3_TypeDefinitionIndex = 62775;

	class UIGalgamePageController___c__DisplayClass179_3 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass179_2* CS___8__locals3; // 0x10
		::System::Single heightRatio; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_3__CTOR_OFFSET))(this);
		}

		::System::Single _PlaySwitchSceneGroupNode_Inner_b__12()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_3__PLAYSWITCHSCENEGROUPNODE_INNER_B__12_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__13(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS179_3__PLAYSWITCHSCENEGROUPNODE_INNER_B__13_OFFSET))(this, val);
		}
	};
}
