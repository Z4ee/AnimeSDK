#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityLoginData; }

#define RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFB8440)
#define RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS22_0__GETACTIVITYLOGINDATABYMODULEID_B__0_OFFSET UNITYSDK_OFFSET(0x1AFCB540)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityModule___c__DisplayClass22_0_TypeDefinitionIndex = 61780;

	class ActivityModule___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::UInt32 moduleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetActivityLoginDataByModuleID_b__0(::RPG::Client::ActivityLoginData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityLoginData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__DISPLAYCLASS22_0__GETACTIVITYLOGINDATABYMODULEID_B__0_OFFSET))(this, a1);
		}
	};
}
