#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CA30716D4FAF92_8;
namespace RPG::Client { class ChenLingDamageSettleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGESETTLEINFO_GET_EARNEDPOINTS_OFFSET UNITYSDK_OFFSET(0xB1C3990)
#define RPG_CLIENT_STAGESETTLEINFO_GET_HP_OFFSET UNITYSDK_OFFSET(0xB1C3A10)
#define RPG_CLIENT_STAGESETTLEINFO_GET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0xB1C39D0)
#define RPG_CLIENT_STAGESETTLEINFO_GET_ISTEACHINGSTAGE_OFFSET UNITYSDK_OFFSET(0xB1C39F0)
#define RPG_CLIENT_STAGESETTLEINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB1C39B0)
#define RPG_CLIENT_STAGESETTLEINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xB1C3A30)
#define RPG_CLIENT_STAGESETTLEINFO_GET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0xB1C3A50)
#define RPG_CLIENT_STAGESETTLEINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB1C3950)
#define RPG_CLIENT_STAGESETTLEINFO_GET_TOTALWAVE_OFFSET UNITYSDK_OFFSET(0xB1C3970)
#define RPG_CLIENT_STAGESETTLEINFO_SET_EARNEDPOINTS_OFFSET UNITYSDK_OFFSET(0xB1C39A0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_HP_OFFSET UNITYSDK_OFFSET(0xB1C3A20)
#define RPG_CLIENT_STAGESETTLEINFO_SET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0xB1C39E0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_ISTEACHINGSTAGE_OFFSET UNITYSDK_OFFSET(0xB1C3A00)
#define RPG_CLIENT_STAGESETTLEINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB1C39C0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0xB1C3A40)
#define RPG_CLIENT_STAGESETTLEINFO_SET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0xB1C3A60)
#define RPG_CLIENT_STAGESETTLEINFO_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB1C3960)
#define RPG_CLIENT_STAGESETTLEINFO_SET_TOTALWAVE_OFFSET UNITYSDK_OFFSET(0xB1C3980)
#define RPG_CLIENT_STAGESETTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB1C3350)

namespace RPG::Client
{
	inline static constexpr unsigned int StageSettleInfo_TypeDefinitionIndex = 56666;

	class StageSettleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* _SoliderDamageInfos_k__BackingField; // 0x10
		::System::UInt32 _StageID_k__BackingField; // 0x18
		::System::UInt32 _MaxHp_k__BackingField; // 0x1C
		::System::Boolean _IsTeachingStage_k__BackingField; // 0x20
		::System::Boolean _IsWin_k__BackingField; // 0x21
		::System::Boolean _IsFirstPass_k__BackingField; // 0x22
		::System::UInt32 _Hp_k__BackingField; // 0x24
		::System::UInt32 _EarnedPoints_k__BackingField; // 0x28
		::System::UInt32 _TotalWave_k__BackingField; // 0x2C

		::System::Void _ctor(::Class_1_F3CA30716D4FAF92_8* info, ::System::UInt32 endlessMaxWaveRecordBeforeSettle)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_8*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO__CTOR_OFFSET))(this, info, endlessMaxWaveRecordBeforeSettle);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_STAGEID_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_TOTALWAVE_OFFSET))(this);
		}

		::System::Void set_TotalWave(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_TOTALWAVE_OFFSET))(this, value);
		}

		::System::UInt32 get_EarnedPoints()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_EARNEDPOINTS_OFFSET))(this);
		}

		::System::Void set_EarnedPoints(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_EARNEDPOINTS_OFFSET))(this, value);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_ISWIN_OFFSET))(this, value);
		}

		::System::Boolean get_IsFirstPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_ISFIRSTPASS_OFFSET))(this);
		}

		::System::Void set_IsFirstPass(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_ISFIRSTPASS_OFFSET))(this, value);
		}

		::System::Boolean get_IsTeachingStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_ISTEACHINGSTAGE_OFFSET))(this);
		}

		::System::Void set_IsTeachingStage(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_ISTEACHINGSTAGE_OFFSET))(this, value);
		}

		::System::UInt32 get_Hp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_HP_OFFSET))(this);
		}

		::System::Void set_Hp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_HP_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxHp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_MAXHP_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* get_SoliderDamageInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_SOLIDERDAMAGEINFOS_OFFSET))(this);
		}

		::System::Void set_SoliderDamageInfos(::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_SOLIDERDAMAGEINFOS_OFFSET))(this, value);
		}
	};
}
