#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_4;
namespace RPG::Client { class ChenLingDamageSettleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROUNDSETTLEINFO_GET_COINCOUNT_OFFSET UNITYSDK_OFFSET(0xA3F96E0)
#define RPG_CLIENT_ROUNDSETTLEINFO_GET_HP_OFFSET UNITYSDK_OFFSET(0xA3F9720)
#define RPG_CLIENT_ROUNDSETTLEINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xA3F9700)
#define RPG_CLIENT_ROUNDSETTLEINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xA3F9740)
#define RPG_CLIENT_ROUNDSETTLEINFO_GET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0xA3F9760)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_COINCOUNT_OFFSET UNITYSDK_OFFSET(0xA3F96F0)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_HP_OFFSET UNITYSDK_OFFSET(0xA3F9730)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xA3F9710)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0xA3F9750)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0xA3F9770)
#define RPG_CLIENT_ROUNDSETTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F92A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoundSettleInfo_TypeDefinitionIndex = 49842;

	class RoundSettleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* _SoliderDamageInfos_k__BackingField; // 0x10
		::System::UInt32 _MaxHp_k__BackingField; // 0x18
		::System::UInt32 _CoinCount_k__BackingField; // 0x1C
		::System::Boolean _IsWin_k__BackingField; // 0x20
		::System::UInt32 _Hp_k__BackingField; // 0x24

		::System::Void _ctor(::Class_1_3AD2528CD53B1639_4* rsp, ::System::UInt32 maxHp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_4*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO__CTOR_OFFSET))(this, rsp, maxHp);
		}

		::System::UInt32 get_CoinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_COINCOUNT_OFFSET))(this);
		}

		::System::Void set_CoinCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_COINCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_ISWIN_OFFSET))(this, value);
		}

		::System::UInt32 get_Hp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_HP_OFFSET))(this);
		}

		::System::Void set_Hp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_HP_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxHp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_MAXHP_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* get_SoliderDamageInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_SOLIDERDAMAGEINFOS_OFFSET))(this);
		}

		::System::Void set_SoliderDamageInfos(::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_SOLIDERDAMAGEINFOS_OFFSET))(this, value);
		}
	};
}
