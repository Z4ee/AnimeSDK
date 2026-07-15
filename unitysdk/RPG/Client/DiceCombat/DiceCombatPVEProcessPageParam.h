#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatStageInfo; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEPROCESSPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x1A415B20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEPROCESSPAGEPARAM_GET_BEGINSTAGE_OFFSET UNITYSDK_OFFSET(0x1A415BC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEPROCESSPAGEPARAM_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1A415BE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEPROCESSPAGEPARAM_SET_BEGINSTAGE_OFFSET UNITYSDK_OFFSET(0x1A415BD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEPROCESSPAGEPARAM_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1A415BF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEPROCESSPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A415BB0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPVEProcessPageParam_TypeDefinitionIndex = 72212;

	class DiceCombatPVEProcessPageParam : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatStageInfo* _StageInfo_k__BackingField; // 0x10
		::System::Boolean _BeginStage_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEPROCESSPAGEPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam* Create(::System::Boolean a1, ::RPG::Client::DiceCombat::DiceCombatStageInfo* a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatPVEProcessPageParam*(*)(::System::Boolean, ::RPG::Client::DiceCombat::DiceCombatStageInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEPROCESSPAGEPARAM_CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean get_BeginStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEPROCESSPAGEPARAM_GET_BEGINSTAGE_OFFSET))(this);
		}

		::System::Void set_BeginStage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEPROCESSPAGEPARAM_SET_BEGINSTAGE_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatStageInfo* get_StageInfo()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEPROCESSPAGEPARAM_GET_STAGEINFO_OFFSET))(this);
		}

		::System::Void set_StageInfo(::RPG::Client::DiceCombat::DiceCombatStageInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatStageInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEPROCESSPAGEPARAM_SET_STAGEINFO_OFFSET))(this, a1);
		}
	};
}
