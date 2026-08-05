#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace MoleMole { class UIPlayerAccessoryPageController___c__DisplayClass43_0; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1835D7B0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_1__SENDCHANGESKIN_B__0_OFFSET UNITYSDK_OFFSET(0x1835D7C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass43_1_TypeDefinitionIndex = 51558;

	class UIPlayerAccessoryPageController___c__DisplayClass43_1 : public ::System::Object
	{
	public:
		::MoleMole::UIPlayerAccessoryPageController___c__DisplayClass43_0* CS___8__locals1; // 0x10
		::System::Int32 reqSkinID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_1__CTOR_OFFSET))(this);
		}

		::System::Void _SendChangeSkin_b__0(::Class_0_16E4307DCC419505_36* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_1__SENDCHANGESKIN_B__0_OFFSET))(this, rsp);
		}
	};
}
