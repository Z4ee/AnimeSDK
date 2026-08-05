#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_GETMOVEMENTMAG_OFFSET UNITYSDK_OFFSET(0xF884520)
#define NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xF884560)
#define NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_GET_NEEDREFRESHDATA_OFFSET UNITYSDK_OFFSET(0xF8845C0)
#define NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xF8845D0)
#define NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xF8844C0)
#define NPCCROWD_LOD_NPCCROWDPOSITIONAGENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF884440)
#define NPCCROWD_LOD_NPCCROWDPOSITIONAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0xF884430)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdPositionAgent_TypeDefinitionIndex = 54377;

	class NPCCrowdPositionAgent : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 curPos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPOSITIONAGENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPOSITIONAGENT__CTOR_1_OFFSET))(this, pos);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_SETPOSITION_OFFSET))(this, pos);
		}

		::System::Single GetMovementMag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_GETMOVEMENTMAG_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_GETPOSITION_OFFSET))(this);
		}

		::System::Boolean get_NeedRefreshData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_GET_NEEDREFRESHDATA_OFFSET))(this);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_REFRESHDATA_OFFSET))(this);
		}
	};
}
