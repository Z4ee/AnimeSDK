#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDungeonRegisterRuleBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD60050)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD5FE00)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0x1BD600B0)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x1BD5FE80)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_6704D57D4F412560_OFFSET UNITYSDK_OFFSET(0x1BD5FCF0)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_820393D543EA4470_OFFSET UNITYSDK_OFFSET(0x1BD604D0)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_8C3810F9F6A2DA66_OFFSET UNITYSDK_OFFSET(0x1BD60320)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1BD5FCA0)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1BD5FDF0)
#define MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD60310)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPityFillingGroupRegisterRule_TypeDefinitionIndex = 60886;

	class ConfigPityFillingGroupRegisterRule : public ::MoleMole::Config::ConfigDungeonRegisterRuleBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ExceptGameplayTagList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDungeonRegisterRuleBase* Method_2_6704D57D4F412560()
		{
			return ((::MoleMole::Config::ConfigDungeonRegisterRuleBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_6704D57D4F412560_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigPityFillingGroupRegisterRule* Method_2_8C3810F9F6A2DA66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigPityFillingGroupRegisterRule*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_8C3810F9F6A2DA66_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_157E312840A3BD00_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigPityFillingGroupRegisterRule* Method_2_820393D543EA4470(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigPityFillingGroupRegisterRule*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPITYFILLINGGROUPREGISTERRULE_METHOD_2_820393D543EA4470_OFFSET))(a1);
		}
	};
}
