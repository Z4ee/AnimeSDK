#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace MoleMole { class UIGeneralTipsCameraRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166F3680)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__DOANIMATIONFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x166F3690)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__DOANIMATIONFADEOUT_B__1_OFFSET UNITYSDK_OFFSET(0x166F39D0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__DOANIMATIONFADEOUT_B__2_OFFSET UNITYSDK_OFFSET(0x166F3930)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__DOANIMATIONFADEOUT_B__3_OFFSET UNITYSDK_OFFSET(0x166F3940)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__DOANIMATIONFADEOUT_B__4_OFFSET UNITYSDK_OFFSET(0x166F3950)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsCameraRowWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 43707;

	class UIGeneralTipsCameraRowWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::DG::Tweening::Core::DOSetter_1<::System::Single>* __9__3; // 0x10
		::MoleMole::UIGeneralTipsCameraRowWidgetController* __4__this; // 0x18
		::DG::Tweening::Core::DOGetter_1<::System::Single>* __9__2; // 0x20
		::DG::Tweening::TweenCallback* __9__4; // 0x28
		::System::Action* action; // 0x30
		::System::Single currentWidth; // 0x38
		::System::Single length; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoAnimationFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__DOANIMATIONFADEOUT_B__0_OFFSET))(this);
		}

		::System::Single _DoAnimationFadeOut_b__2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__DOANIMATIONFADEOUT_B__2_OFFSET))(this);
		}

		::System::Void _DoAnimationFadeOut_b__3(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__DOANIMATIONFADEOUT_B__3_OFFSET))(this, v);
		}

		::System::Void _DoAnimationFadeOut_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__DOANIMATIONFADEOUT_B__4_OFFSET))(this);
		}

		::System::Void _DoAnimationFadeOut_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS15_0__DOANIMATIONFADEOUT_B__1_OFFSET))(this);
		}
	};
}
