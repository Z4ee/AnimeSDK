#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGECONNECTIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD0A56E0)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGECONNECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A56D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FloorConnectivityData_EdgeConnectionInfo_TypeDefinitionIndex = 64293;

	class FloorConnectivityData_EdgeConnectionInfo : public ::System::Object
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 LevelObjID; // 0x14
		::System::Boolean IsRegionDirectConnect; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGECONNECTIONINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_EDGECONNECTIONINFO_TOSTRING_OFFSET))(this);
		}
	};
}
