#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define SRF_SRFGAMEOBJECTEXTENSIONS_SETLAYERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1846AA50)
#define SRF_SRFGAMEOBJECTEXTENSIONS_SETLAYERRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1846AA20)

namespace SRF
{
	inline static constexpr unsigned int SRFGameObjectExtensions_TypeDefinitionIndex = 27656;

	class SRFGameObjectExtensions : public ::System::Object
	{
	public:
		static ::System::Void SetLayerRecursive(::UnityEngine::GameObject* o, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_SRFGAMEOBJECTEXTENSIONS_SETLAYERRECURSIVE_OFFSET))(o, layer);
		}

		static ::System::Void SetLayerInternal(::UnityEngine::Transform* t, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_SRFGAMEOBJECTEXTENSIONS_SETLAYERINTERNAL_OFFSET))(t, layer);
		}
	};
}
