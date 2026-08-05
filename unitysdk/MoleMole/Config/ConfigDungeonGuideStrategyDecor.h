#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C3C1C0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16C3BF50)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x16C3BFD0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x16C3C220)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_16902267D4DA4F5F_OFFSET UNITYSDK_OFFSET(0x16C3C400)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x16C3C7C0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_58FF5770BE8EE1CF_OFFSET UNITYSDK_OFFSET(0x16C3C610)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x16C3BE40)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_8BCAE56BA5E1B8E7_OFFSET UNITYSDK_OFFSET(0x16C3C4B0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x16C3BDF0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16C3BF40)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3C4A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonGuideStrategyDecor_TypeDefinitionIndex = 57492;

	class ConfigDungeonGuideStrategyDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::String* GuideStrategyKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_16902267D4DA4F5F(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_16902267D4DA4F5F_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigDungeonGuideStrategyDecor* Method_2_8BCAE56BA5E1B8E7(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDungeonGuideStrategyDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_8BCAE56BA5E1B8E7_OFFSET))(a1);
		}

		static ::MoleMole::Config::ConfigDungeonGuideStrategyDecor* Method_2_58FF5770BE8EE1CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDungeonGuideStrategyDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_58FF5770BE8EE1CF_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONGUIDESTRATEGYDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}
	};
}
