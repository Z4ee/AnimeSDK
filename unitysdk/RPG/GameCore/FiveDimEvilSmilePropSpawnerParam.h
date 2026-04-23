#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEvilSmileStateOverrideConfig; }

#define RPG_GAMECORE_FIVEDIMEVILSMILEPROPSPAWNERPARAM_METHOD_3_60BB55E57A981974_OFFSET UNITYSDK_OFFSET(0x18900A90)
#define RPG_GAMECORE_FIVEDIMEVILSMILEPROPSPAWNERPARAM_METHOD_3_9B3F7D92D123EB61_OFFSET UNITYSDK_OFFSET(0x18900A40)
#define RPG_GAMECORE_FIVEDIMEVILSMILEPROPSPAWNERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18900A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmilePropSpawnerParam_TypeDefinitionIndex = 17650;

	class FiveDimEvilSmilePropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::System::Boolean EnableOverrideMoveSpeed; // 0x10
		::System::Single MoveSpeedOverride; // 0x14
		::Il2CppArray<::RPG::GameCore::FiveDimEvilSmileStateOverrideConfig*>* OverrideStateConfigList; // 0x18
		::System::Single AppearDistance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEPROPSPAWNERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B3F7D92D123EB61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEPROPSPAWNERPARAM_METHOD_3_9B3F7D92D123EB61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_60BB55E57A981974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEPROPSPAWNERPARAM_METHOD_3_60BB55E57A981974_OFFSET))(a1, a2);
		}
	};
}
