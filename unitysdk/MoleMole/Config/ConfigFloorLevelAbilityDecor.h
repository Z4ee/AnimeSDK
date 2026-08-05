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

#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B908BD0)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B908960)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x1B9089E0)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_05FE06546AE39B32_OFFSET UNITYSDK_OFFSET(0x1B908F70)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1B908C30)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x1B909210)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x1B908850)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_99AA3E0E3496EDDA_OFFSET UNITYSDK_OFFSET(0x1B909450)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1B908800)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_C69D596A06700576_OFFSET UNITYSDK_OFFSET(0x1B908ED0)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1B908950)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_E4420B2166C8BB68_OFFSET UNITYSDK_OFFSET(0x1B9092A0)
#define MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B909200)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFloorLevelAbilityDecor_TypeDefinitionIndex = 42414;

	class ConfigFloorLevelAbilityDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* LevelAbilityIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_C69D596A06700576(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_C69D596A06700576_OFFSET))(this, a1);
		}

		::System::Void Method_2_05FE06546AE39B32(::Foundation::ViewObject::Donjon::DonjonFloorObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_05FE06546AE39B32_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigFloorLevelAbilityDecor* Method_2_E4420B2166C8BB68(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigFloorLevelAbilityDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_E4420B2166C8BB68_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigFloorLevelAbilityDecor* Method_2_99AA3E0E3496EDDA(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigFloorLevelAbilityDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORLEVELABILITYDECOR_METHOD_2_99AA3E0E3496EDDA_OFFSET))(a1);
		}
	};
}
