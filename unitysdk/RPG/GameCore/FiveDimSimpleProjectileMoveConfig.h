#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileHitActionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPropSpawnerParam; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG_METHOD_3_30B6E98AAA4B1F1B_OFFSET UNITYSDK_OFFSET(0x1720BA80)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG_METHOD_3_4B9A4CB9CDEEB455_OFFSET UNITYSDK_OFFSET(0x172050C0)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172050A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleProjectileMoveConfig_TypeDefinitionIndex = 15306;

	class FiveDimSimpleProjectileMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::Single LifeTime; // 0x40
		::RPG::GameCore::FiveDimSimpleProjectileHitActionType HitActionType; // 0x44
		::System::String* PresetName; // 0x48
		::System::Boolean IsUnique; // 0x50
		::RPG::GameCore::FiveDimPropSpawnerParam* SpawnParam; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_30B6E98AAA4B1F1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectileMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectileMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG_METHOD_3_30B6E98AAA4B1F1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B9A4CB9CDEEB455(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectileMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectileMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG_METHOD_3_4B9A4CB9CDEEB455_OFFSET))(a1, a2);
		}
	};
}
