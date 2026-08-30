#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateHandbookReijuItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHANDBOOKREIJUCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF4F400)
#define RPG_CLIENT_FATEHANDBOOKREIJUCOLLECTION_GET_REIJUGETDAYINDEXLIST_OFFSET UNITYSDK_OFFSET(0xCF51580)
#define RPG_CLIENT_FATEHANDBOOKREIJUCOLLECTION_GET_REIJUITEMLIST_OFFSET UNITYSDK_OFFSET(0xCF51520)
#define RPG_CLIENT_FATEHANDBOOKREIJUCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xCF4F6D0)
#define RPG_CLIENT_FATEHANDBOOKREIJUCOLLECTION__GENERATEREIJUGETDAYINDEXLIST_OFFSET UNITYSDK_OFFSET(0xCF51290)
#define RPG_CLIENT_FATEHANDBOOKREIJUCOLLECTION__GENERATEREIJUHANDBOOKLIST_OFFSET UNITYSDK_OFFSET(0xCF50F20)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHandbookReijuCollection_TypeDefinitionIndex = 64137;

	class FateHandbookReijuCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ReijuGetDayIndexList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FateHandbookReijuItem*>* _ReijuItemList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void _GenerateReijuHandbookList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUCOLLECTION__GENERATEREIJUHANDBOOKLIST_OFFSET))(this);
		}

		::System::Void _GenerateReijuGetDayIndexList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUCOLLECTION__GENERATEREIJUGETDAYINDEXLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHandbookReijuItem*>* get_ReijuItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHandbookReijuItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUCOLLECTION_GET_REIJUITEMLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ReijuGetDayIndexList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKREIJUCOLLECTION_GET_REIJUGETDAYINDEXLIST_OFFSET))(this);
		}
	};
}
