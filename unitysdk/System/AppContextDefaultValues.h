#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_APPCONTEXTDEFAULTVALUES_POPULATEDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x177D4C00)
#define SYSTEM_APPCONTEXTDEFAULTVALUES_TRYGETSWITCHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x177D5090)

namespace System
{
	inline static constexpr unsigned int AppContextDefaultValues_TypeDefinitionIndex = 365;

	class AppContextDefaultValues : public ::System::Object
	{
	public:
		static ::System::Void PopulateDefaultValues()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPCONTEXTDEFAULTVALUES_POPULATEDEFAULTVALUES_OFFSET))();
		}

		static ::System::Boolean TryGetSwitchOverride(::System::String* switchName, ::System::Boolean& overrideValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_APPCONTEXTDEFAULTVALUES_TRYGETSWITCHOVERRIDE_OFFSET))(switchName, overrideValue);
		}
	};
}
