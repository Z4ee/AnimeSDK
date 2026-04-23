#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F1C17591C617CCBE;
namespace RPG::Client { class PhoneCaseData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PHONECASEDATAMANAGER_ADDUNLOCKED_OFFSET UNITYSDK_OFFSET(0xAC5A3F0)
#define RPG_CLIENT_PHONECASEDATAMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0xAC5E990)
#define RPG_CLIENT_PHONECASEDATAMANAGER_GETCURRENTEQUIPPEDPHONECASEDATA_OFFSET UNITYSDK_OFFSET(0xAC5AED0)
#define RPG_CLIENT_PHONECASEDATAMANAGER_GETDISPLAYPHONECASELIST_OFFSET UNITYSDK_OFFSET(0xAC5EA10)
#define RPG_CLIENT_PHONECASEDATAMANAGER_GETPHONECASEDATA_OFFSET UNITYSDK_OFFSET(0xAC5EDE0)
#define RPG_CLIENT_PHONECASEDATAMANAGER_GET_CURRENTID_OFFSET UNITYSDK_OFFSET(0xAC5E670)
#define RPG_CLIENT_PHONECASEDATAMANAGER_GET_UNLOCKEDIDS_OFFSET UNITYSDK_OFFSET(0xAC5EE30)
#define RPG_CLIENT_PHONECASEDATAMANAGER_GET__DEFAULTID_OFFSET UNITYSDK_OFFSET(0xAC5ED00)
#define RPG_CLIENT_PHONECASEDATAMANAGER_ISDEFAULTID_OFFSET UNITYSDK_OFFSET(0xAC5ECA0)
#define RPG_CLIENT_PHONECASEDATAMANAGER_ISPHONECASEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xAC5E0F0)
#define RPG_CLIENT_PHONECASEDATAMANAGER_REGISTERPHONECASECHANGELISTENER_OFFSET UNITYSDK_OFFSET(0xAC5EE50)
#define RPG_CLIENT_PHONECASEDATAMANAGER_REMOVEPHONECASECHANGELISTENER_OFFSET UNITYSDK_OFFSET(0xAC5EF00)
#define RPG_CLIENT_PHONECASEDATAMANAGER_SETCURRENTEQUIPPEDID_OFFSET UNITYSDK_OFFSET(0xAC5A1E0)
#define RPG_CLIENT_PHONECASEDATAMANAGER_SET_UNLOCKEDIDS_OFFSET UNITYSDK_OFFSET(0xAC5EE40)
#define RPG_CLIENT_PHONECASEDATAMANAGER_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xAC59E10)
#define RPG_CLIENT_PHONECASEDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC5ABA0)
#define RPG_CLIENT_PHONECASEDATAMANAGER__TRIGGERCREATEPHONETASKRESET_OFFSET UNITYSDK_OFFSET(0xAC5E870)

namespace RPG::Client
{
	inline static constexpr unsigned int PhoneCaseDataManager_TypeDefinitionIndex = 61208;

	class PhoneCaseDataManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedIDs_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_3_F1C17591C617CCBE*>* _CreatePhoneRegisterTasks; // 0x18
		::System::UInt32 _CurrentID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void SyncUnlocked(::System::Collections::Generic::IList_1<::System::UInt32>* unlockedIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_SYNCUNLOCKED_OFFSET))(this, unlockedIDs);
		}

		::System::Void AddUnlocked(::System::UInt32 unlockedID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_ADDUNLOCKED_OFFSET))(this, unlockedID);
		}

		::System::Void SetCurrentEquippedID(::System::UInt32 caseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_SETCURRENTEQUIPPEDID_OFFSET))(this, caseID);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Boolean IsPhoneCaseUnlocked(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_ISPHONECASEUNLOCKED_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PhoneCaseData*>* GetDisplayPhoneCaseList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PhoneCaseData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_GETDISPLAYPHONECASELIST_OFFSET))(this);
		}

		::System::Boolean IsDefaultID(::System::UInt32 ID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_ISDEFAULTID_OFFSET))(this, ID);
		}

		::RPG::Client::PhoneCaseData* GetPhoneCaseData(::System::UInt32 id)
		{
			return ((::RPG::Client::PhoneCaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_GETPHONECASEDATA_OFFSET))(this, id);
		}

		::RPG::Client::PhoneCaseData* GetCurrentEquippedPhoneCaseData()
		{
			return ((::RPG::Client::PhoneCaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_GETCURRENTEQUIPPEDPHONECASEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_GET_UNLOCKEDIDS_OFFSET))(this);
		}

		::System::Void set_UnlockedIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_SET_UNLOCKEDIDS_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_GET_CURRENTID_OFFSET))(this);
		}

		::System::Void RegisterPhoneCaseChangeListener(::RPG::GameCore::GameEntity* entity, ::Class_3_F1C17591C617CCBE* createPhoneTask)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_3_F1C17591C617CCBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_REGISTERPHONECASECHANGELISTENER_OFFSET))(this, entity, createPhoneTask);
		}

		::System::Void RemovePhoneCaseChangeListener(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_REMOVEPHONECASECHANGELISTENER_OFFSET))(this, entity);
		}

		::System::Void _TriggerCreatePhoneTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER__TRIGGERCREATEPHONETASKRESET_OFFSET))(this);
		}

		::System::UInt32 get__DefaultID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_GET__DEFAULTID_OFFSET))(this);
		}
	};
}
