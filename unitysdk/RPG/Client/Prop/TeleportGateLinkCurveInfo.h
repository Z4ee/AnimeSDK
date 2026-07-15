#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGateLinkCurveInfo_TypeDefinitionIndex = 74940;

	struct alignas(8) TeleportGateLinkCurveInfo
	{
		::System::Int32 StartIndex; // 0x10
		::System::Int32 EndIndex; // 0x14
		::UnityEngine::GameObject* CurveObject; // 0x18
		::System::Boolean EnableRaycastDetect; // 0x20
		::System::String* CurveEffectPath; // 0x28
	};
}
