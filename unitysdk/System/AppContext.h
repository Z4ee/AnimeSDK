#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/AppContext_SwitchValueState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SYSTEM_APPCONTEXT_INITIALIZEDEFAULTSWITCHVALUES_OFFSET UNITYSDK_OFFSET(0x16E275F0)
#define SYSTEM_APPCONTEXT_TRYGETSWITCH_OFFSET UNITYSDK_OFFSET(0x16E27750)
#define SYSTEM_APPCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E27BB0)

namespace System
{
	inline static constexpr unsigned int AppContext_TypeDefinitionIndex = 154;

	class AppContext : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::AppContext_SwitchValueState>** StaticGet_s_switchMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::AppContext_SwitchValueState>**)Il2CppClass::FromTypeDefinitionIndex(AppContext_TypeDefinitionIndex)->GetStaticField(0x72D0);
		}
		static ::System::Boolean* StaticGet_s_defaultsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppContext_TypeDefinitionIndex)->GetStaticField(0x1EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPCONTEXT__CCTOR_OFFSET))();
		}

		static ::System::Void InitializeDefaultSwitchValues()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_APPCONTEXT_INITIALIZEDEFAULTSWITCHVALUES_OFFSET))();
		}

		static ::System::Boolean TryGetSwitch(::System::String* a1, ::System::Boolean& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_APPCONTEXT_TRYGETSWITCH_OFFSET))(a1, a2);
		}
	};
}
