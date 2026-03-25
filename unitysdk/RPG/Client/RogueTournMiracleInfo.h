#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_703;
class Class_1_43D95BDB5AB51D37_2;
class Class_1_C03D623E9F32FBCB_10;
namespace RPG::Client { class IRogueMiracleInGame; }
namespace RPG::Client { class RogueTournGameMiracleData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_ADDMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xA39BD90)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA39BCF0)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET UNITYSDK_OFFSET(0xA39C050)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0xA39C4C0)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_ISMIRACLEACHIEVED_OFFSET UNITYSDK_OFFSET(0xA39C110)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_REFRESHMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xA39BEB0)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_REMOVEMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xA39BE50)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_REPLACEMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xA39BFB0)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0xA39C520)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xA39C1C0)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA39BC70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournMiracleInfo_TypeDefinitionIndex = 55198;

	class RogueTournMiracleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournGameMiracleData*>* _Miracles; // 0x10
		::Class_0_16E4307DCC419505_703* _BlackboardProxyFactory; // 0x18

		::System::Void _ctor(::Class_0_16E4307DCC419505_703* blackboardProxyFactory)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_703*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO__CTOR_OFFSET))(this, blackboardProxyFactory);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void AddMiracleItem(::Class_1_43D95BDB5AB51D37_2* miracleProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43D95BDB5AB51D37_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_ADDMIRACLEITEM_OFFSET))(this, miracleProto);
		}

		::System::Boolean RemoveMiracleItem(::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_REMOVEMIRACLEITEM_OFFSET))(this, miracleID);
		}

		::System::Void RefreshMiracleItem(::Class_1_43D95BDB5AB51D37_2* miralceProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43D95BDB5AB51D37_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_REFRESHMIRACLEITEM_OFFSET))(this, miralceProto);
		}

		::System::Void ReplaceMiracleItem(::System::UInt32 oldMiracleID, ::Class_1_43D95BDB5AB51D37_2* newMiracle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_43D95BDB5AB51D37_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_REPLACEMIRACLEITEM_OFFSET))(this, oldMiracleID, newMiracle);
		}

		::RPG::Client::IRogueMiracleInGame* GetMiracleDataByMiracleID(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::IRogueMiracleInGame*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET))(this, miracleID);
		}

		::System::Boolean IsMiracleAchieved(::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_ISMIRACLEACHIEVED_OFFSET))(this, miracleID);
		}

		::System::Void SyncFull(::Class_1_C03D623E9F32FBCB_10* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_SYNCFULL_OFFSET))(this, proto);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournGameMiracleData*>* get_AchivedMiracles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournGameMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracleInGame*>* RPG_Client_IRogueMiracleInfo_get_AchivedMiracles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET))(this);
		}
	};
}
