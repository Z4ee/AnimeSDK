#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DEBUG_GET_ORTHODEPTH_OFFSET UNITYSDK_OFFSET(0x9D3D350)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DEBUG_GET_ORTHOPOSITION_OFFSET UNITYSDK_OFFSET(0x9D3D370)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DEBUG_SET_ORTHODEPTH_OFFSET UNITYSDK_OFFSET(0x9D3D360)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DEBUG_SET_ORTHOPOSITION_OFFSET UNITYSDK_OFFSET(0x9D3D380)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x9D3D340)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelCell_Debug_TypeDefinitionIndex = 48939;

	class MonoTimelineControlGameLevelCell_Debug : public ::System::Object
	{
	public:
		::System::Single _OrthoDepth_k__BackingField; // 0x10
		::UnityEngine::Vector2Int _OrthoPosition_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DEBUG__CTOR_OFFSET))(this);
		}

		::System::Single get_OrthoDepth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DEBUG_GET_ORTHODEPTH_OFFSET))(this);
		}

		::System::Void set_OrthoDepth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DEBUG_SET_ORTHODEPTH_OFFSET))(this, value);
		}

		::UnityEngine::Vector2Int get_OrthoPosition()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DEBUG_GET_ORTHOPOSITION_OFFSET))(this);
		}

		::System::Void set_OrthoPosition(::UnityEngine::Vector2Int value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_DEBUG_SET_ORTHOPOSITION_OFFSET))(this, value);
		}
	};
}
