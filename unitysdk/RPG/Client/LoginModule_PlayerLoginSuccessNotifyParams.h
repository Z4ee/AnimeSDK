#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LOGINMODULE_PLAYERLOGINSUCCESSNOTIFYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x9A56570)

namespace RPG::Client
{
	inline static constexpr unsigned int LoginModule_PlayerLoginSuccessNotifyParams_TypeDefinitionIndex = 53420;

	class LoginModule_PlayerLoginSuccessNotifyParams : public ::System::Object
	{
	public:
		::System::UInt64 ServerTimestampMs; // 0x10
		::System::Boolean IsRelay; // 0x18
		::System::Int32 CurServerTimezone; // 0x1C
		::System::UInt64 ServerLoginRandomNum; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE_PLAYERLOGINSUCCESSNOTIFYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
