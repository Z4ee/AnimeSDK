#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FloorConnectivityData_EdgeConnectionInfo; }
namespace RPG::Client { class FloorConnectivityData_EdgeInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FLOORCONNECTIVITYDATA_VERTEXINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9703F70)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_VERTEXINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9703B40)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_VERTEXINFO___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9704140)

namespace RPG::Client
{
	inline static constexpr unsigned int FloorConnectivityData_VertexInfo_TypeDefinitionIndex = 52145;

	class FloorConnectivityData_VertexInfo : public ::System::Object
	{
	public:
		::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* WildcardPoint; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FloorConnectivityData_EdgeInfo*>* EdgesFromCurVertex; // 0x18
		::System::Boolean IsVisited; // 0x20
		::System::UInt32 CurFloorID; // 0x24

		::System::Void _ctor(::System::UInt32 floorId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_VERTEXINFO__CTOR_OFFSET))(this, floorId);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_VERTEXINFO_TOSTRING_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_VERTEXINFO___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
