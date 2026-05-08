#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDungeonRegisterRuleBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x159F8060)
#define MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x159F7C50)
#define MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_6704D57D4F412560_OFFSET UNITYSDK_OFFSET(0x159F7AE0)
#define MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x159F7A90)
#define MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x159F7BE0)
#define MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_D4C21B672AF27EB8_OFFSET UNITYSDK_OFFSET(0x159F8400)
#define MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x159F7CD0)
#define MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_E5BDE724A7C61D22_OFFSET UNITYSDK_OFFSET(0x159F82A0)
#define MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0x159F80C0)
#define MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x159F8290)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTestRandomGroupRegisterRule_TypeDefinitionIndex = 78668;

	class ConfigTestRandomGroupRegisterRule : public ::MoleMole::Config::ConfigDungeonRegisterRuleBase
	{
	public:
		::System::String* Tag; // 0x10
		::System::UInt32 Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDungeonRegisterRuleBase* Method_2_6704D57D4F412560()
		{
			return ((::MoleMole::Config::ConfigDungeonRegisterRuleBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_6704D57D4F412560_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigTestRandomGroupRegisterRule* Method_2_E5BDE724A7C61D22(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigTestRandomGroupRegisterRule*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_E5BDE724A7C61D22_OFFSET))(a1);
		}

		::System::Boolean Method_2_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigTestRandomGroupRegisterRule* Method_2_D4C21B672AF27EB8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigTestRandomGroupRegisterRule*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTESTRANDOMGROUPREGISTERRULE_METHOD_2_D4C21B672AF27EB8_OFFSET))(a1, a2);
		}
	};
}
