#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_2;
namespace RPG::Client { class ChenLingDamageSettleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROUNDSETTLEINFO_GET_COINCOUNT_OFFSET UNITYSDK_OFFSET(0xDFD7C70)
#define RPG_CLIENT_ROUNDSETTLEINFO_GET_HP_OFFSET UNITYSDK_OFFSET(0xDFD7CB0)
#define RPG_CLIENT_ROUNDSETTLEINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xDFD7C90)
#define RPG_CLIENT_ROUNDSETTLEINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xDFD7CD0)
#define RPG_CLIENT_ROUNDSETTLEINFO_GET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0xDFD7CF0)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_COINCOUNT_OFFSET UNITYSDK_OFFSET(0xDFD7C80)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_HP_OFFSET UNITYSDK_OFFSET(0xDFD7CC0)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xDFD7CA0)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0xDFD7CE0)
#define RPG_CLIENT_ROUNDSETTLEINFO_SET_SOLIDERDAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0xDFD7D00)
#define RPG_CLIENT_ROUNDSETTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDFD7930)

namespace RPG::Client
{
	inline static constexpr unsigned int RoundSettleInfo_TypeDefinitionIndex = 61534;

	class RoundSettleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* _SoliderDamageInfos_k__BackingField; // 0x10
		::System::UInt32 _Hp_k__BackingField; // 0x18
		::System::UInt32 _CoinCount_k__BackingField; // 0x1C
		::System::UInt32 _MaxHp_k__BackingField; // 0x20
		::System::Boolean _IsWin_k__BackingField; // 0x24

		::System::Void _ctor(::Class_1_3AD2528CD53B1639_2* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_CoinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_COINCOUNT_OFFSET))(this);
		}

		::System::Void set_CoinCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_COINCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_Hp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_HP_OFFSET))(this);
		}

		::System::Void set_Hp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_HP_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxHp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_MAXHP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* get_SoliderDamageInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_GET_SOLIDERDAMAGEINFOS_OFFSET))(this);
		}

		::System::Void set_SoliderDamageInfos(::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingDamageSettleInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO_SET_SOLIDERDAMAGEINFOS_OFFSET))(this, a1);
		}
	};
}
