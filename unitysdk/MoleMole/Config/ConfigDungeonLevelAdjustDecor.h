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

#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4A9580)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4A9310)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x1A4A9390)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1A4A95E0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x1A4A9BA0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_3AEAB3533756E9A9_OFFSET UNITYSDK_OFFSET(0x1A4A9920)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x1A4A9200)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1A4A91B0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_C69D596A06700576_OFFSET UNITYSDK_OFFSET(0x1A4A9880)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A4A9300)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_C8F7CFE08BFB88F7_OFFSET UNITYSDK_OFFSET(0x1A4A9D90)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_EF95093855EE7003_OFFSET UNITYSDK_OFFSET(0x1A4A9C30)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A9B90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonLevelAdjustDecor_TypeDefinitionIndex = 49241;

	class ConfigDungeonLevelAdjustDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* LevelAdjustIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_C69D596A06700576(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_C69D596A06700576_OFFSET))(this, a1);
		}

		::System::Void Method_2_3AEAB3533756E9A9(::Foundation::ViewObject::Donjon::DonjonFloorObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_3AEAB3533756E9A9_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigDungeonLevelAdjustDecor* Method_2_EF95093855EE7003(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDungeonLevelAdjustDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_EF95093855EE7003_OFFSET))(a1);
		}

		static ::MoleMole::Config::ConfigDungeonLevelAdjustDecor* Method_2_C8F7CFE08BFB88F7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDungeonLevelAdjustDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONLEVELADJUSTDECOR_METHOD_2_C8F7CFE08BFB88F7_OFFSET))(a1, a2);
		}
	};
}
