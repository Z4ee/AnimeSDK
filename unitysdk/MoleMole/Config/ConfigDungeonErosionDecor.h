#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B548EE0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B548C90)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x1B548D10)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_16902267D4DA4F5F_OFFSET UNITYSDK_OFFSET(0x1B5490F0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_1D8C60247E81BA7F_OFFSET UNITYSDK_OFFSET(0x1B548F40)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x1B5493D0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x1B549190)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_5F956BBA79230D4B_OFFSET UNITYSDK_OFFSET(0x1B549420)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x1B548B80)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x1B548B70)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1B548C80)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_CF73E4FB2B6567AF_OFFSET UNITYSDK_OFFSET(0x1B549220)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B549210)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonErosionDecor_TypeDefinitionIndex = 49992;

	class ConfigDungeonErosionDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::UInt32 ZKErosionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_16902267D4DA4F5F(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_16902267D4DA4F5F_OFFSET))(this, a1);
		}

		::System::Void Method_2_5D3D37F2BAE9FB65()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDungeonErosionDecor* Method_2_CF73E4FB2B6567AF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDungeonErosionDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_CF73E4FB2B6567AF_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_1D8C60247E81BA7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_1D8C60247E81BA7F_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigDungeonErosionDecor* Method_2_5F956BBA79230D4B(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDungeonErosionDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONEROSIONDECOR_METHOD_2_5F956BBA79230D4B_OFFSET))(a1);
		}
	};
}
