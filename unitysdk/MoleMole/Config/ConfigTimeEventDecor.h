#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17055EB0)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17055C40)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x17055CC0)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x17055AD0)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_9DF21D3DB8266CAD_OFFSET UNITYSDK_OFFSET(0x17056190)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x17055AC0)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x17055BD0)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_D39AAF7777560A81_OFFSET UNITYSDK_OFFSET(0x17055F10)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_F40873258656DCF1_OFFSET UNITYSDK_OFFSET(0x17056340)
#define MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17056180)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTimeEventDecor_TypeDefinitionIndex = 62871;

	class ConfigTimeEventDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Int32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigTimeEventDecor* Method_2_9DF21D3DB8266CAD(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigTimeEventDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_9DF21D3DB8266CAD_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::ConfigTimeEventDecor* Method_2_F40873258656DCF1(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigTimeEventDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_F40873258656DCF1_OFFSET))(a1);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_D39AAF7777560A81(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEEVENTDECOR_METHOD_2_D39AAF7777560A81_OFFSET))(this, a1, a2);
		}
	};
}
