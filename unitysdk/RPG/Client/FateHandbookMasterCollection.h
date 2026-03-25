#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateHandbookMasterItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x968E8B0)
#define RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION_GET_MASTERITEMLIST_OFFSET UNITYSDK_OFFSET(0x968EE50)
#define RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x968EBC0)
#define RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION__GENERATEMASTERHANDBOOKLIST_OFFSET UNITYSDK_OFFSET(0x968EBD0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHandbookMasterCollection_TypeDefinitionIndex = 51990;

	class FateHandbookMasterCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateHandbookMasterItem*>* _MasterItemList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void _GenerateMasterHandbookList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION__GENERATEMASTERHANDBOOKLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHandbookMasterItem*>* get_MasterItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHandbookMasterItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION_GET_MASTERITEMLIST_OFFSET))(this);
		}
	};
}
