#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_MODULEMANAGER_ONEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xD72CCC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ModuleManager_OneRequest_TypeDefinitionIndex = 66250;

	class ModuleManager_OneRequest : public ::System::Object
	{
	public:
		::System::Action* RequestCall; // 0x10
		::System::UInt16 RspCmdID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODULEMANAGER_ONEREQUEST__CTOR_OFFSET))(this);
		}
	};
}
