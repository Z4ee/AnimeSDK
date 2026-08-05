#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace MoleMole { class UIABInLevelTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173C7280)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__UPDATECONTENTFADEINANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x173C7290)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__UPDATECONTENTFADEINANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x173C7330)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__UPDATECONTENTFADEINANIMATION_B__2_OFFSET UNITYSDK_OFFSET(0x173C7560)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__UPDATECONTENTFADEINANIMATION_B__3_OFFSET UNITYSDK_OFFSET(0x173C7570)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__UPDATECONTENTFADEINANIMATION_B__4_OFFSET UNITYSDK_OFFSET(0x173C7580)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__UPDATECONTENTFADEINANIMATION_B__5_OFFSET UNITYSDK_OFFSET(0x173C7600)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelTipsWidgetController___c__DisplayClass36_0_TypeDefinitionIndex = 48132;

	class UIABInLevelTipsWidgetController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::DG::Tweening::Core::DOGetter_1<::System::Single>* __9__2; // 0x18
		::DG::Tweening::TweenCallback* __9__4; // 0x20
		::MoleMole::UIABInLevelTipsWidgetController* __4__this; // 0x28
		::System::Action* callback; // 0x30
		::DG::Tweening::TweenCallback* __9__5; // 0x38
		::DG::Tweening::Core::DOSetter_1<::System::Single>* __9__3; // 0x40
		::System::Single fadeInLength; // 0x48
		::System::Single targetWidth; // 0x4C
		::System::Single currentWidth; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeInAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__UPDATECONTENTFADEINANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeInAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__UPDATECONTENTFADEINANIMATION_B__1_OFFSET))(this);
		}

		::System::Single _UpdateContentFadeInAnimation_b__2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__UPDATECONTENTFADEINANIMATION_B__2_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeInAnimation_b__3(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__UPDATECONTENTFADEINANIMATION_B__3_OFFSET))(this, v);
		}

		::System::Void _UpdateContentFadeInAnimation_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__UPDATECONTENTFADEINANIMATION_B__4_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeInAnimation_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS36_0__UPDATECONTENTFADEINANIMATION_B__5_OFFSET))(this);
		}
	};
}
