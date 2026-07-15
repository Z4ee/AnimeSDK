#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class Texture; }

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroReflectionProbeProperty_EnviroReflectionProbe_TypeDefinitionIndex = 47769;

	struct alignas(8) EnviroReflectionProbeProperty_EnviroReflectionProbe
	{
		::UnityEngine::ReflectionProbe* m_Probe; // 0x10
		::UnityEngine::Texture* m_CubeRes; // 0x18
		::System::String* m_CubePath; // 0x20
		::System::String* m_Name; // 0x28
		::System::Int32 m_Importance; // 0x30
		::System::Single m_Intensity; // 0x34
		::System::Boolean m_BoxProjection; // 0x38
		::UnityEngine::Bounds m_Bounds; // 0x3C
		::UnityEngine::Vector3 m_Position; // 0x54
		::UnityEngine::Quaternion m_Rotation; // 0x60
		::System::Boolean m_IsGlobal; // 0x70
		::System::Single m_Weight; // 0x74
		::System::Single m_BlendDistance; // 0x78
	};
}
