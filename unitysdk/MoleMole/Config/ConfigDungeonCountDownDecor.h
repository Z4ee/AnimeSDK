#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A065250)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A064FE0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_0F3EBA75648F5ADC_OFFSET UNITYSDK_OFFSET(0x1A065520)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_3068CE0997573AE9_OFFSET UNITYSDK_OFFSET(0x1A0655B0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x1A065060)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x1A064E70)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_8D1A086498C230B9_OFFSET UNITYSDK_OFFSET(0x1A065710)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x1A064E60)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1A064F70)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_D39AAF7777560A81_OFFSET UNITYSDK_OFFSET(0x1A0652B0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0655A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonCountDownDecor_TypeDefinitionIndex = 66736;

	class ConfigDungeonCountDownDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Int32 TimeSecond; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_0F3EBA75648F5ADC(::Foundation::ViewObject::Donjon::DonjonFloorObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_0F3EBA75648F5ADC_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigDungeonCountDownDecor* Method_2_3068CE0997573AE9(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDungeonCountDownDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_3068CE0997573AE9_OFFSET))(a1);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigDungeonCountDownDecor* Method_2_8D1A086498C230B9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDungeonCountDownDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_8D1A086498C230B9_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_D39AAF7777560A81(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_D39AAF7777560A81_OFFSET))(this, a1, a2);
		}
	};
}
