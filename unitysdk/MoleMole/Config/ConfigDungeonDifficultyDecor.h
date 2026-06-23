#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1703C370)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1703BFC0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_1FAC9B543EF43496_OFFSET UNITYSDK_OFFSET(0x1703C3D0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x1703C7C0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x1703C040)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x1703BE50)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x1703BE40)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_ADEB76DF2BBE9491_OFFSET UNITYSDK_OFFSET(0x1703C9B0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1703BF50)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_C69D596A06700576_OFFSET UNITYSDK_OFFSET(0x1703C710)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_F499484FDA6C2149_OFFSET UNITYSDK_OFFSET(0x1703C850)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1703C7B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonDifficultyDecor_TypeDefinitionIndex = 62529;

	class ConfigDungeonDifficultyDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Int32 DifficultyTagID; // 0x18
		::System::Boolean IsDynamicDifficulty; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_C69D596A06700576(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_C69D596A06700576_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigDungeonDifficultyDecor* Method_2_F499484FDA6C2149(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDungeonDifficultyDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_F499484FDA6C2149_OFFSET))(a1);
		}

		static ::MoleMole::Config::ConfigDungeonDifficultyDecor* Method_2_ADEB76DF2BBE9491(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDungeonDifficultyDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_ADEB76DF2BBE9491_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_1FAC9B543EF43496(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_1FAC9B543EF43496_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONDIFFICULTYDECOR_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}
	};
}
