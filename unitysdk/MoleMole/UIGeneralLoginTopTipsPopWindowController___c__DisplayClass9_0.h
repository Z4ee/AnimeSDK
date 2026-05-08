#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class UIGeneralLoginTopTipsPopWindowController; }

#define MOLEMOLE_UIGENERALLOGINTOPTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x151B8720)
#define MOLEMOLE_UIGENERALLOGINTOPTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONSTARTCLOSE_B__0_OFFSET UNITYSDK_OFFSET(0x151B8730)
#define MOLEMOLE_UIGENERALLOGINTOPTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONSTARTCLOSE_B__1_OFFSET UNITYSDK_OFFSET(0x151B8800)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLoginTopTipsPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 73660;

	class UIGeneralLoginTopTipsPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::DG::Tweening::TweenCallback* __9__1; // 0x10
		::MoleMole::UIGeneralLoginTopTipsPopWindowController* __4__this; // 0x18
		::System::Single length; // 0x20
		::UnityEngine::Vector2 finalSize; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTOPTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStartClose_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTOPTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONSTARTCLOSE_B__0_OFFSET))(this);
		}

		::System::Void _OnStartClose_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINTOPTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONSTARTCLOSE_B__1_OFFSET))(this);
		}
	};
}
