#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define SRF_SRFGAMEOBJECTEXTENSIONS_SETLAYERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CED0E00)
#define SRF_SRFGAMEOBJECTEXTENSIONS_SETLAYERRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1CED0DD0)

namespace SRF
{
	inline static constexpr unsigned int SRFGameObjectExtensions_TypeDefinitionIndex = 33933;

	class SRFGameObjectExtensions : public ::System::Object
	{
	public:
		static ::System::Void SetLayerRecursive(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_SRFGAMEOBJECTEXTENSIONS_SETLAYERRECURSIVE_OFFSET))(a1, a2);
		}

		static ::System::Void SetLayerInternal(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_SRFGAMEOBJECTEXTENSIONS_SETLAYERINTERNAL_OFFSET))(a1, a2);
		}
	};
}
