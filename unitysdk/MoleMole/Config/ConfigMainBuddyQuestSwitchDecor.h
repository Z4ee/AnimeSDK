#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace MoleMole::Config { class ConfigQuestBuddyPair; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13500F40)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13500CD0)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x13500FA0)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_14A023A40C6B20EB_OFFSET UNITYSDK_OFFSET(0x135013D0)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x135016E0)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_52444A54E05D4893_OFFSET UNITYSDK_OFFSET(0x13501530)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x13500D50)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_7C15317AA4E9F2E3_OFFSET UNITYSDK_OFFSET(0x13501240)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x13500BC0)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_8431FE947EA29827_OFFSET UNITYSDK_OFFSET(0x13501190)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x13500B70)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13500CC0)
#define MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x135013C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMainBuddyQuestSwitchDecor_TypeDefinitionIndex = 59215;

	class ConfigMainBuddyQuestSwitchDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigQuestBuddyPair*>* QuestBuddyList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_8431FE947EA29827(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_8431FE947EA29827_OFFSET))(this, a1);
		}

		::System::UInt32 Method_2_7C15317AA4E9F2E3()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_7C15317AA4E9F2E3_OFFSET))(this);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigMainBuddyQuestSwitchDecor* Method_2_14A023A40C6B20EB(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigMainBuddyQuestSwitchDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_14A023A40C6B20EB_OFFSET))(a1);
		}

		::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigMainBuddyQuestSwitchDecor* Method_2_52444A54E05D4893(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigMainBuddyQuestSwitchDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_52444A54E05D4893_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMAINBUDDYQUESTSWITCHDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}
	};
}
