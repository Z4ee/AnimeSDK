#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PersonalizeCardData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GETCURRENTEQUIPPEDCARDDATA_OFFSET UNITYSDK_OFFSET(0xDA5FEA0)
#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GETPERSONALIZECARDDATALIST_OFFSET UNITYSDK_OFFSET(0xDA5F8F0)
#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GETPERSONALIZECARDDATA_OFFSET UNITYSDK_OFFSET(0xDA5FE10)
#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GET_EQUIPPEDCARDID_OFFSET UNITYSDK_OFFSET(0xDA5FF60)
#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GET__DEFAULTEQUIPPEDCARDID_OFFSET UNITYSDK_OFFSET(0xDA60090)
#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER_ISDEFAULTCARDID_OFFSET UNITYSDK_OFFSET(0xDA60030)
#define RPG_CLIENT_PERSONALIZECARDDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xDA601A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PersonalizeCardDataManager_TypeDefinitionIndex = 66477;

	class PersonalizeCardDataManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PersonalizeCardData*>* GetPersonalizeCardDataList(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PersonalizeCardData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GETPERSONALIZECARDDATALIST_OFFSET))(this, a1);
		}

		::RPG::Client::PersonalizeCardData* GetPersonalizeCardData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PersonalizeCardData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GETPERSONALIZECARDDATA_OFFSET))(this, a1);
		}

		::RPG::Client::PersonalizeCardData* GetCurrentEquippedCardData()
		{
			return ((::RPG::Client::PersonalizeCardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATAMANAGER_GETCURRENTEQUIPPEDCARDDATA_OFFSET))(this);
		}

		::System::Boolean IsDefaultCardID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSONALIZECARDDATAMANAGER_ISDEFAULTCARDID_OFFSET))(this, a1);
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
