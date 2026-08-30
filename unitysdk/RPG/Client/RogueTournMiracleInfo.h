#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_943;
class Class_1_242BFB9DE152D766_11;
class Class_1_D17272E82AE804C2_943;
namespace RPG::Client { class IRogueMiracleInGame; }
namespace RPG::Client { class RogueTournGameMiracleData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_ADDMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xDF63BD0)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF58870)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET UNITYSDK_OFFSET(0xDF63EC0)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0xDF63FE0)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_ISMIRACLEACHIEVED_OFFSET UNITYSDK_OFFSET(0xDF63F50)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_REFRESHMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xDF63D20)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_REMOVEMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xDF63C90)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_REPLACEMIRACLEITEM_OFFSET UNITYSDK_OFFSET(0xDF63DF0)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_RPG_CLIENT_IROGUEMIRACLEINFO_GET_ACHIVEDMIRACLES_OFFSET UNITYSDK_OFFSET(0xDF640C0)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xDF59800)
#define RPG_CLIENT_ROGUETOURNMIRACLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDF58510)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournMiracleInfo_TypeDefinitionIndex = 67682;

	class RogueTournMiracleInfo : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_943* _BlackboardProxyFactory; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournGameMiracleData*>* _Miracles; // 0x18

		::System::Void _ctor(::Class_0_16E4307DCC419505_943* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_943*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void AddMiracleItem(::Class_1_D17272E82AE804C2_943* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_943*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_ADDMIRACLEITEM_OFFSET))(this, a1);
		}

		::System::Boolean RemoveMiracleItem(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_REMOVEMIRACLEITEM_OFFSET))(this, a1);
		}

		::System::Void RefreshMiracleItem(::Class_1_D17272E82AE804C2_943* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_943*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_REFRESHMIRACLEITEM_OFFSET))(this, a1);
		}

		::System::Void ReplaceMiracleItem(::System::UInt32 a1, ::Class_1_D17272E82AE804C2_943* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D17272E82AE804C2_943*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_REPLACEMIRACLEITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IRogueMiracleInGame* GetMiracleDataByMiracleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueMiracleInGame*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_GETMIRACLEDATABYMIRACLEID_OFFSET))(this, a1);
		}

		::System::Boolean IsMiracleAchieved(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_ISMIRACLEACHIEVED_OFFSET))(this, a1);
		}

		::System::Void SyncFull(::Class_1_242BFB9DE152D766_11* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEINFO_SYNCFULL_OFFSET))(this, a1);
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
