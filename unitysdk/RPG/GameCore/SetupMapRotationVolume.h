#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapRotationVolumeEffectTransitPoint; }
namespace RPG::GameCore { class MapRotationVolumeSlotConfigBase; }

#define RPG_GAMECORE_SETUPMAPROTATIONVOLUME_METHOD_3_10411CBF3012EBBF_OFFSET UNITYSDK_OFFSET(0x18E4E030)
#define RPG_GAMECORE_SETUPMAPROTATIONVOLUME_METHOD_3_E5E685C140CDA65C_OFFSET UNITYSDK_OFFSET(0x18E4DFB0)
#define RPG_GAMECORE_SETUPMAPROTATIONVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4E000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupMapRotationVolume_TypeDefinitionIndex = 21184;

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

		static ::System::Void Method_3_E5E685C140CDA65C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupMapRotationVolume*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupMapRotationVolume*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONVOLUME_METHOD_3_E5E685C140CDA65C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_10411CBF3012EBBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupMapRotationVolume* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupMapRotationVolume*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONVOLUME_METHOD_3_10411CBF3012EBBF_OFFSET))(a1, a2);
		}
	};
}
