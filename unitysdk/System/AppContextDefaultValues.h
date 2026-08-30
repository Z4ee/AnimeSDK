#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_APPCONTEXTDEFAULTVALUES_POPULATEDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x1BB92D60)
#define SYSTEM_APPCONTEXTDEFAULTVALUES_TRYGETSWITCHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1BB931C0)

namespace System
{
	inline static constexpr unsigned int AppContextDefaultValues_TypeDefinitionIndex = 367;

	class AppContextDefaultValues : public ::System::Object
	{
	public:
		static ::System::Void PopulateDefaultValues()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPCONTEXTDEFAULTVALUES_POPULATEDEFAULTVALUES_OFFSET))();
		}

		static ::System::Boolean TryGetSwitchOverride(::System::String* a1, ::System::Boolean& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_APPCONTEXTDEFAULTVALUES_TRYGETSWITCHOVERRIDE_OFFSET))(a1, a2);
		}
	};
}
