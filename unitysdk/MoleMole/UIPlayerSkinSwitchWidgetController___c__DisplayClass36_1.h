#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
namespace MoleMole { class UIPlayerSkinSwitchWidgetController___c__DisplayClass36_0; }

#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS36_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF9A20)
#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS36_1__ONCLICKPREVIEWORSWITCHSKIN_B__0_OFFSET UNITYSDK_OFFSET(0x13DF9A60)
#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS36_1__ONCLICKPREVIEWORSWITCHSKIN_B__1_OFFSET UNITYSDK_OFFSET(0x13DF9A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerSkinSwitchWidgetController___c__DisplayClass36_1_TypeDefinitionIndex = 60437;

	class UIPlayerSkinSwitchWidgetController___c__DisplayClass36_1 : public ::System::Object
	{
	public:
		::MoleMole::UIPlayerSkinSwitchWidgetController___c__DisplayClass36_0* CS___8__locals1; // 0x10
		::System::Int32 avatarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS36_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickPreviewOrSwitchSkin_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS36_1__ONCLICKPREVIEWORSWITCHSKIN_B__1_OFFSET))(this);
		}

		::System::Void _OnClickPreviewOrSwitchSkin_b__0(::Class_0_16E4307DCC419505_11* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS36_1__ONCLICKPREVIEWORSWITCHSKIN_B__0_OFFSET))(this, rsp);
		}
	};
}
