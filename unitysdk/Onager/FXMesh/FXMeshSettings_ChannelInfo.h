#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Onager/FXMesh/FXMeshSettings_ChannelMode.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }

#define ONAGER_FXMESH_FXMESHSETTINGS_CHANNELINFO_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x677870)

namespace Onager::FXMesh
{
	inline static constexpr unsigned int FXMeshSettings_ChannelInfo_TypeDefinitionIndex = 38054;

	struct alignas(8) FXMeshSettings_ChannelInfo
	{
		::Onager::FXMesh::FXMeshSettings_ChannelMode Mode; // 0x10
		::UnityEngine::Gradient* Gradient; // 0x18
		::System::Boolean Gradient_Horizontal; // 0x20
		::UnityEngine::AnimationCurve* R; // 0x28
		::System::Boolean R_Horizontal; // 0x30
		::UnityEngine::AnimationCurve* G; // 0x38
		::System::Boolean G_Horizontal; // 0x40
		::UnityEngine::AnimationCurve* B; // 0x48
		::System::Boolean B_Horizontal; // 0x50
		::UnityEngine::AnimationCurve* A; // 0x58
		::System::Boolean A_Horizontal; // 0x60

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAGER_FXMESH_FXMESHSETTINGS_CHANNELINFO_GET_ENABLED_OFFSET))(this);
		}
	};
}
