#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_AI_ATTRACTORTESTINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xE92CEE0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorTestInstance_TypeDefinitionIndex = 54354;

	class AttractorTestInstance : public ::System::Object
	{
	public:
		::System::Int32 attractorId; // 0x10
		::UnityEngine::Vector3 position; // 0x14
		::UnityEngine::Quaternion rotation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORTESTINSTANCE__CTOR_OFFSET))(this);
		}
	};
}
