#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeInstance_NodeState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirNodeData; }

#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_GET_INDEXINAREA_OFFSET UNITYSDK_OFFSET(0xC3E1470)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_GET_NODEDATA_OFFSET UNITYSDK_OFFSET(0xC3E1310)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_GET_NODEID_OFFSET UNITYSDK_OFFSET(0xC3E12F0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0xC3E1350)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC3E1330)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_MARKASFINISHED_OFFSET UNITYSDK_OFFSET(0xC3E1590)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_MARKASPROCESSING_OFFSET UNITYSDK_OFFSET(0xC3E15E0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_SETSTATE_OFFSET UNITYSDK_OFFSET(0xC3E1540)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_SET_INDEXINAREA_OFFSET UNITYSDK_OFFSET(0xC3E1480)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_SET_NODEDATA_OFFSET UNITYSDK_OFFSET(0xC3E1320)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_SET_NODEID_OFFSET UNITYSDK_OFFSET(0xC3E1300)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_SET_STATE_OFFSET UNITYSDK_OFFSET(0xC3E1340)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xC3E1490)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xC3E1530)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirNodeInstance_TypeDefinitionIndex = 73669;

	class PixAirNodeInstance : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirNodeData* _NodeData_k__BackingField; // 0x10
		::System::Int32 _IndexInArea_k__BackingField; // 0x18
		::System::UInt32 _NodeID_k__BackingField; // 0x1C
		::RPG::Client::PixAir::PixAirNodeInstance_NodeState _State_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_NodeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_GET_NODEID_OFFSET))(this);
		}

		::System::Void set_NodeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_SET_NODEID_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirNodeData* get_NodeData()
		{
			return ((::RPG::Client::PixAir::PixAirNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_GET_NODEDATA_OFFSET))(this);
		}

		::System::Void set_NodeData(::RPG::Client::PixAir::PixAirNodeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirNodeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_SET_NODEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirNodeInstance_NodeState get_State()
		{
			return ((::RPG::Client::PixAir::PixAirNodeInstance_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::PixAir::PixAirNodeInstance_NodeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirNodeInstance_NodeState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_NodeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_GET_NODENAME_OFFSET))(this);
		}

		::System::Int32 get_IndexInArea()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_GET_INDEXINAREA_OFFSET))(this);
		}

		::System::Void set_IndexInArea(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_SET_INDEXINAREA_OFFSET))(this, a1);
		}

		static ::RPG::Client::PixAir::PixAirNodeInstance* TryCreate(::System::UInt32 a1, ::RPG::Client::PixAir::PixAirNodeData* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::PixAir::PixAirNodeInstance*(*)(::System::UInt32, ::RPG::Client::PixAir::PixAirNodeData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_TRYCREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void SetState(::RPG::Client::PixAir::PixAirNodeInstance_NodeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirNodeInstance_NodeState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_SETSTATE_OFFSET))(this, a1);
		}

		::System::Void MarkAsFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_MARKASFINISHED_OFFSET))(this);
		}

		::System::Void MarkAsProcessing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINSTANCE_MARKASPROCESSING_OFFSET))(this);
		}
	};
}
