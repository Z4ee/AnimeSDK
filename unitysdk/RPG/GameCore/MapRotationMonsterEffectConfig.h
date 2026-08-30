#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationEntityEffectConfig.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPROTATIONMONSTEREFFECTCONFIG_METHOD_3_51717C95712572EE_OFFSET UNITYSDK_OFFSET(0x1D226700)
#define RPG_GAMECORE_MAPROTATIONMONSTEREFFECTCONFIG_METHOD_3_C3C9F529B0051BB3_OFFSET UNITYSDK_OFFSET(0x1D2271F0)
#define RPG_GAMECORE_MAPROTATIONMONSTEREFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2266F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationMonsterEffectConfig_TypeDefinitionIndex = 16836;

	class MapRotationMonsterEffectConfig : public ::RPG::GameCore::MapRotationEntityEffectConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MonsterRank>* MonsterRanks; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONMONSTEREFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C3C9F529B0051BB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationMonsterEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationMonsterEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONMONSTEREFFECTCONFIG_METHOD_3_C3C9F529B0051BB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_51717C95712572EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationMonsterEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationMonsterEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONMONSTEREFFECTCONFIG_METHOD_3_51717C95712572EE_OFFSET))(a1, a2);
		}
	};
}
