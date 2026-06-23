#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace MoleMole { class UIGeneralTutorialTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x171E8370)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x171E8380)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x171E8490)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOANIMATION_B__2_OFFSET UNITYSDK_OFFSET(0x171E8730)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOANIMATION_B__3_OFFSET UNITYSDK_OFFSET(0x171E8740)
#define MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOANIMATION_B__4_OFFSET UNITYSDK_OFFSET(0x171E8750)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTutorialTipsRowWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 62546;

	class UIGeneralTutorialTipsRowWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::DG::Tweening::Core::DOGetter_1<::System::Single>* __9__2; // 0x18
		::MoleMole::UIGeneralTutorialTipsRowWidgetController* __4__this; // 0x20
		::DG::Tweening::Core::DOSetter_1<::System::Single>* __9__3; // 0x28
		::DG::Tweening::TweenCallback* __9__4; // 0x30
		::System::Single targetWidth; // 0x38
		::UnityEngine::Vector2 finalSize; // 0x3C
		::System::Single length; // 0x44
		::System::Single currentWidth; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _DoAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOANIMATION_B__1_OFFSET))(this);
		}

		::System::Single _DoAnimation_b__2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOANIMATION_B__2_OFFSET))(this);
		}

		::System::Void _DoAnimation_b__3(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOANIMATION_B__3_OFFSET))(this, v);
		}

		::System::Void _DoAnimation_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTUTORIALTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOANIMATION_B__4_OFFSET))(this);
		}
	};
}
