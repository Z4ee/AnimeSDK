#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAEVALUATIONSLOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xADDF0B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEvaluationSlotConfig_TypeDefinitionIndex = 71949;

	class ChimeraEvaluationSlotConfig : public ::System::Object
	{
	public:
		::UnityEngine::Transform* ChimeraPosition; // 0x10
		::System::UInt32 ChimeraRank; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONSLOTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
