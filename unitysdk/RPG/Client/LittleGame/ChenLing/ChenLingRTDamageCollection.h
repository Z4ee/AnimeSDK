#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::ChenLing { class ChenLingRTDamageData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_GET_DATALIST_OFFSET UNITYSDK_OFFSET(0x1AC1CA00)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_REORDER_OFFSET UNITYSDK_OFFSET(0x1AC1CCA0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_SET_DATALIST_OFFSET UNITYSDK_OFFSET(0x1AC1CA10)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_SYNC_OFFSET UNITYSDK_OFFSET(0x1AC1CB40)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC1CF10)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION__FINDWITHID_OFFSET UNITYSDK_OFFSET(0x1AC1CA20)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION__ISNEEDREORDER_OFFSET UNITYSDK_OFFSET(0x1AC1CE20)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingRTDamageCollection_TypeDefinitionIndex = 77359;

	class ChenLingRTDamageCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*>* _DataList_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*>* get_DataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_GET_DATALIST_OFFSET))(this);
		}

		::System::Void set_DataList(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_SET_DATALIST_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData* _FindWithID(::System::UInt32 a1)
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION__FINDWITHID_OFFSET))(this, a1);
		}

		::System::Void Sync(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_SYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_REORDER_OFFSET))(this);
		}

		::System::Boolean _IsNeedReorder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION__ISNEEDREORDER_OFFSET))(this);
		}
	};
}
