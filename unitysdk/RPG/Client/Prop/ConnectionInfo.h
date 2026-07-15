#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_CONNECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19008270)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ConnectionInfo_TypeDefinitionIndex = 74564;

	class ConnectionInfo : public ::System::Object
	{
	public:
		::System::UInt32 FromPropID; // 0x10
		::System::UInt32 ToPropID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CONNECTIONINFO__CTOR_OFFSET))(this);
		}
	};
}
