#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_PLATFORMINFOMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x14236980)

namespace IRIClusterBuilder::Test
{
	inline static constexpr unsigned int IRICarTestManager_PlatformInfoMessage_TypeDefinitionIndex = 45077;

	class IRICarTestManager_PlatformInfoMessage : public ::System::Object
	{
	public:
		::System::String* Platform; // 0x10
		::System::String* Architecture; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_PLATFORMINFOMESSAGE__CTOR_OFFSET))(this);
		}
	};
}
