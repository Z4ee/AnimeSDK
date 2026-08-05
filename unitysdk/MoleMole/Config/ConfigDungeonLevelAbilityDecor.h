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

#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8F7B50)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8F78E0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x1B8F7960)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_05FE06546AE39B32_OFFSET UNITYSDK_OFFSET(0x1B8F7EF0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1B8F7BB0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x1B8F82F0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_7B967A5F80D0340A_OFFSET UNITYSDK_OFFSET(0x1B8F8190)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x1B8F77D0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1B8F7780)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_C69D596A06700576_OFFSET UNITYSDK_OFFSET(0x1B8F7E50)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1B8F78D0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_D2F055AB814A7D50_OFFSET UNITYSDK_OFFSET(0x1B8F8380)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8F8180)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonLevelAbilityDecor_TypeDefinitionIndex = 89907;

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

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
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

		static ::MoleMole::Config::ConfigDungeonLevelAbilityDecor* Method_2_7B967A5F80D0340A(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDungeonLevelAbilityDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_7B967A5F80D0340A_OFFSET))(a1);
		}

		::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigDungeonLevelAbilityDecor* Method_2_D2F055AB814A7D50(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDungeonLevelAbilityDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELABILITYDECOR_METHOD_2_D2F055AB814A7D50_OFFSET))(a1, a2);
		}
	};
}
