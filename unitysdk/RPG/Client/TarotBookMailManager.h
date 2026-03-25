#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8929A01BA468516C;
namespace RPG::Client { class TarotMailData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTBOOKMAILMANAGER_EXISTINGNEWMAIL_OFFSET UNITYSDK_OFFSET(0xA5503B0)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_GETALLDATA_OFFSET UNITYSDK_OFFSET(0xA54FEB0)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_GET_ISFIRSTTIME_OFFSET UNITYSDK_OFFSET(0xA54FC70)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA54FD20)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_MARKFIRSTTIMESEEN_OFFSET UNITYSDK_OFFSET(0xA550550)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_MARKSEENANDGETALLDATA_OFFSET UNITYSDK_OFFSET(0xA5500A0)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xA54FDA0)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA54FD30)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA54FD40)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER__INITDATA_OFFSET UNITYSDK_OFFSET(0xA550650)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookMailManager_TypeDefinitionIndex = 55538;

	class TarotBookMailManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_8929A01BA468516C*>* _GroupList; // 0x10
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

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER_SET_ISUNLOCKED_OFFSET))(this, value);
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
