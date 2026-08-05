#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C3CBC0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16C3C970)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x16C3C9F0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x16C3D250)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_6908B33778D16A8E_OFFSET UNITYSDK_OFFSET(0x16C3CF40)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x16C3C860)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x16C3C850)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_C69D596A06700576_OFFSET UNITYSDK_OFFSET(0x16C3CE90)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16C3C960)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_D39AAF7777560A81_OFFSET UNITYSDK_OFFSET(0x16C3CC20)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_E42F9DCC0B8CBF4C_OFFSET UNITYSDK_OFFSET(0x16C3D0F0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3CF30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonMonsterPlayTypeDecor_TypeDefinitionIndex = 77234;

	class ConfigDungeonMonsterPlayTypeDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Int32 MonsterPlayTypeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_C69D596A06700576(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_C69D596A06700576_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigDungeonMonsterPlayTypeDecor* Method_2_6908B33778D16A8E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDungeonMonsterPlayTypeDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_6908B33778D16A8E_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::ConfigDungeonMonsterPlayTypeDecor* Method_2_E42F9DCC0B8CBF4C(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDungeonMonsterPlayTypeDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_E42F9DCC0B8CBF4C_OFFSET))(a1);
		}

		::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_D39AAF7777560A81(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONMONSTERPLAYTYPEDECOR_METHOD_2_D39AAF7777560A81_OFFSET))(this, a1, a2);
		}
	};
}
