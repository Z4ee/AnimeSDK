#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_233C9F38C078EDCA.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOWAYPOINT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x199780A0)
#define MOLEMOLE_MONOWAYPOINT_INIT_OFFSET UNITYSDK_OFFSET(0x19977FE0)
#define MOLEMOLE_MONOWAYPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x19978280)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWayPoint_TypeDefinitionIndex = 87041;

	class MonoWayPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isTerminalPoint; // 0x18
		::Enum_3_233C9F38C078EDCA terminalPointAction; // 0x1C
		::System::Single radius; // 0x20
		::System::String* wayPointName; // 0x28
		::System::Int32 index; // 0x30
		::System::Single stayTime; // 0x34
		::UnityEngine::Transform* Field_5_10; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPOINT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPOINT_INIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPOINT_GET_POSITION_OFFSET))(this);
		}
	};
}
