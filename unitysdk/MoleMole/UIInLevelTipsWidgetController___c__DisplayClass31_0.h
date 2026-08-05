#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace MoleMole { class UIInLevelTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182BC870)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__UPDATECONTENTFADEINANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x182BC880)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__UPDATECONTENTFADEINANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x182BC920)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__UPDATECONTENTFADEINANIMATION_B__2_OFFSET UNITYSDK_OFFSET(0x182BCB50)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__UPDATECONTENTFADEINANIMATION_B__3_OFFSET UNITYSDK_OFFSET(0x182BCB60)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__UPDATECONTENTFADEINANIMATION_B__4_OFFSET UNITYSDK_OFFSET(0x182BCB70)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__UPDATECONTENTFADEINANIMATION_B__5_OFFSET UNITYSDK_OFFSET(0x182BCD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelTipsWidgetController___c__DisplayClass31_0_TypeDefinitionIndex = 77525;

	class UIInLevelTipsWidgetController___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::System::Action* callback; // 0x18
		::DG::Tweening::TweenCallback* __9__5; // 0x20
		::MoleMole::UIInLevelTipsWidgetController* __4__this; // 0x28
		::DG::Tweening::TweenCallback* __9__4; // 0x30
		::DG::Tweening::Core::DOSetter_1<::System::Single>* __9__3; // 0x38
		::DG::Tweening::Core::DOGetter_1<::System::Single>* __9__2; // 0x40
		::System::Single targetWidth; // 0x48
		::System::Single currentWidth; // 0x4C
		::System::Single fadeInLength; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeInAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__UPDATECONTENTFADEINANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeInAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__UPDATECONTENTFADEINANIMATION_B__1_OFFSET))(this);
		}

		::System::Single _UpdateContentFadeInAnimation_b__2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__UPDATECONTENTFADEINANIMATION_B__2_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeInAnimation_b__3(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__UPDATECONTENTFADEINANIMATION_B__3_OFFSET))(this, v);
		}

		::System::Void _UpdateContentFadeInAnimation_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__UPDATECONTENTFADEINANIMATION_B__4_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeInAnimation_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS31_0__UPDATECONTENTFADEINANIMATION_B__5_OFFSET))(this);
		}
	};
}
