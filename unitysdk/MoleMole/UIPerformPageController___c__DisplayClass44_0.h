#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIPerformPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1788A110)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS44_0__RECOVERTIMELINEWORLDPOS_B__0_OFFSET UNITYSDK_OFFSET(0x1788BA20)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS44_0__RECOVERTIMELINEWORLDPOS_B__1_OFFSET UNITYSDK_OFFSET(0x1788BA50)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageController___c__DisplayClass44_0_TypeDefinitionIndex = 85287;

	class UIPerformPageController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Action* onSuccess; // 0x10
		::MoleMole::UIPerformPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RecoverTimelineWorldPos_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS44_0__RECOVERTIMELINEWORLDPOS_B__0_OFFSET))(this);
		}

		::System::Void _RecoverTimelineWorldPos_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS44_0__RECOVERTIMELINEWORLDPOS_B__1_OFFSET))(this);
		}
	};
}
