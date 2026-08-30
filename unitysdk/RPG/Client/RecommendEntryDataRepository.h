#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RecommendEntryData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY_GETALL_OFFSET UNITYSDK_OFFSET(0xDE14280)
#define RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY_GETBYID_OFFSET UNITYSDK_OFFSET(0xDE142C0)
#define RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY__CTOR_OFFSET UNITYSDK_OFFSET(0xDE13FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RecommendEntryDataRepository_TypeDefinitionIndex = 66806;

	class RecommendEntryDataRepository : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RecommendEntryData*>* _EntryDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RecommendEntryData*>* GetAll()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RecommendEntryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY_GETALL_OFFSET))(this);
		}

		::RPG::Client::RecommendEntryData* GetByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::RecommendEntryData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATAREPOSITORY_GETBYID_OFFSET))(this, a1);
		}
	};
}
