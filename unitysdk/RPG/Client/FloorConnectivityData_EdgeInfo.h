#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FloorConnectivityData_EdgeConnectionInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGEINFO_GETFIRSTORDEFAULTCONNECTION_OFFSET UNITYSDK_OFFSET(0xA3C38F0)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA3C4370)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C3F20)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGEINFO___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA3C4470)

namespace RPG::Client
{
	inline static constexpr unsigned int FloorConnectivityData_EdgeInfo_TypeDefinitionIndex = 59096;

	class FloorConnectivityData_EdgeInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*>* Connections; // 0x10
		::System::UInt32 ToFloorID; // 0x18
		::System::UInt32 FromFloorID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGEINFO__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGEINFO_TOSTRING_OFFSET))(this);
		}

		::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* GetFirstOrDefaultConnection()
		{
			return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGEINFO_GETFIRSTORDEFAULTCONNECTION_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGEINFO___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
