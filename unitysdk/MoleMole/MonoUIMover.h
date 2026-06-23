#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E5D3BCC3637C67DD.h"
#include "unitysdk/Enum_3_EA300FEED7FB61BB.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUIMOVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x160DADE0)
#define MOLEMOLE_MONOUIMOVER_METHOD_5_8E7482C252877E8A_OFFSET UNITYSDK_OFFSET(0x160DAF60)
#define MOLEMOLE_MONOUIMOVER_MOVETO_OFFSET UNITYSDK_OFFSET(0x160DB220)
#define MOLEMOLE_MONOUIMOVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x160DAEB0)
#define MOLEMOLE_MONOUIMOVER_ONMOVEEND_OFFSET UNITYSDK_OFFSET(0x160DB280)
#define MOLEMOLE_MONOUIMOVER_STOPMOVE_OFFSET UNITYSDK_OFFSET(0x160DB320)
#define MOLEMOLE_MONOUIMOVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x160DAF00)
#define MOLEMOLE_MONOUIMOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x160DB370)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIMover_TypeDefinitionIndex = 54372;

	class MonoUIMover : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_EA300FEED7FB61BB moveType; // 0x18
		::System::Int32 speed; // 0x1C
		::Enum_3_E5D3BCC3637C67DD Field_5_2; // 0x20
		::UnityEngine::Vector2 Field_5_3; // 0x24
		::System::Action* Field_5_4; // 0x30
		::UnityEngine::RectTransform* Field_5_5; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_UPDATE_OFFSET))(this);
		}

		::System::Void MoveTo(::UnityEngine::Vector2 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_MOVETO_OFFSET))(this, a1, a2);
		}

		::System::Void OnMoveEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_ONMOVEEND_OFFSET))(this);
		}

		::System::Void StopMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_STOPMOVE_OFFSET))(this);
		}

		::System::Void Method_5_8E7482C252877E8A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_METHOD_5_8E7482C252877E8A_OFFSET))(this, a1);
		}
	};
}
