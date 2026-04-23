#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateHandbookBuffItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHANDBOOKBUFFCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA34C2D0)
#define RPG_CLIENT_FATEHANDBOOKBUFFCOLLECTION_GET_BUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0xA34C5D0)
#define RPG_CLIENT_FATEHANDBOOKBUFFCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA34C2C0)
#define RPG_CLIENT_FATEHANDBOOKBUFFCOLLECTION__GENERATEBUFFHANDBOOKLIST_OFFSET UNITYSDK_OFFSET(0xA34C340)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHandbookBuffCollection_TypeDefinitionIndex = 58934;

	class FateHandbookBuffCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateHandbookBuffItem*>* _BuffItemList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void _GenerateBuffHandbookList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFCOLLECTION__GENERATEBUFFHANDBOOKLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHandbookBuffItem*>* get_BuffItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHandbookBuffItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFCOLLECTION_GET_BUFFITEMLIST_OFFSET))(this);
		}
	};
}
