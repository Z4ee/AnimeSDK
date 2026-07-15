#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYDISSOLVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5E880)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXOverlayDissolveConfig_TypeDefinitionIndex = 46877;

	class VFXOverlayDissolveConfig : public ::System::Object
	{
	public:
		::System::String* DissolveMapTexturePath; // 0x10
		::UnityEngine::Vector2 DissolveMapTextureTiling; // 0x18
		::UnityEngine::Vector2 DissolveMapTextureOffset; // 0x20
		::UnityEngine::Vector4 DissolveMapFlowSpeed; // 0x28
		::System::Int32 DissolveMapChannel; // 0x38
		::UnityEngine::Vector4 DissolveRemap; // 0x3C
		::UnityEngine::Vector2 DissolveProcessRange; // 0x4C
		::System::Single DissolveEdge; // 0x54
		::UnityEngine::Color DissolveEdgeColor; // 0x58
		::System::Single DissolveEdge1Offset; // 0x68
		::UnityEngine::Color DissolveEdgeColor1; // 0x6C
		::System::Int32 DissolveTarget; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYDISSOLVECONFIG__CTOR_OFFSET))(this);
		}
	};
}
