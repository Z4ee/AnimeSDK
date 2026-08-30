#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_TRANSFORMSCREENADAPTER_SCREENADAPTIONKEYFRAME_GET_SCREENSCALE_OFFSET UNITYSDK_OFFSET(0x3B7A690)

namespace RPG::Client
{
	inline static constexpr unsigned int TransformScreenAdapter_ScreenAdaptionKeyframe_TypeDefinitionIndex = 70309;

	struct alignas(4) TransformScreenAdapter_ScreenAdaptionKeyframe
	{
		::System::Single Width; // 0x10
		::System::Single Height; // 0x14
		::System::Single FieldOfView; // 0x18
		::UnityEngine::Vector3 Position; // 0x1C
		::UnityEngine::Vector3 Scale; // 0x28
		::UnityEngine::Vector3 Rotation; // 0x34
		::UnityEngine::Vector2 _ScreenScale; // 0x40

		::UnityEngine::Vector2 get_ScreenScale()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMSCREENADAPTER_SCREENADAPTIONKEYFRAME_GET_SCREENSCALE_OFFSET))(this);
		}
	};
}
