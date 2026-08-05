#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDungeonRegisterRuleBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B562550)
#define MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B5624E0)
#define MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_2A563746C0CDCFDC_OFFSET UNITYSDK_OFFSET(0x1B562580)
#define MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_6704D57D4F412560_OFFSET UNITYSDK_OFFSET(0x1B5623D0)
#define MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_9B00DC6B301F3F39_OFFSET UNITYSDK_OFFSET(0x1B562560)
#define MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x1B5623C0)
#define MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_A52FCFEE1FE3DBED_OFFSET UNITYSDK_OFFSET(0x1B5626E0)
#define MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1B5624D0)
#define MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x1B562540)
#define MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B562570)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZenkovCorpRegisterRule_TypeDefinitionIndex = 59539;

	class ConfigZenkovCorpRegisterRule : public ::MoleMole::Config::ConfigDungeonRegisterRuleBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDungeonRegisterRuleBase* Method_2_6704D57D4F412560()
		{
			return ((::MoleMole::Config::ConfigDungeonRegisterRuleBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_6704D57D4F412560_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_FROMBINARY_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigZenkovCorpRegisterRule* Method_2_2A563746C0CDCFDC(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigZenkovCorpRegisterRule*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_2A563746C0CDCFDC_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigZenkovCorpRegisterRule* Method_2_A52FCFEE1FE3DBED(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigZenkovCorpRegisterRule*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_A52FCFEE1FE3DBED_OFFSET))(a1);
		}

		::System::Boolean Method_2_9B00DC6B301F3F39(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVCORPREGISTERRULE_METHOD_2_9B00DC6B301F3F39_OFFSET))(this, a1, a2);
		}
	};
}
