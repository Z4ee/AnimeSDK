#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1110;
class Class_0_16E4307DCC419505_1113;
class Class_0_16E4307DCC419505_1114;
namespace RPG::Client { class VoracityInvasionProgressBuffData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GETDISPLAYDATADESC_OFFSET UNITYSDK_OFFSET(0xE45E2E0)
#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GETDISPLAYDATAIDS_OFFSET UNITYSDK_OFFSET(0xE45AEB0)
#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GETDISPLAYDATAID_OFFSET UNITYSDK_OFFSET(0xE45E280)
#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GETDISPLAYDATAPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xE45AF00)
#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GETDISPLAYDESC_OFFSET UNITYSDK_OFFSET(0xE45E200)
#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GETPROGRESSBUFFLIST_OFFSET UNITYSDK_OFFSET(0xE45E360)
#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xE45E150)
#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GET_DISPLAYPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xE45E170)
#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GET_MARKETWEBGOTOID_OFFSET UNITYSDK_OFFSET(0xE45E190)
#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xE45E160)
#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_SET_DISPLAYPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xE45E180)
#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_SYNCCURPROGRESS_OFFSET UNITYSDK_OFFSET(0xE45DF50)
#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_SYNCDISPLAYPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xE45DFA0)
#define RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0xE45DF30)

namespace RPG::Client
{
	inline static constexpr unsigned int VoracityInvasionWorldProgress_TypeDefinitionIndex = 68271;

	class VoracityInvasionWorldProgress : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1113* _BuffRepository; // 0x10
		::Class_0_16E4307DCC419505_1114* _Repository; // 0x18
		::Class_0_16E4307DCC419505_1110* _DependencyProvider; // 0x20
		::System::Double _DisplayPercentage_k__BackingField; // 0x28
		::System::UInt64 _CurProgress_k__BackingField; // 0x30

		::System::Void _ctor(::Class_0_16E4307DCC419505_1110* a1, ::Class_0_16E4307DCC419505_1114* a2, ::Class_0_16E4307DCC419505_1113* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1110*, ::Class_0_16E4307DCC419505_1114*, ::Class_0_16E4307DCC419505_1113*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 get_CurProgress()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GET_CURPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurProgress(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_SET_CURPROGRESS_OFFSET))(this, a1);
		}

		::System::Double get_DisplayPercentage()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GET_DISPLAYPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_DisplayPercentage(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_SET_DISPLAYPERCENTAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MarketWebGotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GET_MARKETWEBGOTOID_OFFSET))(this);
		}

		::System::Void SyncCurProgress(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_SYNCCURPROGRESS_OFFSET))(this, a1);
		}

		::System::Void SyncDisplayPercentage(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_SYNCDISPLAYPERCENTAGE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetDisplayDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GETDISPLAYDESC_OFFSET))(this);
		}

		::System::UInt32 GetDisplayDataID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GETDISPLAYDATAID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDisplayDataIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GETDISPLAYDATAIDS_OFFSET))(this);
		}

		::System::Single GetDisplayDataPercentage(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GETDISPLAYDATAPERCENTAGE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetDisplayDataDesc(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GETDISPLAYDATADESC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionProgressBuffData*>* GetProgressBuffList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionProgressBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDPROGRESS_GETPROGRESSBUFFLIST_OFFSET))(this);
		}
	};
}
