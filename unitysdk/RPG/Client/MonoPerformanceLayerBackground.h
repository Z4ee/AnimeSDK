#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOPERFORMANCELAYERBACKGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E9F10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPerformanceLayerBackground_TypeDefinitionIndex = 55974;

	class MonoPerformanceLayerBackground : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* Bg0; // 0x18
		::UnityEngine::Renderer* Bg1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPERFORMANCELAYERBACKGROUND__CTOR_OFFSET))(this);
		}
	};
}
