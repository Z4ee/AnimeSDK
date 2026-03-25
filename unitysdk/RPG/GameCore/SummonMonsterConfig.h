#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SUMMONMONSTERCONFIG_METHOD_2_36A00F83F08A008D_OFFSET UNITYSDK_OFFSET(0x1778D3E0)
#define RPG_GAMECORE_SUMMONMONSTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1778D4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonMonsterConfig_TypeDefinitionIndex = 14975;

	class SummonMonsterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* SummonMonsterList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_36A00F83F08A008D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonMonsterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonMonsterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONMONSTERCONFIG_METHOD_2_36A00F83F08A008D_OFFSET))(a1, a2);
		}
	};
}
