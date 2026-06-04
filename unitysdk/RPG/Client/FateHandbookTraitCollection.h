#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateHandbookTraitItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHANDBOOKTRAITCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB99F8E0)
#define RPG_CLIENT_FATEHANDBOOKTRAITCOLLECTION_GET_TRAITITEMLIST_OFFSET UNITYSDK_OFFSET(0xB9A2A30)
#define RPG_CLIENT_FATEHANDBOOKTRAITCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB99FBB0)
#define RPG_CLIENT_FATEHANDBOOKTRAITCOLLECTION__GENERATETRAITHANDBOOKLIST_OFFSET UNITYSDK_OFFSET(0xB9A26C0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHandbookTraitCollection_TypeDefinitionIndex = 59873;

	class FateHandbookTraitCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateHandbookTraitItem*>* _TraitItemList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void _GenerateTraitHandbookList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITCOLLECTION__GENERATETRAITHANDBOOKLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHandbookTraitItem*>* get_TraitItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHandbookTraitItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITCOLLECTION_GET_TRAITITEMLIST_OFFSET))(this);
		}
	};
}
