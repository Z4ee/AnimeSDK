#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralBottomTipsContainerPopWindowControllerContext; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALBOTTOMTIPSCONTAINERPOPWINDOWCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18401B30)
#define MOLEMOLE_UIGENERALBOTTOMTIPSCONTAINERPOPWINDOWCONTROLLER___C__DISPLAYCLASS4_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x18401B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBottomTipsContainerPopWindowController___c__DisplayClass4_0_TypeDefinitionIndex = 83961;

	class UIGeneralBottomTipsContainerPopWindowController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralBottomTipsContainerPopWindowControllerContext* ctx; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMTIPSCONTAINERPOPWINDOWCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::String* _OnUIOpen_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMTIPSCONTAINERPOPWINDOWCONTROLLER___C__DISPLAYCLASS4_0__ONUIOPEN_B__0_OFFSET))(this);
		}
	};
}
