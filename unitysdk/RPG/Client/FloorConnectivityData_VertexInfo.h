#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FloorConnectivityData_EdgeConnectionInfo; }
namespace RPG::Client { class FloorConnectivityData_EdgeInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FLOORCONNECTIVITYDATA_VERTEXINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16D12FF0)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_VERTEXINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16D12C40)

namespace RPG::Client
{
	inline static constexpr unsigned int FloorConnectivityData_VertexInfo_TypeDefinitionIndex = 61310;

	class FloorConnectivityData_VertexInfo : public ::System::Object
	{
	public:
		::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* WildcardPoint; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FloorConnectivityData_EdgeInfo*>* EdgesFromCurVertex; // 0x18
		::System::UInt32 CurFloorID; // 0x20
		::System::Boolean IsVisited; // 0x24

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_VERTEXINFO__CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_VERTEXINFO_TOSTRING_OFFSET))(this);
		}
	};
}
