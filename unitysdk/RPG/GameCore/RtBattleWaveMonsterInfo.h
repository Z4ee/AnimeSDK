#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtBattleStageUnitInfo; }

#define RPG_GAMECORE_RTBATTLEWAVEMONSTERINFO_METHOD_2_80F5D68A9B653765_OFFSET UNITYSDK_OFFSET(0x1BB8B090)
#define RPG_GAMECORE_RTBATTLEWAVEMONSTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB8B180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleWaveMonsterInfo_TypeDefinitionIndex = 17326;

	class RtBattleWaveMonsterInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtBattleStageUnitInfo*>* SpawnList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEWAVEMONSTERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_80F5D68A9B653765(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleWaveMonsterInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleWaveMonsterInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEWAVEMONSTERINFO_METHOD_2_80F5D68A9B653765_OFFSET))(a1, a2);
		}
	};
}
