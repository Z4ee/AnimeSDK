#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1703CFB0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1703CD20)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_05FE06546AE39B32_OFFSET UNITYSDK_OFFSET(0x1703D350)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1703D010)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x1703D5E0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x1703CDA0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_7B967A5F80D0340A_OFFSET UNITYSDK_OFFSET(0x1703D820)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x1703CBB0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1703CB60)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1703CCB0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_C69D596A06700576_OFFSET UNITYSDK_OFFSET(0x1703D2B0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_D2F055AB814A7D50_OFFSET UNITYSDK_OFFSET(0x1703D670)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1703D5D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonLevelAbilityDecor_TypeDefinitionIndex = 71044;

	class ConfigDungeonLevelAbilityDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* LevelAbilityIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_C69D596A06700576(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_C69D596A06700576_OFFSET))(this, a1);
		}

		::System::Void Method_2_05FE06546AE39B32(::Foundation::ViewObject::Donjon::DonjonFloorObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_05FE06546AE39B32_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigDungeonLevelAbilityDecor* Method_2_D2F055AB814A7D50(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDungeonLevelAbilityDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_D2F055AB814A7D50_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::ConfigDungeonLevelAbilityDecor* Method_2_7B967A5F80D0340A(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDungeonLevelAbilityDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_7B967A5F80D0340A_OFFSET))(a1);
		}
	};
}
