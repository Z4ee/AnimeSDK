#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_LINERENDERER_POINTATTR__CTOR_OFFSET UNITYSDK_OFFSET(0x38E2B70)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_LineRenderer_PointAttr_TypeDefinitionIndex = 67340;

	struct alignas(8) Effect_LineRenderer_PointAttr
	{
		::UnityEngine::Transform* Trans; // 0x10
		::System::String* PosName; // 0x18
		::UnityEngine::Vector3 Offset; // 0x20

		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERER_POINTATTR__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
