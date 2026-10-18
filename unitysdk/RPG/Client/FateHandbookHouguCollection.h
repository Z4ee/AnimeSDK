#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateHandbookHouguItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHANDBOOKHOUGUCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE95290)
#define RPG_CLIENT_FATEHANDBOOKHOUGUCOLLECTION_GET_HOUGUITEMLIST_OFFSET UNITYSDK_OFFSET(0xCE95680)
#define RPG_CLIENT_FATEHANDBOOKHOUGUCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xCE95280)
#define RPG_CLIENT_FATEHANDBOOKHOUGUCOLLECTION__GENERATEHOUGUHANDBOOKLIST_OFFSET UNITYSDK_OFFSET(0xCE95320)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHandbookHouguCollection_TypeDefinitionIndex = 64070;

	class FateHandbookHouguCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateHandbookHouguItem*>* _HouguItemList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void _GenerateHouguHandbookList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUCOLLECTION__GENERATEHOUGUHANDBOOKLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHandbookHouguItem*>* get_HouguItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHandbookHouguItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKHOUGUCOLLECTION_GET_HOUGUITEMLIST_OFFSET))(this);
		}
	};
}
