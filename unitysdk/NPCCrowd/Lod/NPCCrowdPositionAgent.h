#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_GETMOVEMENTMAG_OFFSET UNITYSDK_OFFSET(0x13A07B90)
#define NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x13A07BD0)
#define NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x13A07C30)
#define NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x13A07B30)
#define NPCCROWD_LOD_NPCCROWDPOSITIONAGENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13A07AB0)
#define NPCCROWD_LOD_NPCCROWDPOSITIONAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x13A07AA0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdPositionAgent_TypeDefinitionIndex = 40617;

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

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDPOSITIONAGENT_REFRESHDATA_OFFSET))(this);
		}
	};
}
