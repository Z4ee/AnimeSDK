#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirAreaData; }
namespace RPG::Client::PixAir { class PixAirNodeInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GETNODEINSTANCEBYINDEX_OFFSET UNITYSDK_OFFSET(0x1C82C570)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GETNODEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C82C470)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0x1C82BEB0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1C82BE90)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GET_CURRENTNODEINDEX_OFFSET UNITYSDK_OFFSET(0x1C82BEF0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GET_CURRENTNODE_OFFSET UNITYSDK_OFFSET(0x1C82BF60)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GET_NODECOUNT_OFFSET UNITYSDK_OFFSET(0x1C82BF10)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GET_NODEINSTANCES_OFFSET UNITYSDK_OFFSET(0x1C82BED0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_SET_AREADATA_OFFSET UNITYSDK_OFFSET(0x1C82BEC0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x1C82BEA0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_SET_CURRENTNODEINDEX_OFFSET UNITYSDK_OFFSET(0x1C82BF00)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_SET_NODEINSTANCES_OFFSET UNITYSDK_OFFSET(0x1C82BEE0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_SYNCNODESTATE_OFFSET UNITYSDK_OFFSET(0x1C82C2D0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1C82BFE0)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE__CREATENODEINSTANCES_OFFSET UNITYSDK_OFFSET(0x1C82C090)
#define RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C82C080)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirAreaInstance_TypeDefinitionIndex = 78829;

	class PixAirAreaInstance : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirNodeInstance*>* _NodeInstances_k__BackingField; // 0x10
		::RPG::Client::PixAir::PixAirAreaData* _AreaData_k__BackingField; // 0x18
		::System::Int32 _CurrentNodeIndex_k__BackingField; // 0x20
		::System::UInt32 _AreaID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_SET_AREAID_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirAreaData* get_AreaData()
		{
			return ((::RPG::Client::PixAir::PixAirAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GET_AREADATA_OFFSET))(this);
		}

		::System::Void set_AreaData(::RPG::Client::PixAir::PixAirAreaData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_SET_AREADATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirNodeInstance*>* get_NodeInstances()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirNodeInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GET_NODEINSTANCES_OFFSET))(this);
		}

		::System::Void set_NodeInstances(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirNodeInstance*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirNodeInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_SET_NODEINSTANCES_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentNodeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GET_CURRENTNODEINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentNodeIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_SET_CURRENTNODEINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_NodeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GET_NODECOUNT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeInstance* get_CurrentNode()
		{
			return ((::RPG::Client::PixAir::PixAirNodeInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GET_CURRENTNODE_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirAreaInstance* TryCreate(::System::UInt32 a1, ::RPG::Client::PixAir::PixAirAreaData* a2)
		{
			return ((::RPG::Client::PixAir::PixAirAreaInstance*(*)(::System::UInt32, ::RPG::Client::PixAir::PixAirAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_TRYCREATE_OFFSET))(a1, a2);
		}

		::System::Void _CreateNodeInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE__CREATENODEINSTANCES_OFFSET))(this);
		}

		::System::Void SyncNodeState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_SYNCNODESTATE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirNodeInstance* GetNodeInstance(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirNodeInstance*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GETNODEINSTANCE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirNodeInstance* GetNodeInstanceByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirNodeInstance*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRAREAINSTANCE_GETNODEINSTANCEBYINDEX_OFFSET))(this, a1);
		}
	};
}
