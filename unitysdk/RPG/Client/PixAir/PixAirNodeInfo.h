#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirNodeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRNODEINFO_CONTAINS_OFFSET UNITYSDK_OFFSET(0xDB19FD0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINFO_GETALLNODEDATA_OFFSET UNITYSDK_OFFSET(0xDB1A060)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINFO_GETNODEDATA_OFFSET UNITYSDK_OFFSET(0xDB19E50)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINFO_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xDB19E00)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xDB17DF0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINFO_TRYGETNODEDATA_OFFSET UNITYSDK_OFFSET(0xDB19F00)
#define RPG_CLIENT_PIXAIR_PIXAIRNODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDB17DE0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirNodeInfo_TypeDefinitionIndex = 78882;

	class PixAirNodeInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PixAir::PixAirNodeData*>* _nodeDataMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINFO_GET_COUNT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeData* GetNodeData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirNodeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINFO_GETNODEDATA_OFFSET))(this, a1);
		}

		::System::Boolean TryGetNodeData(::System::UInt32 a1, ::RPG::Client::PixAir::PixAirNodeData*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::PixAir::PixAirNodeData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINFO_TRYGETNODEDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean Contains(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINFO_CONTAINS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::PixAir::PixAirNodeData*>* GetAllNodeData()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::PixAir::PixAirNodeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINFO_GETALLNODEDATA_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODEINFO_INIT_OFFSET))(this);
		}
	};
}
