#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace MoleMole { class UIGeneralTutorialTipsRowWidgetController; }

#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CLOSEWIDGETWITHFADE_B__0_OFFSET UNITYSDK_OFFSET(0x16AA2870)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CLOSEWIDGETWITHFADE_B__1_OFFSET UNITYSDK_OFFSET(0x16AA2B10)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CLOSEWIDGETWITHFADE_B__2_OFFSET UNITYSDK_OFFSET(0x16AA2B20)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CLOSEWIDGETWITHFADE_B__3_OFFSET UNITYSDK_OFFSET(0x16AA2B30)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA1530)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTutorialTipsRowWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 62547;

	class UIGeneralTutorialTipsRowWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTutorialTipsRowWidgetController* __4__this; // 0x10
		::DG::Tweening::Core::DOSetter_1<::System::Single>* __9__2; // 0x18
		::DG::Tweening::TweenCallback* __9__3; // 0x20
		::DG::Tweening::Core::DOGetter_1<::System::Single>* __9__1; // 0x28
		::System::Single length; // 0x30
		::System::Single currentWidth; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseWidgetWithFade_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CLOSEWIDGETWITHFADE_B__0_OFFSET))(this);
		}

		::System::Single _CloseWidgetWithFade_b__1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CLOSEWIDGETWITHFADE_B__1_OFFSET))(this);
		}

		::System::Void _CloseWidgetWithFade_b__2(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CLOSEWIDGETWITHFADE_B__2_OFFSET))(this, v);
		}

		::System::Void _CloseWidgetWithFade_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CLOSEWIDGETWITHFADE_B__3_OFFSET))(this);
		}
	};
}
