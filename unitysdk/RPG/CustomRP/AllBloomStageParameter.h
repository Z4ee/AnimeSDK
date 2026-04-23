#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

namespace RPG::CustomRP { class AllBloomStage; }

#define RPG_CUSTOMRP_ALLBLOOMSTAGEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x180FEED0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AllBloomStageParameter_TypeDefinitionIndex = 35163;

	class AllBloomStageParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::RPG::CustomRP::AllBloomStage*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ALLBLOOMSTAGEPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
