#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTechTreeRowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9B3A530)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW_GET_NODES_OFFSET UNITYSDK_OFFSET(0x9B3A750)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9B3A730)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW_SET_NODES_OFFSET UNITYSDK_OFFSET(0x9B3A760)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9B3A740)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x9B39890)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTechTreeRow_TypeDefinitionIndex = 69459;

	class IdleLiveBaseTechTreeRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* _Nodes_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRowType _Type_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW_GET_ISACTIVE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRowType get_Type()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRowType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW_SET_TYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* get_Nodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW_GET_NODES_OFFSET))(this);
		}

		::System::Void set_Nodes(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW_SET_NODES_OFFSET))(this, value);
		}
	};
}
