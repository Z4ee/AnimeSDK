#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivePropsPopWindowController; }
namespace MoleMole { class UserLocalDataItem; }

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12BEFF20)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController___c__DisplayClass26_0_TypeDefinitionIndex = 85108;

	class UIActivePropsPopWindowController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UserLocalDataItem* localData; // 0x10
		::MoleMole::UIActivePropsPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}
	};
}
