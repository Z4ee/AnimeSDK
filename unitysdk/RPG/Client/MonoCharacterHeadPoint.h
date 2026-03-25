#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_MONOCHARACTERHEADPOINT_GET_WORLDPOS_OFFSET UNITYSDK_OFFSET(0x9C176D0)
#define RPG_CLIENT_MONOCHARACTERHEADPOINT_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x9C17910)
#define RPG_CLIENT_MONOCHARACTERHEADPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x9C17950)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCharacterHeadPoint_TypeDefinitionIndex = 55955;

	class MonoCharacterHeadPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single radius; // 0x18
		::UnityEngine::Vector3 offset; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCHARACTERHEADPOINT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_WorldPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCHARACTERHEADPOINT_GET_WORLDPOS_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCHARACTERHEADPOINT_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
