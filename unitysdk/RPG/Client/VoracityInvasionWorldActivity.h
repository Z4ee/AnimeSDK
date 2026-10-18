#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1110;
class Class_0_16E4307DCC419505_1111;
class Class_0_16E4307DCC419505_1112;
class Class_0_16E4307DCC419505_1113;
class Class_0_16E4307DCC419505_1114;
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class VoracityInvasionFightEntranceData; }
namespace RPG::Client { class VoracityInvasionPersonalProgress; }
namespace RPG::Client { class VoracityInvasionWorldProgress; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE45C3D0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GETFIGHTENTRANCELIST_OFFSET UNITYSDK_OFFSET(0xE45E0C0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_DISPLAYMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xE45DEF0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_LASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0xE45DF10)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_ONUPDATED_OFFSET UNITYSDK_OFFSET(0xE45DED0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_PERSONALPROGRESS_OFFSET UNITYSDK_OFFSET(0xE45DE90)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_WORLDPROGRESS_OFFSET UNITYSDK_OFFSET(0xE45DEB0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xE45E020)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_PUBLISHUPDATEEVENT_OFFSET UNITYSDK_OFFSET(0xE45D830)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_DISPLAYMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xE45DF00)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_LASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0xE45DF20)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_ONUPDATED_OFFSET UNITYSDK_OFFSET(0xE45DEE0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_PERSONALPROGRESS_OFFSET UNITYSDK_OFFSET(0xE45DEA0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_WORLDPROGRESS_OFFSET UNITYSDK_OFFSET(0xE45DEC0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATEDISPLAYPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xE45D3D0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATELASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0xE45D470)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATEPERSONALCURPROGRESS_OFFSET UNITYSDK_OFFSET(0xE45D2D0)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATEWORLDCURPROGRESS_OFFSET UNITYSDK_OFFSET(0xE45D350)
#define RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY__CTOR_OFFSET UNITYSDK_OFFSET(0xE45BED0)

namespace RPG::Client
{
	inline static constexpr unsigned int VoracityInvasionWorldActivity_TypeDefinitionIndex = 68270;

	class VoracityInvasionWorldActivity : public ::System::Object
	{
	public:
		::System::Action* _OnUpdated_k__BackingField; // 0x10
		::Class_0_16E4307DCC419505_1112* _TimerService; // 0x18
		::RPG::Client::VoracityInvasionPersonalProgress* _PersonalProgress_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _DisplayMonsterDataList_k__BackingField; // 0x28
		::RPG::Client::VoracityInvasionWorldProgress* _WorldProgress_k__BackingField; // 0x30
		::Class_0_16E4307DCC419505_1110* _Provider; // 0x38
		::Class_0_16E4307DCC419505_1111* _NetworkService; // 0x40
		::System::Int64 _LastUpdateTime_k__BackingField; // 0x48
		::System::Int32 _StartOfHourTimerID; // 0x50
		::System::Int32 _RefreshTimerID; // 0x54

		::System::Void _ctor(::Class_0_16E4307DCC419505_1111* a1, ::Class_0_16E4307DCC419505_1112* a2, ::Class_0_16E4307DCC419505_1110* a3, ::Class_0_16E4307DCC419505_1114* a4, ::Class_0_16E4307DCC419505_1113* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1111*, ::Class_0_16E4307DCC419505_1112*, ::Class_0_16E4307DCC419505_1110*, ::Class_0_16E4307DCC419505_1114*, ::Class_0_16E4307DCC419505_1113*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::VoracityInvasionPersonalProgress* get_PersonalProgress()
		{
			return ((::RPG::Client::VoracityInvasionPersonalProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_PERSONALPROGRESS_OFFSET))(this);
		}

		::System::Void set_PersonalProgress(::RPG::Client::VoracityInvasionPersonalProgress* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VoracityInvasionPersonalProgress*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_PERSONALPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::VoracityInvasionWorldProgress* get_WorldProgress()
		{
			return ((::RPG::Client::VoracityInvasionWorldProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_WORLDPROGRESS_OFFSET))(this);
		}

		::System::Void set_WorldProgress(::RPG::Client::VoracityInvasionWorldProgress* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VoracityInvasionWorldProgress*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_WORLDPROGRESS_OFFSET))(this, a1);
		}

		::System::Action* get_OnUpdated()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_ONUPDATED_OFFSET))(this);
		}

		::System::Void set_OnUpdated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_ONUPDATED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* get_DisplayMonsterDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_DISPLAYMONSTERDATALIST_OFFSET))(this);
		}

		::System::Void set_DisplayMonsterDataList(::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_DISPLAYMONSTERDATALIST_OFFSET))(this, a1);
		}

		::System::Int64 get_LastUpdateTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GET_LASTUPDATETIME_OFFSET))(this);
		}

		::System::Void set_LastUpdateTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_SET_LASTUPDATETIME_OFFSET))(this, a1);
		}

		::System::Void UpdatePersonalCurProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATEPERSONALCURPROGRESS_OFFSET))(this, a1);
		}

		::System::Void UpdateWorldCurProgress(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATEWORLDCURPROGRESS_OFFSET))(this, a1);
		}

		::System::Void UpdateDisplayPercentage(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATEDISPLAYPERCENTAGE_OFFSET))(this, a1);
		}

		::System::Boolean IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_ISEXPIRED_OFFSET))(this);
		}

		::System::Void UpdateLastUpdateTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_UPDATELASTUPDATETIME_OFFSET))(this, a1);
		}

		::System::Void PublishUpdateEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_PUBLISHUPDATEEVENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionFightEntranceData*>* GetFightEntranceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionFightEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONWORLDACTIVITY_GETFIGHTENTRANCELIST_OFFSET))(this);
		}
	};
}
