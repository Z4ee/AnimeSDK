#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TriggerEnergyBarEffect; }

#define RPG_GAMECORE_TRIGGERENERGYBAREFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xCF338F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEnergyBarEffectParam_TypeDefinitionIndex = 52053;

	class TriggerEnergyBarEffectParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x10
		::RPG::GameCore::TriggerEnergyBarEffect* Param; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENERGYBAREFFECTPARAM__CTOR_OFFSET))(this);
		}
	};
}
