#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERMAGICUNITONSCEPTER_METHOD_3_342BAF41E2C2C9AD_OFFSET UNITYSDK_OFFSET(0x190C7B80)
#define RPG_GAMECORE_TRIGGERMAGICUNITONSCEPTER_METHOD_3_49EB4AFA90B381D4_OFFSET UNITYSDK_OFFSET(0x190C7B00)
#define RPG_GAMECORE_TRIGGERMAGICUNITONSCEPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x190C7B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerMagicUnitOnScepter_TypeDefinitionIndex = 22041;

	class TriggerMagicUnitOnScepter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForPassive; // 0x18
		::System::Boolean DamageFinish; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAGICUNITONSCEPTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49EB4AFA90B381D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMagicUnitOnScepter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMagicUnitOnScepter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAGICUNITONSCEPTER_METHOD_3_49EB4AFA90B381D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_342BAF41E2C2C9AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMagicUnitOnScepter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMagicUnitOnScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAGICUNITONSCEPTER_METHOD_3_342BAF41E2C2C9AD_OFFSET))(a1, a2);
		}
	};
}
