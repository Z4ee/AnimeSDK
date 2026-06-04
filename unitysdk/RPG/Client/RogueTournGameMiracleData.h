#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournMiracleDataBase.h"

class Class_0_16E4307DCC419505_854;
class Class_1_CDB239B5BA2266D7;
class Class_1_FA04D10070B1B78D_1;
class Class_1_FD893FD36F6A3A6D_2;
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace RPG::GameCore { class RogueTournMiracleRow; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xC8184A0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_CREATEDATA_OFFSET UNITYSDK_OFFSET(0xC8182D0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_DYNAMICHINT_OFFSET UNITYSDK_OFFSET(0xC8187E0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xC8187C0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xC8187A0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_ISBROKEN_OFFSET UNITYSDK_OFFSET(0xC818530)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xC8187D0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xC8187B0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC818440)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC818590)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8182C0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA__INITFROMROWS_OFFSET UNITYSDK_OFFSET(0xC8186A0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC8188A0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA___IFIXBASEPROXY__INITFROMROWS_OFFSET UNITYSDK_OFFSET(0xC818910)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameMiracleData_TypeDefinitionIndex = 63313;

	class RogueTournGameMiracleData : public ::RPG::Client::RogueTournMiracleDataBase
	{
	public:
		::Class_1_CDB239B5BA2266D7* _DynamicHint; // 0x60
		::Class_1_FD893FD36F6A3A6D_2* _BlackboardContext; // 0x68
		::System::UInt32 _TotalCount_k__BackingField; // 0x70
		::System::UInt32 _UseCount_k__BackingField; // 0x74

		::System::Void _ctor(::Class_1_FD893FD36F6A3A6D_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FD893FD36F6A3A6D_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournGameMiracleData* CreateData(::Class_1_FA04D10070B1B78D_1* a1, ::Class_0_16E4307DCC419505_854* a2)
		{
			return ((::RPG::Client::RogueTournGameMiracleData*(*)(::Class_1_FA04D10070B1B78D_1*, ::Class_0_16E4307DCC419505_854*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_CREATEDATA_OFFSET))(a1, a2);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_CLONE_OFFSET))(this);
		}

		::System::Boolean IsBroken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_ISBROKEN_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_TOSTRING_OFFSET))(this);
		}

		::System::Void _InitFromRows(::RPG::GameCore::RogueTournMiracleRow* a1, ::RPG::GameCore::RogueMiracleDisplayRow* a2, ::RPG::GameCore::RogueMiracleEffectRow* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiracleRow*, ::RPG::GameCore::RogueMiracleDisplayRow*, ::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA__INITFROMROWS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Sync(::Class_1_FA04D10070B1B78D_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA04D10070B1B78D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_UseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_USECOUNT_OFFSET))(this);
		}

		::System::Void set_UseCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SET_USECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SET_TOTALCOUNT_OFFSET))(this, a1);
		}

		::System::String* get_DynamicHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_DYNAMICHINT_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__InitFromRows(::RPG::GameCore::RogueTournMiracleRow* a1, ::RPG::GameCore::RogueMiracleDisplayRow* a2, ::RPG::GameCore::RogueMiracleEffectRow* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiracleRow*, ::RPG::GameCore::RogueMiracleDisplayRow*, ::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA___IFIXBASEPROXY__INITFROMROWS_OFFSET))(this, a1, a2, a3);
		}
	};
}
