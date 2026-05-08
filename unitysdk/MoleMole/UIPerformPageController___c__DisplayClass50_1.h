#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPerformPageController___c__DisplayClass50_0; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS50_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1559BCC0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS50_1__ONPLAYCGEND_B__2_OFFSET UNITYSDK_OFFSET(0x1559BCD0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS50_1__ONPLAYCGEND_B__3_OFFSET UNITYSDK_OFFSET(0x1559BD60)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS50_1__ONPLAYCGEND_B__4_OFFSET UNITYSDK_OFFSET(0x1559BDF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageController___c__DisplayClass50_1_TypeDefinitionIndex = 50557;

	class UIPerformPageController___c__DisplayClass50_1 : public ::System::Object
	{
	public:
		::MoleMole::UIPerformPageController___c__DisplayClass50_0* CS___8__locals1; // 0x10
		::System::String* fadeout; // 0x18
		::System::Action* __9__4; // 0x20
		::System::Boolean nextComic; // 0x28
		::System::Boolean nextGalgame; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS50_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS50_1__ONPLAYCGEND_B__2_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS50_1__ONPLAYCGEND_B__3_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS50_1__ONPLAYCGEND_B__4_OFFSET))(this);
		}
	};
}
