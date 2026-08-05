#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177D8980)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x177D84A0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_0F3EBA75648F5ADC_OFFSET UNITYSDK_OFFSET(0x177D8DF0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_1D8C60247E81BA7F_OFFSET UNITYSDK_OFFSET(0x177D89E0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_3068CE0997573AE9_OFFSET UNITYSDK_OFFSET(0x177D9050)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x177D8520)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x177D8390)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_8D1A086498C230B9_OFFSET UNITYSDK_OFFSET(0x177D8EA0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x177D8380)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x177D8490)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x177D8E90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonCountDownDecor_TypeDefinitionIndex = 78806;

	class ConfigDungeonCountDownDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Int32 TimeSecond; // 0x18
		::System::Boolean DefaultStart; // 0x1C
		::System::Boolean ZenkovPauseDialogKeepCountdown; // 0x1D

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

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
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

		::System::Boolean Method_2_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_3DC6B5AAFA39829C_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigDungeonCountDownDecor* Method_2_8D1A086498C230B9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDungeonCountDownDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_8D1A086498C230B9_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_1D8C60247E81BA7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_1D8C60247E81BA7F_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigDungeonCountDownDecor* Method_2_3068CE0997573AE9(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDungeonCountDownDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONCOUNTDOWNDECOR_METHOD_2_3068CE0997573AE9_OFFSET))(a1);
		}
	};
}
