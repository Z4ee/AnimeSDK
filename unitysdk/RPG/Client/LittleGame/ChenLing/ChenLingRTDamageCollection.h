#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::ChenLing { class ChenLingRTDamageData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_GET_DATALIST_OFFSET UNITYSDK_OFFSET(0xA683C90)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_REORDER_OFFSET UNITYSDK_OFFSET(0xA683F10)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_SET_DATALIST_OFFSET UNITYSDK_OFFSET(0xA683CA0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_SYNC_OFFSET UNITYSDK_OFFSET(0xA683E00)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA684160)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION__FINDWITHID_OFFSET UNITYSDK_OFFSET(0xA683CB0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION__ISNEEDREORDER_OFFSET UNITYSDK_OFFSET(0xA684060)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingRTDamageCollection_TypeDefinitionIndex = 71328;

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

		::System::Void set_DataList(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_SET_DATALIST_OFFSET))(this, value);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData* _FindWithID(::System::UInt32 soldierID)
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION__FINDWITHID_OFFSET))(this, soldierID);
		}

		::System::Void Sync(::System::UInt32 soldierID, ::System::Single damage, ::System::Single maxDamage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION_SYNC_OFFSET))(this, soldierID, damage, maxDamage);
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
