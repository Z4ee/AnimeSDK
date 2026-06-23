#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass70_2; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_3__CTOR_OFFSET UNITYSDK_OFFSET(0x16A916C0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_3__PLAYSWITCHSCENEGROUPNODE_INNER_B__13_OFFSET UNITYSDK_OFFSET(0x16A920A0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_3__PLAYSWITCHSCENEGROUPNODE_INNER_B__14_OFFSET UNITYSDK_OFFSET(0x16A920B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass70_3_TypeDefinitionIndex = 54884;

	class UIGalgamePageController___c__DisplayClass70_3 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass70_2* CS___8__locals3; // 0x10
		::System::Single heightRatio; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_3__CTOR_OFFSET))(this);
		}

		::System::Single _PlaySwitchSceneGroupNode_Inner_b__13()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_3__PLAYSWITCHSCENEGROUPNODE_INNER_B__13_OFFSET))(this);
		}

		::System::Void _PlaySwitchSceneGroupNode_Inner_b__14(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS70_3__PLAYSWITCHSCENEGROUPNODE_INNER_B__14_OFFSET))(this, val);
		}
	};
}
