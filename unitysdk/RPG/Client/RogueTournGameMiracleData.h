#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournMiracleDataBase.h"

class Class_0_16E4307DCC419505_803;
class Class_1_2CC11CDCB897D481_2;
class Class_1_412DDC84C44F8B4B;
class Class_1_7BE0B64AF0A0B070_1;
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace RPG::GameCore { class RogueTournMiracleRow; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xB0C85B0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_CREATEDATA_OFFSET UNITYSDK_OFFSET(0xB0C83E0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_DYNAMICHINT_OFFSET UNITYSDK_OFFSET(0xB0C88F0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xB0C88D0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xB0C88B0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_ISBROKEN_OFFSET UNITYSDK_OFFSET(0xB0C8640)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xB0C88E0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xB0C88C0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB0C8550)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB0C86A0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C83D0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA__INITFROMROWS_OFFSET UNITYSDK_OFFSET(0xB0C87B0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB0C89B0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA___IFIXBASEPROXY__INITFROMROWS_OFFSET UNITYSDK_OFFSET(0xB0C8A30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameMiracleData_TypeDefinitionIndex = 62380;

	class RogueTournGameMiracleData : public ::RPG::Client::RogueTournMiracleDataBase
	{
	public:
		::Class_1_7BE0B64AF0A0B070_1* _BlackboardContext; // 0x60
		::Class_1_412DDC84C44F8B4B* _DynamicHint; // 0x68
		::System::UInt32 _TotalCount_k__BackingField; // 0x70
		::System::UInt32 _UseCount_k__BackingField; // 0x74

		::System::Void _ctor(::Class_1_7BE0B64AF0A0B070_1* blackboardContext)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7BE0B64AF0A0B070_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA__CTOR_OFFSET))(this, blackboardContext);
		}

		static ::RPG::Client::RogueTournGameMiracleData* CreateData(::Class_1_2CC11CDCB897D481_2* proto, ::Class_0_16E4307DCC419505_803* blackboardProxyFactory)
		{
			return ((::RPG::Client::RogueTournGameMiracleData*(*)(::Class_1_2CC11CDCB897D481_2*, ::Class_0_16E4307DCC419505_803*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_CREATEDATA_OFFSET))(proto, blackboardProxyFactory);
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

		::System::Void _InitFromRows(::RPG::GameCore::RogueTournMiracleRow* miracleRow, ::RPG::GameCore::RogueMiracleDisplayRow* displayRow, ::RPG::GameCore::RogueMiracleEffectRow* effectRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiracleRow*, ::RPG::GameCore::RogueMiracleDisplayRow*, ::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA__INITFROMROWS_OFFSET))(this, miracleRow, displayRow, effectRow);
		}

		::System::Void Sync(::Class_1_2CC11CDCB897D481_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CC11CDCB897D481_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SYNC_OFFSET))(this, proto);
		}

		::System::UInt32 get_UseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_USECOUNT_OFFSET))(this);
		}

		::System::Void set_UseCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SET_USECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SET_TOTALCOUNT_OFFSET))(this, value);
		}

		::System::String* get_DynamicHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_DYNAMICHINT_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__InitFromRows(::RPG::GameCore::RogueTournMiracleRow* P0, ::RPG::GameCore::RogueMiracleDisplayRow* P1, ::RPG::GameCore::RogueMiracleEffectRow* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiracleRow*, ::RPG::GameCore::RogueMiracleDisplayRow*, ::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA___IFIXBASEPROXY__INITFROMROWS_OFFSET))(this, P0, P1, P2);
		}
	};
}
