#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightMergeEquipEvent_EquipData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMERGEEQUIPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD1FE710)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMergeEquipEvent_TypeDefinitionIndex = 65014;

	class GridFightMergeEquipEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemData* RemovedItemData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightMergeEquipEvent_EquipData*>* RemoveEquips; // 0x18
		::System::UInt32 AddEquipUID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMERGEEQUIPEVENT__CTOR_OFFSET))(this);
		}
	};
}
