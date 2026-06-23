#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35D50070BC469EAB;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x18ADC760)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CHECKVALUECONTENT_OFFSET UNITYSDK_OFFSET(0x18ADC7A0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_GETEFFINTERACTRANGE_OFFSET UNITYSDK_OFFSET(0x18ADC710)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_GET_ACTIONLIST_OFFSET UNITYSDK_OFFSET(0x18ADC6D0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_GET_ISSUPPORTREPEAT_OFFSET UNITYSDK_OFFSET(0x18ADCBE0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_GET_VALUELIST_OFFSET UNITYSDK_OFFSET(0x18ADC6F0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_INITACTIONLIST_OFFSET UNITYSDK_OFFSET(0x18ADC7E0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_INITVALUELIST_OFFSET UNITYSDK_OFFSET(0x18ADC8F0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_SETACTION_OFFSET UNITYSDK_OFFSET(0x18ADCA00)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x18ADCAF0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADCBF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntryMode_TypeDefinitionIndex = 66980;

	class InteractEntryMode : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* _actionList; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* _valueList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* get_ActionList()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_GET_ACTIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* get_ValueList()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_GET_VALUELIST_OFFSET))(this);
		}

		::System::Boolean GetEffInteractRange(::System::Single& effRadius)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_GETEFFINTERACTRANGE_OFFSET))(this, effRadius);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void CheckValueContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CHECKVALUECONTENT_OFFSET))(this);
		}

		::System::Void InitActionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_INITACTIONLIST_OFFSET))(this);
		}

		::System::Void InitValueList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_INITVALUELIST_OFFSET))(this);
		}

		::System::Void SetAction(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_SETACTION_OFFSET))(this, name);
		}

		::System::Void SetValue(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_SETVALUE_OFFSET))(this, name);
		}

		::System::Boolean get_IsSupportRepeat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_GET_ISSUPPORTREPEAT_OFFSET))(this);
		}
	};
}
