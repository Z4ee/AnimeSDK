#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/AttractorDefinition.h"
#include "unitysdk/NPCCrowd/AI/AttractorTemplateRefItem.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class AttractorTemplate; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_AI_ATTRACTORINSTANCE_GETREALDEFINITION_OFFSET UNITYSDK_OFFSET(0x10296F90)
#define NPCCROWD_AI_ATTRACTORINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x10297190)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorInstance_TypeDefinitionIndex = 62864;

	class AttractorInstance : public ::System::Object
	{
	public:
		::System::Int32 instanceId; // 0x10
		::System::Int32 viewObjectId; // 0x14
		::NPCCrowd::AI::AttractorTemplateRefItem templateRefItem; // 0x18
		::UnityEngine::Vector3 position; // 0xA0
		::UnityEngine::Quaternion rotation; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORINSTANCE__CTOR_OFFSET))(this);
		}

		::NPCCrowd::AI::AttractorDefinition GetRealDefinition(::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AttractorTemplate*>* templateDict)
		{
			return ((::NPCCrowd::AI::AttractorDefinition(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::AttractorTemplate*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORINSTANCE_GETREALDEFINITION_OFFSET))(this, templateDict);
		}
	};
}
