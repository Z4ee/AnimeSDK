#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderItemViewModel; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_E64C5E78139B800A_ADD_ONORDERNAVIGATEREQUESTED_OFFSET UNITYSDK_OFFSET(0x157CF550)
#define CLASS_1_E64C5E78139B800A_ADD_ONORDERSELECTREQUESTED_OFFSET UNITYSDK_OFFSET(0x157CF450)
#define CLASS_1_E64C5E78139B800A_GET_ORDERS_OFFSET UNITYSDK_OFFSET(0x157CF430)
#define CLASS_1_E64C5E78139B800A_METHOD_1_9DA77DF78C6CD05D_1_OFFSET UNITYSDK_OFFSET(0x157CF6C0)
#define CLASS_1_E64C5E78139B800A_METHOD_1_9DA77DF78C6CD05D_OFFSET UNITYSDK_OFFSET(0x157CF650)
#define CLASS_1_E64C5E78139B800A_REMOVE_ONORDERNAVIGATEREQUESTED_OFFSET UNITYSDK_OFFSET(0x157CF5D0)
#define CLASS_1_E64C5E78139B800A_REMOVE_ONORDERSELECTREQUESTED_OFFSET UNITYSDK_OFFSET(0x157CF4D0)
#define CLASS_1_E64C5E78139B800A_SET_ORDERS_OFFSET UNITYSDK_OFFSET(0x157CF440)
#define CLASS_1_E64C5E78139B800A__CTOR_OFFSET UNITYSDK_OFFSET(0x157CF730)

inline static constexpr unsigned int Class_1_E64C5E78139B800A_TypeDefinitionIndex = 79676;

class Class_1_E64C5E78139B800A : public ::System::Object
{
public:
	::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* OnOrderNavigateRequested; // 0x10
	::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* OnOrderSelectRequested; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* _Orders_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E64C5E78139B800A__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* get_Orders()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E64C5E78139B800A_GET_ORDERS_OFFSET))(this);
	}

	::System::Void set_Orders(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_E64C5E78139B800A_SET_ORDERS_OFFSET))(this, a1);
	}

	::System::Void add_OnOrderSelectRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_E64C5E78139B800A_ADD_ONORDERSELECTREQUESTED_OFFSET))(this, a1);
	}

	::System::Void remove_OnOrderSelectRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_E64C5E78139B800A_REMOVE_ONORDERSELECTREQUESTED_OFFSET))(this, a1);
	}

	::System::Void add_OnOrderNavigateRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_E64C5E78139B800A_ADD_ONORDERNAVIGATEREQUESTED_OFFSET))(this, a1);
	}

	::System::Void remove_OnOrderNavigateRequested(::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_E64C5E78139B800A_REMOVE_ONORDERNAVIGATEREQUESTED_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DA77DF78C6CD05D(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_E64C5E78139B800A_METHOD_1_9DA77DF78C6CD05D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DA77DF78C6CD05D_1(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_E64C5E78139B800A_METHOD_1_9DA77DF78C6CD05D_1_OFFSET))(this, a1);
	}
};
