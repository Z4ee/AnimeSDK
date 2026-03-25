#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ENVIRONMENTSYSTEMV1___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9618FE0)
#define RPG_CLIENT_ENVIRONMENTSYSTEMV1___C__DISPLAYCLASS42_0__INITENVIRONMENTSYSTEMASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x961F6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentSystemV1___c__DisplayClass42_0_TypeDefinitionIndex = 57070;

	class EnvironmentSystemV1___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitEnvironmentSystemAsync_b__0(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEMV1___C__DISPLAYCLASS42_0__INITENVIRONMENTSYSTEMASYNC_B__0_OFFSET))(this, param);
		}
	};
}
