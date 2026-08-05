#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E5D3BCC3637C67DD.h"
#include "unitysdk/Enum_3_EA300FEED7FB61BB.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUIMOVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19977A40)
#define MOLEMOLE_MONOUIMOVER_METHOD_5_F369E7339B1E3506_OFFSET UNITYSDK_OFFSET(0x19977BC0)
#define MOLEMOLE_MONOUIMOVER_MOVETO_OFFSET UNITYSDK_OFFSET(0x19977E30)
#define MOLEMOLE_MONOUIMOVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19977B10)
#define MOLEMOLE_MONOUIMOVER_ONMOVEEND_OFFSET UNITYSDK_OFFSET(0x19977E90)
#define MOLEMOLE_MONOUIMOVER_STOPMOVE_OFFSET UNITYSDK_OFFSET(0x19977F30)
#define MOLEMOLE_MONOUIMOVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19977B60)
#define MOLEMOLE_MONOUIMOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x19977F80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIMover_TypeDefinitionIndex = 53227;

	class MonoUIMover : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_EA300FEED7FB61BB moveType; // 0x18
		::System::Int32 speed; // 0x1C
		::Enum_3_E5D3BCC3637C67DD Field_5_1; // 0x20
		::UnityEngine::Vector2 Field_5_0; // 0x24
		::System::Action* Field_5_7; // 0x30
		::UnityEngine::RectTransform* Field_5_6; // 0x38

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

		::System::Void Method_5_F369E7339B1E3506(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVER_METHOD_5_F369E7339B1E3506_OFFSET))(this, a1);
		}
	};
}
