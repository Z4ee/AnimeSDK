#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ActivityQuestTimeLimitModuleData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_CHECKHASFINISHQUESTBYACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9C54700)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_CHECKISALLQUESTAWARDGOTBYACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9C54910)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C54570)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_GETACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x9C54640)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_GETGOTOWORLDID_OFFSET UNITYSDK_OFFSET(0x9C54C10)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9C540E0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_TRYTRACKQUESTMONSTER_OFFSET UNITYSDK_OFFSET(0x9C54B30)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C55050)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE__ONQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0x9C54C90)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C551C0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9C55130)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityQuestTimeLimitModule_TypeDefinitionIndex = 57096;

	class ActivityQuestTimeLimitModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityQuestTimeLimitModuleData*>* _DataDict; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _AllQuestTimeLimitGroupID; // 0x18
		::System::UInt32 _TrackMonsterQuestID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ActivityQuestTimeLimitModuleData* GetActivityData(::System::UInt32 activityID)
		{
			return ((::RPG::Client::ActivityQuestTimeLimitModuleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_GETACTIVITYDATA_OFFSET))(this, activityID);
		}

		::System::Boolean CheckHasFinishQuestByActivityID(::System::UInt32 activityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_CHECKHASFINISHQUESTBYACTIVITYID_OFFSET))(this, activityID);
		}

		::System::Boolean CheckIsAllQuestAwardGotByActivityID(::System::UInt32 activityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_CHECKISALLQUESTAWARDGOTBYACTIVITYID_OFFSET))(this, activityID);
		}

		::System::Void TryTrackQuestMonster(::System::UInt32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_TRYTRACKQUESTMONSTER_OFFSET))(this, questID);
		}

		::System::UInt32 GetGotoWorldID(::System::UInt32 questID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE_GETGOTOWORLDID_OFFSET))(this, questID);
		}

		::System::Void _OnQuestUpdated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE__ONQUESTUPDATED_OFFSET))(this, arg);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
