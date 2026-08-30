#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_AUTHKEYDATA_WEBAUTHKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x193B5350)

namespace RPG::Client
{
	inline static constexpr unsigned int AuthKeyData_WebAuthKey_TypeDefinitionIndex = 66446;

	class AuthKeyData_WebAuthKey : public ::System::Object
	{
	public:
		::System::String* AuthKeyString; // 0x10
		::System::UInt32 ExpireTimeStamp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTHKEYDATA_WEBAUTHKEY__CTOR_OFFSET))(this);
		}
	};
}
