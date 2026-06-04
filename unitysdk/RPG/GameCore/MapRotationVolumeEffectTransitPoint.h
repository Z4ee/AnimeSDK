#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_MAPROTATIONVOLUMEEFFECTTRANSITPOINT_METHOD_2_770C866017E63CBA_OFFSET UNITYSDK_OFFSET(0x198C25A0)
#define RPG_GAMECORE_MAPROTATIONVOLUMEEFFECTTRANSITPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x198C2680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationVolumeEffectTransitPoint_TypeDefinitionIndex = 21079;

	class MapRotationVolumeEffectTransitPoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicString* TriggerName; // 0x10
		::RPG::GameCore::DynamicString* EnergyTrailEffectTransitPoint; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMEEFFECTTRANSITPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_770C866017E63CBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationVolumeEffectTransitPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationVolumeEffectTransitPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMEEFFECTTRANSITPOINT_METHOD_2_770C866017E63CBA_OFFSET))(a1, a2);
		}
	};
}
