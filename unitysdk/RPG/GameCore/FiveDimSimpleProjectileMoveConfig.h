#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileHitActionType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPropSpawnerParam; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG_METHOD_3_372F1839F0558314_OFFSET UNITYSDK_OFFSET(0x1BEB2BA0)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG_METHOD_3_87659E7772222C24_OFFSET UNITYSDK_OFFSET(0x1BEABD70)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEABD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleProjectileMoveConfig_TypeDefinitionIndex = 16054;

	class FiveDimSimpleProjectileMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::Single LifeTime; // 0x40
		::RPG::GameCore::FiveDimSimpleProjectileHitActionType HitActionType; // 0x44
		::System::String* PresetName; // 0x48
		::System::Boolean IsUnique; // 0x50
		::RPG::MVector3 CreationOffset; // 0x54
		::RPG::GameCore::FiveDimPropSpawnerParam* SpawnParam; // 0x60
		::System::Boolean AttachToTarget; // 0x68
		::System::String* OnHitPlayerEvent; // 0x70
		::System::String* OnHitOtherEvent; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_372F1839F0558314(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectileMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectileMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG_METHOD_3_372F1839F0558314_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_87659E7772222C24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectileMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectileMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEMOVECONFIG_METHOD_3_87659E7772222C24_OFFSET))(a1, a2);
		}
	};
}
