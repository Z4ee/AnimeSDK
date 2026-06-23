#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAnalogClockAnimation_Enum_3_69F5F23936D95363.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIANALOGCLOCKANIMATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x161254C0)
#define MOLEMOLE_UIANALOGCLOCKANIMATION_METHOD_5_C137A300E46D5C0F_OFFSET UNITYSDK_OFFSET(0x16125690)
#define MOLEMOLE_UIANALOGCLOCKANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x16125950)

namespace MoleMole
{
	inline static constexpr unsigned int UIAnalogClockAnimation_TypeDefinitionIndex = 69276;

	class UIAnalogClockAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* ModelHour; // 0x18
		::UnityEngine::Transform* ModelMinute; // 0x20
		::UnityEngine::Transform* ModelSecond; // 0x28
		::UnityEngine::Quaternion RotationAt12; // 0x30
		::UnityEngine::Quaternion RotationAt4; // 0x40
		::UnityEngine::Quaternion RotationAt8; // 0x50
		::MoleMole::UIAnalogClockAnimation_Enum_3_69F5F23936D95363 TimeSource; // 0x60
		::System::Single TickInterval; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANALOGCLOCKANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANALOGCLOCKANIMATION_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_C137A300E46D5C0F(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANALOGCLOCKANIMATION_METHOD_5_C137A300E46D5C0F_OFFSET))(this, a1, a2);
		}
	};
}
