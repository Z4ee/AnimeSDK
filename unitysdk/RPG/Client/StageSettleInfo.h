#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6949CBEE02AA8B1E;
namespace RPG::Client { class ChenLingDamageSettleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGESETTLEINFO_GET_EARNEDPOINTS_OFFSET UNITYSDK_OFFSET(0xA4D2CE0)
#define RPG_CLIENT_STAGESETTLEINFO_GET_HP_OFFSET UNITYSDK_OFFSET(0xA4D2D60)
#define RPG_CLIENT_STAGESETTLEINFO_GET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0xA4D2D20)
#define RPG_CLIENT_STAGESETTLEINFO_GET_ISTEACHINGSTAGE_OFFSET UNITYSDK_OFFSET(0xA4D2D40)
#define RPG_CLIENT_STAGESETTLEINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xA4D2D00)
#define RPG_CLIENT_STAGESETTLEINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xA4D2D80)
#define RPG_CLIENT_STAGESETTLEINFO_GET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0xA4D2DA0)
#define RPG_CLIENT_STAGESETTLEINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA4D2CA0)
#define RPG_CLIENT_STAGESETTLEINFO_GET_TOTALWAVE_OFFSET UNITYSDK_OFFSET(0xA4D2CC0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_EARNEDPOINTS_OFFSET UNITYSDK_OFFSET(0xA4D2CF0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_HP_OFFSET UNITYSDK_OFFSET(0xA4D2D70)
#define RPG_CLIENT_STAGESETTLEINFO_SET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0xA4D2D30)
#define RPG_CLIENT_STAGESETTLEINFO_SET_ISTEACHINGSTAGE_OFFSET UNITYSDK_OFFSET(0xA4D2D50)
#define RPG_CLIENT_STAGESETTLEINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xA4D2D10)
#define RPG_CLIENT_STAGESETTLEINFO_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0xA4D2D90)
#define RPG_CLIENT_STAGESETTLEINFO_SET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0xA4D2DB0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA4D2CB0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_TOTALWAVE_OFFSET UNITYSDK_OFFSET(0xA4D2CD0)
#define RPG_CLIENT_STAGESETTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D26A0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageSettleInfo_TypeDefinitionIndex = 49844;

	class StageSettleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* _SoliderDamageInfos_k__BackingField; // 0x10
		::System::UInt32 _MaxHp_k__BackingField; // 0x18
		::System::UInt32 _Hp_k__BackingField; // 0x1C
		::System::UInt32 _TotalWave_k__BackingField; // 0x20
		::System::UInt32 _EarnedPoints_k__BackingField; // 0x24
		::System::Boolean _IsWin_k__BackingField; // 0x28
		::System::Boolean _IsTeachingStage_k__BackingField; // 0x29
		::System::Boolean _IsFirstPass_k__BackingField; // 0x2A
		::System::UInt32 _StageID_k__BackingField; // 0x2C

		::System::Void _ctor(::Class_1_6949CBEE02AA8B1E* info, ::System::UInt32 endlessMaxWaveRecordBeforeSettle)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6949CBEE02AA8B1E*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO__CTOR_OFFSET))(this, info, endlessMaxWaveRecordBeforeSettle);
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
