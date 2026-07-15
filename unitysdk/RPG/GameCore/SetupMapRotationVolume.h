#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapRotationVolumeEffectTransitPoint; }
namespace RPG::GameCore { class MapRotationVolumeSlotConfigBase; }

#define RPG_GAMECORE_SETUPMAPROTATIONVOLUME_METHOD_3_026E2CE52F6ECF59_OFFSET UNITYSDK_OFFSET(0x1BE2FFE0)
#define RPG_GAMECORE_SETUPMAPROTATIONVOLUME_METHOD_3_4B9D35D736E14364_OFFSET UNITYSDK_OFFSET(0x1BE2FFA0)
#define RPG_GAMECORE_SETUPMAPROTATIONVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2FFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupMapRotationVolume_TypeDefinitionIndex = 21496;

	class SetupMapRotationVolume : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MapRotationVolumeEffectTransitPoint*>* EffectTransitPointConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::MapRotationVolumeSlotConfigBase*>* SlotConfigs; // 0x20
		::System::Boolean CanMove; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONVOLUME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B9D35D736E14364(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupMapRotationVolume*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupMapRotationVolume*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONVOLUME_METHOD_3_4B9D35D736E14364_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_026E2CE52F6ECF59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupMapRotationVolume* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupMapRotationVolume*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONVOLUME_METHOD_3_026E2CE52F6ECF59_OFFSET))(a1, a2);
		}
	};
}
