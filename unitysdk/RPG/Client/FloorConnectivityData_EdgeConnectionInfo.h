#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGECONNECTIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBA61330)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGECONNECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBA61320)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGECONNECTIONINFO___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBA61410)

namespace RPG::Client
{
	inline static constexpr unsigned int FloorConnectivityData_EdgeConnectionInfo_TypeDefinitionIndex = 60027;

	class FloorConnectivityData_EdgeConnectionInfo : public ::System::Object
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::Boolean IsRegionDirectConnect; // 0x14
		::System::UInt32 LevelObjID; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGECONNECTIONINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGECONNECTIONINFO_TOSTRING_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGECONNECTIONINFO___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
