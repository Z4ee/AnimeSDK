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

#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14869AF0)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14869880)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x14869900)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x14869B50)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_16902267D4DA4F5F_OFFSET UNITYSDK_OFFSET(0x14869D30)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x14869F40)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x14869770)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_B6B10C6F1ED2C48D_OFFSET UNITYSDK_OFFSET(0x14869DE0)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x14869720)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x14869870)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_D830C4D9D0A72C29_OFFSET UNITYSDK_OFFSET(0x14869FD0)
#define MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x14869DD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLogMessageDecor_TypeDefinitionIndex = 46661;

	class ConfigLogMessageDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::String* Message; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_16902267D4DA4F5F(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_16902267D4DA4F5F_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigLogMessageDecor* Method_2_B6B10C6F1ED2C48D(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigLogMessageDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_B6B10C6F1ED2C48D_OFFSET))(a1);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigLogMessageDecor* Method_2_D830C4D9D0A72C29(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigLogMessageDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_D830C4D9D0A72C29_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOGMESSAGEDECOR_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
		}
	};
}
