#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F94EC6009C0C621;
namespace RPG::Client { class TarotMailData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTBOOKMAILMANAGER_EXISTINGNEWMAIL_OFFSET UNITYSDK_OFFSET(0xC9DB500)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_GETALLDATA_OFFSET UNITYSDK_OFFSET(0xC9DAFA0)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_GET_ISFIRSTTIME_OFFSET UNITYSDK_OFFSET(0xC9DAD60)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC9DAE10)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_MARKFIRSTTIMESEEN_OFFSET UNITYSDK_OFFSET(0xC9DB6A0)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_MARKSEENANDGETALLDATA_OFFSET UNITYSDK_OFFSET(0xC9DB1A0)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xC9DAE90)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC9DAE20)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC9DAE30)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER__INITDATA_OFFSET UNITYSDK_OFFSET(0xC9DB7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookMailManager_TypeDefinitionIndex = 63665;

	class TarotBookMailManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_5F94EC6009C0C621*>* _GroupList; // 0x10
		::System::Boolean _IsUnlocked_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFirstTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER_GET_ISFIRSTTIME_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotMailData*>* GetAllData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotMailData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER_GETALLDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotMailData*>* MarkSeenAndGetAllData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotMailData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER_MARKSEENANDGETALLDATA_OFFSET))(this);
		}

		::System::Boolean ExistingNewMail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER_EXISTINGNEWMAIL_OFFSET))(this);
		}

		::System::Void MarkFirstTimeSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER_MARKFIRSTTIMESEEN_OFFSET))(this);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER_REFRESHDATA_OFFSET))(this);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER__INITDATA_OFFSET))(this);
		}
	};
}
