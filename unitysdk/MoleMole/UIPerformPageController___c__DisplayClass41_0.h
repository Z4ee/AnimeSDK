#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIPerformPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16120F90)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS41_0__RECOVERTIMELINEWORLDPOS_B__0_OFFSET UNITYSDK_OFFSET(0x16122EE0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS41_0__RECOVERTIMELINEWORLDPOS_B__1_OFFSET UNITYSDK_OFFSET(0x16122F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageController___c__DisplayClass41_0_TypeDefinitionIndex = 50556;

	class UIPerformPageController___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPerformPageController* __4__this; // 0x10
		::System::Action* onSuccess; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RecoverTimelineWorldPos_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS41_0__RECOVERTIMELINEWORLDPOS_B__0_OFFSET))(this);
		}

		::System::Void _RecoverTimelineWorldPos_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS41_0__RECOVERTIMELINEWORLDPOS_B__1_OFFSET))(this);
		}
	};
}
