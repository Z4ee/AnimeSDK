#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPerformPageController___c__DisplayClass53_0; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1835CFD0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_1__ONPLAYCGEND_B__2_OFFSET UNITYSDK_OFFSET(0x1835CFE0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_1__ONPLAYCGEND_B__3_OFFSET UNITYSDK_OFFSET(0x1835D070)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_1__ONPLAYCGEND_B__4_OFFSET UNITYSDK_OFFSET(0x1835D100)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageController___c__DisplayClass53_1_TypeDefinitionIndex = 45494;

	class UIPerformPageController___c__DisplayClass53_1 : public ::System::Object
	{
	public:
		::System::String* fadeout; // 0x10
		::MoleMole::UIPerformPageController___c__DisplayClass53_0* CS___8__locals1; // 0x18
		::System::Action* __9__4; // 0x20
		::System::Boolean nextComic; // 0x28
		::System::Boolean nextGalgame; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_1__ONPLAYCGEND_B__2_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_1__ONPLAYCGEND_B__3_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS53_1__ONPLAYCGEND_B__4_OFFSET))(this);
		}
	};
}
