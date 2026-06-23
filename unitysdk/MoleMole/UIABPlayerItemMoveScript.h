#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_AWAKE_OFFSET UNITYSDK_OFFSET(0x18D31220)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_ISMOVING_OFFSET UNITYSDK_OFFSET(0x18D31620)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x18D312B0)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_SETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x18D31510)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_STARTMOVE_OFFSET UNITYSDK_OFFSET(0x18D315E0)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_STOPMOVE_OFFSET UNITYSDK_OFFSET(0x18D31660)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_TICK_OFFSET UNITYSDK_OFFSET(0x18D31320)
#define MOLEMOLE_UIABPLAYERITEMMOVESCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D316B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABPlayerItemMoveScript_TypeDefinitionIndex = 67452;

	class UIABPlayerItemMoveScript : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single duration; // 0x18
		::UnityEngine::AnimationCurve* YAnim; // 0x20
		::UnityEngine::AnimationCurve* XAnim; // 0x28
		::UnityEngine::Vector3 Field_5_3; // 0x30
		::System::Single Field_5_4; // 0x3C
		::UnityEngine::Vector3 Field_5_5; // 0x40
		::UnityEngine::Vector3 Field_5_6; // 0x4C
		::System::Boolean Field_5_7; // 0x58
		::System::Boolean Field_5_8; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_AWAKE_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_RESETPOSITION_OFFSET))(this);
		}

		::System::Boolean Tick(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_TICK_OFFSET))(this, a1);
		}

		::System::Void SetTargetPos(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_SETTARGETPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_STARTMOVE_OFFSET))(this);
		}

		::System::Boolean IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_ISMOVING_OFFSET))(this);
		}

		::System::Void StopMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABPLAYERITEMMOVESCRIPT_STOPMOVE_OFFSET))(this);
		}
	};
}
