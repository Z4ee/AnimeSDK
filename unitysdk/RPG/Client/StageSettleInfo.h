#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CA30716D4FAF92_6;
namespace RPG::Client { class ChenLingDamageSettleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGESETTLEINFO_GET_EARNEDPOINTS_OFFSET UNITYSDK_OFFSET(0x1A4F8300)
#define RPG_CLIENT_STAGESETTLEINFO_GET_HP_OFFSET UNITYSDK_OFFSET(0x1A4F8380)
#define RPG_CLIENT_STAGESETTLEINFO_GET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0x1A4F8340)
#define RPG_CLIENT_STAGESETTLEINFO_GET_ISTEACHINGSTAGE_OFFSET UNITYSDK_OFFSET(0x1A4F8360)
#define RPG_CLIENT_STAGESETTLEINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1A4F8320)
#define RPG_CLIENT_STAGESETTLEINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1A4F83A0)
#define RPG_CLIENT_STAGESETTLEINFO_GET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0x1A4F83C0)
#define RPG_CLIENT_STAGESETTLEINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1A4F82C0)
#define RPG_CLIENT_STAGESETTLEINFO_GET_TOTALWAVE_OFFSET UNITYSDK_OFFSET(0x1A4F82E0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_EARNEDPOINTS_OFFSET UNITYSDK_OFFSET(0x1A4F8310)
#define RPG_CLIENT_STAGESETTLEINFO_SET_HP_OFFSET UNITYSDK_OFFSET(0x1A4F8390)
#define RPG_CLIENT_STAGESETTLEINFO_SET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0x1A4F8350)
#define RPG_CLIENT_STAGESETTLEINFO_SET_ISTEACHINGSTAGE_OFFSET UNITYSDK_OFFSET(0x1A4F8370)
#define RPG_CLIENT_STAGESETTLEINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1A4F8330)
#define RPG_CLIENT_STAGESETTLEINFO_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1A4F83B0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0x1A4F83D0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1A4F82D0)
#define RPG_CLIENT_STAGESETTLEINFO_SET_TOTALWAVE_OFFSET UNITYSDK_OFFSET(0x1A4F82F0)
#define RPG_CLIENT_STAGESETTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F7E80)

namespace RPG::Client
{
	inline static constexpr unsigned int StageSettleInfo_TypeDefinitionIndex = 61536;

	class StageSettleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* _SoliderDamageInfos_k__BackingField; // 0x10
		::System::UInt32 _MaxHp_k__BackingField; // 0x18
		::System::UInt32 _StageID_k__BackingField; // 0x1C
		::System::UInt32 _TotalWave_k__BackingField; // 0x20
		::System::UInt32 _EarnedPoints_k__BackingField; // 0x24
		::System::Boolean _IsFirstPass_k__BackingField; // 0x28
		::System::Boolean _IsWin_k__BackingField; // 0x29
		::System::Boolean _IsTeachingStage_k__BackingField; // 0x2A
		::System::UInt32 _Hp_k__BackingField; // 0x2C

		::System::Void _ctor(::Class_1_F3CA30716D4FAF92_6* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_6*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_STAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_TOTALWAVE_OFFSET))(this);
		}

		::System::Void set_TotalWave(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_TOTALWAVE_OFFSET))(this, a1);
		}

		::System::UInt32 get_EarnedPoints()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_EARNEDPOINTS_OFFSET))(this);
		}

		::System::Void set_EarnedPoints(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_EARNEDPOINTS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_ISFIRSTPASS_OFFSET))(this);
		}

		::System::Void set_IsFirstPass(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_ISFIRSTPASS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTeachingStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_ISTEACHINGSTAGE_OFFSET))(this);
		}

		::System::Void set_IsTeachingStage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_ISTEACHINGSTAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Hp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_HP_OFFSET))(this);
		}

		::System::Void set_Hp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_HP_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxHp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_MAXHP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* get_SoliderDamageInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_GET_SOLIDERDAMAGEINFOS_OFFSET))(this);
		}

		::System::Void set_SoliderDamageInfos(::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO_SET_SOLIDERDAMAGEINFOS_OFFSET))(this, a1);
		}
	};
}
