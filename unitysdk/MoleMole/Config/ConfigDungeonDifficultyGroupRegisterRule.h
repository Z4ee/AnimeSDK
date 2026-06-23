#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDungeonRegisterRuleBase.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigDifficultyTagPair; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A065CE0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A065A80)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_42E1B0366D8D72CF_OFFSET UNITYSDK_OFFSET(0x1A065D40)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0x1A065B00)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_62CC56EF71443882_OFFSET UNITYSDK_OFFSET(0x1A066060)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_6704D57D4F412560_OFFSET UNITYSDK_OFFSET(0x1A065910)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_A971FE825C4929D4_OFFSET UNITYSDK_OFFSET(0x1A065F00)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1A0658C0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1A065A10)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A065EF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonDifficultyGroupRegisterRule_TypeDefinitionIndex = 77937;

	class ConfigDungeonDifficultyGroupRegisterRule : public ::MoleMole::Config::ConfigDungeonRegisterRuleBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDifficultyTagPair*>* DifficultyTagPairList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDungeonRegisterRuleBase* Method_2_6704D57D4F412560()
		{
			return ((::MoleMole::Config::ConfigDungeonRegisterRuleBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_6704D57D4F412560_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_FROMBINARY_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigDungeonDifficultyGroupRegisterRule* Method_2_A971FE825C4929D4(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDungeonDifficultyGroupRegisterRule*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_A971FE825C4929D4_OFFSET))(a1);
		}

		::System::Boolean Method_2_42E1B0366D8D72CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_42E1B0366D8D72CF_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigDungeonDifficultyGroupRegisterRule* Method_2_62CC56EF71443882(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDungeonDifficultyGroupRegisterRule*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_62CC56EF71443882_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYGROUPREGISTERRULE_METHOD_2_5253759692D6DAC1_OFFSET))(this, a1);
		}
	};
}
