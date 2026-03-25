#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define RPG_GAMECORE_MARBLEDRAGGUIDECONFIG_ROTATE_OFFSET UNITYSDK_OFFSET(0xA99CB60)
#define RPG_GAMECORE_MARBLEDRAGGUIDECONFIG_SYNCROOTPOS_OFFSET UNITYSDK_OFFSET(0xA99CA20)
#define RPG_GAMECORE_MARBLEDRAGGUIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA99CA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleDragGuideConfig_TypeDefinitionIndex = 42328;

	class MarbleDragGuideConfig : public ::System::Object
	{
	public:
		::System::Single RotationAngle; // 0x10
		::UnityEngine::Vector2 RootScreenPos; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDRAGGUIDECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void SyncRootPos(::UnityEngine::RectTransform* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDRAGGUIDECONFIG_SYNCROOTPOS_OFFSET))(this, node);
		}

		::System::Void Rotate(::UnityEngine::RectTransform* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDRAGGUIDECONFIG_ROTATE_OFFSET))(this, node);
		}
	};
}
