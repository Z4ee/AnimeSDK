#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionIntending.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_BEGINSCOPE_OFFSET UNITYSDK_OFFSET(0x158B4C90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_ENDSCOPE_OFFSET UNITYSDK_OFFSET(0x158B4CF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_EXECUTEANDENDSCOPE_OFFSET UNITYSDK_OFFSET(0x158B5040)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x158B4D50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_GETFILTEREDTYPELIST_OFFSET UNITYSDK_OFFSET(0x158B5380)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x158B5680)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_SETSCOPEVALUE_OFFSET UNITYSDK_OFFSET(0x158B5310)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x158B5740)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___BASE_EXECUTEANDENDSCOPE_OFFSET UNITYSDK_OFFSET(0x158B5780)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x158B5840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_DelayAction_TypeDefinitionIndex = 75384;

	class ConfigSoundAction_DelayAction : public ::MoleMole::Config::ConfigSoundActionIntending
	{
	public:
		::MoleMole::Config::ConfigSoundActionIntending* action; // 0x20
		::System::Single delayTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION__CTOR_OFFSET))(this);
		}

		::System::UInt32 BeginScope()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_BEGINSCOPE_OFFSET))(this);
		}

		::System::Void EndScope()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_ENDSCOPE_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_EXECUTE_OFFSET))(this, context);
		}

		::System::Void ExecuteAndEndScope(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_EXECUTEANDENDSCOPE_OFFSET))(this, context);
		}

		::System::Void SetScopeValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_SETSCOPEVALUE_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetFilteredTypeList()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_GETFILTEREDTYPELIST_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void __base_ExecuteAndEndScope(::Class_0_16E4307DCC419505_197* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___BASE_EXECUTEANDENDSCOPE_OFFSET))(this, P0);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
