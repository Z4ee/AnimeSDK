#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PersonalizeCardData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GETCURRENTEQUIPPEDCARDDATA_OFFSET UNITYSDK_OFFSET(0xAC58AC0)
#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GETPERSONALIZECARDDATALIST_OFFSET UNITYSDK_OFFSET(0xAC585D0)
#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GETPERSONALIZECARDDATA_OFFSET UNITYSDK_OFFSET(0xAC58A30)
#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GET_EQUIPPEDCARDID_OFFSET UNITYSDK_OFFSET(0xAC58B80)
#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GET__DEFAULTEQUIPPEDCARDID_OFFSET UNITYSDK_OFFSET(0xAC58C90)
#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER_ISDEFAULTCARDID_OFFSET UNITYSDK_OFFSET(0xAC58C30)
#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC58DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PersonalizeCardDataManager_TypeDefinitionIndex = 61202;

	class PersonalizeCardDataManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PersonalizeCardData*>* GetPersonalizeCardDataList(::System::Boolean fetchAll)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PersonalizeCardData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GETPERSONALIZECARDDATALIST_OFFSET))(this, fetchAll);
		}

		::RPG::Client::PersonalizeCardData* GetPersonalizeCardData(::System::UInt32 cardID)
		{
			return ((::RPG::Client::PersonalizeCardData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GETPERSONALIZECARDDATA_OFFSET))(this, cardID);
		}

		::RPG::Client::PersonalizeCardData* GetCurrentEquippedCardData()
		{
			return ((::RPG::Client::PersonalizeCardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GETCURRENTEQUIPPEDCARDDATA_OFFSET))(this);
		}

		::System::Boolean IsDefaultCardID(::System::UInt32 ID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATAMANAGER_ISDEFAULTCARDID_OFFSET))(this, ID);
		}

		::System::UInt32 get__DefaultEquippedCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GET__DEFAULTEQUIPPEDCARDID_OFFSET))(this);
		}

		::System::UInt32 get_EquippedCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GET_EQUIPPEDCARDID_OFFSET))(this);
		}
	};
}
