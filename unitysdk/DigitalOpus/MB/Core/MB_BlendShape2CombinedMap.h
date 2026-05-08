#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace DigitalOpus::MB::Core { class SerializableSourceBlendShape2Combined; }

#define DIGITALOPUS_MB_CORE_MB_BLENDSHAPE2COMBINEDMAP_GETMAP_OFFSET UNITYSDK_OFFSET(0x1C037AA0)
#define DIGITALOPUS_MB_CORE_MB_BLENDSHAPE2COMBINEDMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C037AF0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_BlendShape2CombinedMap_TypeDefinitionIndex = 85083;

	class MB_BlendShape2CombinedMap : public ::UnityEngine::MonoBehaviour
	{
	public:
		::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined* srcToCombinedMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_BLENDSHAPE2COMBINEDMAP__CTOR_OFFSET))(this);
		}

		::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined* GetMap()
		{
			return ((::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_BLENDSHAPE2COMBINEDMAP_GETMAP_OFFSET))(this);
		}
	};
}
