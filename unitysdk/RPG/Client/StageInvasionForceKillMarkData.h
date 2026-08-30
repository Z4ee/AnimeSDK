#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForceKillMarkType.h"
#include "unitysdk/RPG/GameCore/ForceKillShowType.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
#include "unitysdk/System/Object.h"

class Class_1_4FBAE6148E0D2FAE;
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A4F36F0)
#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A4F3610)
#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_GET_ISACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A4F36D0)
#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A4F35F0)
#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_GET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0x1A4F3630)
#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A4F3680)
#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1A4F3790)
#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A4F3620)
#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_SET_ISACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A4F36E0)
#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A4F3600)
#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3780)
#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA__ENSURESTAGEINVASIONMODULE_OFFSET UNITYSDK_OFFSET(0x1A4F39F0)
#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA__RESET_OFFSET UNITYSDK_OFFSET(0x1A4F3910)
#define RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA__TRYGETSTAGEINVASIONUIDATA_OFFSET UNITYSDK_OFFSET(0x1A4F3960)

namespace RPG::Client
{
	inline static constexpr unsigned int StageInvasionForceKillMarkData_TypeDefinitionIndex = 71621;

	class StageInvasionForceKillMarkData : public ::System::Object
	{
	public:
		::Class_1_4FBAE6148E0D2FAE* _StageInvasionModule; // 0x10
		::System::Boolean _IsValid_k__BackingField; // 0x18
		::System::Boolean _IsActivate_k__BackingField; // 0x19
		::System::Single _FillAmount_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_SET_ISVALID_OFFSET))(this, a1);
		}

		::System::Single get_FillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_FillAmount(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_SET_FILLAMOUNT_OFFSET))(this, a1);
		}

		::RPG::GameCore::ForceKillMarkType get_MarkType()
		{
			return ((::RPG::GameCore::ForceKillMarkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_GET_MARKTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ForceKillShowType get_ShowType()
		{
			return ((::RPG::GameCore::ForceKillShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_GET_SHOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_GET_ISACTIVATE_OFFSET))(this);
		}

		::System::Void set_IsActivate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_SET_ISACTIVATE_OFFSET))(this, a1);
		}

		static ::RPG::Client::StageInvasionForceKillMarkData* Create(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::StageInvasionForceKillMarkData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Refresh(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void _Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA__RESET_OFFSET))(this);
		}

		::System::Boolean _TryGetStageInvasionUIData(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::StageInvasionMonsterUIData& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::StageInvasionMonsterUIData&))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA__TRYGETSTAGEINVASIONUIDATA_OFFSET))(this, a1, a2);
		}

		::Class_1_4FBAE6148E0D2FAE* _EnsureStageInvasionModule()
		{
			return ((::Class_1_4FBAE6148E0D2FAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEINVASIONFORCEKILLMARKDATA__ENSURESTAGEINVASIONMODULE_OFFSET))(this);
		}
	};
}
