#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SUMMONMONSTERCONFIG_METHOD_2_85AB3E37885635D0_OFFSET UNITYSDK_OFFSET(0x19CD2D30)
#define RPG_GAMECORE_SUMMONMONSTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD2DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonMonsterConfig_TypeDefinitionIndex = 15545;

	class SummonMonsterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* SummonMonsterList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_85AB3E37885635D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonMonsterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonMonsterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTERCONFIG_METHOD_2_85AB3E37885635D0_OFFSET))(a1, a2);
		}
	};
}
