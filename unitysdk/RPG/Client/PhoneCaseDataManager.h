#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_2B69C8568E662913;
namespace RPG::Client { class PhoneCaseData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PHONECASEDATAMANAGER_ADDUNLOCKED_OFFSET UNITYSDK_OFFSET(0x17F4AAD0)
#define RPG_CLIENT_PHONECASEDATAMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F4F2E0)
#define RPG_CLIENT_PHONECASEDATAMANAGER_GETCURRENTEQUIPPEDPHONECASEDATA_OFFSET UNITYSDK_OFFSET(0x17F4B690)
#define RPG_CLIENT_PHONECASEDATAMANAGER_GETDISPLAYPHONECASELIST_OFFSET UNITYSDK_OFFSET(0x17F4F340)
#define RPG_CLIENT_PHONECASEDATAMANAGER_GETPHONECASEDATA_OFFSET UNITYSDK_OFFSET(0x17F4F7D0)
#define RPG_CLIENT_PHONECASEDATAMANAGER_GET_CURRENTID_OFFSET UNITYSDK_OFFSET(0x17F4F110)
#define RPG_CLIENT_PHONECASEDATAMANAGER_GET_UNLOCKEDIDS_OFFSET UNITYSDK_OFFSET(0x17F4F820)
#define RPG_CLIENT_PHONECASEDATAMANAGER_GET__DEFAULTID_OFFSET UNITYSDK_OFFSET(0x17F4F6F0)
#define RPG_CLIENT_PHONECASEDATAMANAGER_ISDEFAULTID_OFFSET UNITYSDK_OFFSET(0x17F4F690)
#define RPG_CLIENT_PHONECASEDATAMANAGER_ISPHONECASEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x17F4EB30)
#define RPG_CLIENT_PHONECASEDATAMANAGER_REGISTERPHONECASECHANGELISTENER_OFFSET UNITYSDK_OFFSET(0x17F4F840)
#define RPG_CLIENT_PHONECASEDATAMANAGER_REMOVEPHONECASECHANGELISTENER_OFFSET UNITYSDK_OFFSET(0x17F4F8F0)
#define RPG_CLIENT_PHONECASEDATAMANAGER_SETCURRENTEQUIPPEDID_OFFSET UNITYSDK_OFFSET(0x17F4A8C0)
#define RPG_CLIENT_PHONECASEDATAMANAGER_SET_UNLOCKEDIDS_OFFSET UNITYSDK_OFFSET(0x17F4F830)
#define RPG_CLIENT_PHONECASEDATAMANAGER_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0x17F4A2B0)
#define RPG_CLIENT_PHONECASEDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F4B410)
#define RPG_CLIENT_PHONECASEDATAMANAGER__TRIGGERCREATEPHONETASKRESET_OFFSET UNITYSDK_OFFSET(0x17F4F1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhoneCaseDataManager_TypeDefinitionIndex = 63498;

	class PhoneCaseDataManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_3_2B69C8568E662913*>* _CreatePhoneRegisterTasks; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedIDs_k__BackingField; // 0x18
		::System::UInt32 _CurrentID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void SyncUnlocked(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_SYNCUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void AddUnlocked(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_ADDUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void SetCurrentEquippedID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_SETCURRENTEQUIPPEDID_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Boolean IsPhoneCaseUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_ISPHONECASEUNLOCKED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PhoneCaseData*>* GetDisplayPhoneCaseList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PhoneCaseData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_GETDISPLAYPHONECASELIST_OFFSET))(this);
		}

		::System::Boolean IsDefaultID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_ISDEFAULTID_OFFSET))(this, a1);
		}

		::RPG::Client::PhoneCaseData* GetPhoneCaseData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PhoneCaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_GETPHONECASEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::PhoneCaseData* GetCurrentEquippedPhoneCaseData()
		{
			return ((::RPG::Client::PhoneCaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_GETCURRENTEQUIPPEDPHONECASEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_GET_UNLOCKEDIDS_OFFSET))(this);
		}

		::System::Void set_UnlockedIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_SET_UNLOCKEDIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_GET_CURRENTID_OFFSET))(this);
		}

		::System::Void RegisterPhoneCaseChangeListener(::RPG::GameCore::GameEntity* a1, ::Class_3_2B69C8568E662913* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_3_2B69C8568E662913*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_REGISTERPHONECASECHANGELISTENER_OFFSET))(this, a1, a2);
		}

		::System::Void RemovePhoneCaseChangeListener(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATAMANAGER_REMOVEPHONECASECHANGELISTENER_OFFSET))(this, a1);
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
