#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_816D4E2238E8C24A;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1A4BCEA0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CHECKVALUECONTENT_OFFSET UNITYSDK_OFFSET(0x1A4BCEE0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_GETEFFINTERACTRANGE_OFFSET UNITYSDK_OFFSET(0x1A4BCE50)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_GET_ACTIONLIST_OFFSET UNITYSDK_OFFSET(0x1A4BCE10)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_GET_ISSUPPORTREPEAT_OFFSET UNITYSDK_OFFSET(0x1A4BD320)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_GET_VALUELIST_OFFSET UNITYSDK_OFFSET(0x1A4BCE30)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_INITACTIONLIST_OFFSET UNITYSDK_OFFSET(0x1A4BCF20)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_INITVALUELIST_OFFSET UNITYSDK_OFFSET(0x1A4BD030)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_SETACTION_OFFSET UNITYSDK_OFFSET(0x1A4BD140)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A4BD230)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BD330)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntryMode_TypeDefinitionIndex = 69682;

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
