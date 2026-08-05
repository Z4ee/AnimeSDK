#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18448CF0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS43_0__LOADTIMELINEINITWORLDPOS_B__0_OFFSET UNITYSDK_OFFSET(0x1844A6F0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS43_0__LOADTIMELINEINITWORLDPOS_B__1_OFFSET UNITYSDK_OFFSET(0x1844A710)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageController___c__DisplayClass43_0_TypeDefinitionIndex = 45496;

	class UIPerformPageController___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::Action* onSuccess; // 0x10
		::UnityEngine::Vector3 targetPos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _LoadTimelineInitWorldPos_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS43_0__LOADTIMELINEINITWORLDPOS_B__0_OFFSET))(this);
		}

		::System::Void _LoadTimelineInitWorldPos_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS43_0__LOADTIMELINEINITWORLDPOS_B__1_OFFSET))(this);
		}
	};
}
