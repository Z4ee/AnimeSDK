#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace MoleMole::Config { class FloorStreamingLayerLoadEntry; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1744C240)
#define MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1744BFB0)
#define MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1744C2A0)
#define MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_13C223CE1A73736D_OFFSET UNITYSDK_OFFSET(0x1744C540)
#define MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_16902267D4DA4F5F_OFFSET UNITYSDK_OFFSET(0x1744C490)
#define MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x1744C6A0)
#define MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x1744C030)
#define MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x1744BE40)
#define MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1744BDF0)
#define MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1744BF40)
#define MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_EF044302ED56B461_OFFSET UNITYSDK_OFFSET(0x1744C730)
#define MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1744C530)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFloorStreamingLayerLoadDecor_TypeDefinitionIndex = 45740;

	class ConfigFloorStreamingLayerLoadDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::FloorStreamingLayerLoadEntry*>* LoadList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_16902267D4DA4F5F(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_16902267D4DA4F5F_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigFloorStreamingLayerLoadDecor* Method_2_13C223CE1A73736D(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigFloorStreamingLayerLoadDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_13C223CE1A73736D_OFFSET))(a1);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigFloorStreamingLayerLoadDecor* Method_2_EF044302ED56B461(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigFloorStreamingLayerLoadDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_EF044302ED56B461_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORSTREAMINGLAYERLOADDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}
	};
}
