#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirNodeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PixAirNodeRow; }

#define RPG_CLIENT_PIXAIR_PIXAIRNODEDATA_GET_NODEID_OFFSET UNITYSDK_OFFSET(0xDB19CE0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEDATA_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0xDB05950)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xDB19D00)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEDATA_SET_NODEID_OFFSET UNITYSDK_OFFSET(0xDB19CF0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xDB19D60)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDB19DF0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirNodeData_TypeDefinitionIndex = 78881;

	class PixAirNodeData : public ::System::Object
	{
	public:
		::System::UInt32 _NodeID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_NodeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEDATA_GET_NODEID_OFFSET))(this);
		}

		::System::Void set_NodeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEDATA_SET_NODEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::PixAirNodeRow* get__Row()
		{
			return ((::RPG::GameCore::PixAirNodeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::PixAirNodeType get_NodeType()
		{
			return ((::RPG::GameCore::PixAirNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEDATA_GET_NODETYPE_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirNodeData* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirNodeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEDATA_TRYCREATE_OFFSET))(a1);
		}
	};
}
