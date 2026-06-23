#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D62E20)
#define MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D62A60)
#define MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_METHOD_1_46F5479027C46F32_OFFSET UNITYSDK_OFFSET(0x17D62E80)
#define MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x17D62AE0)
#define MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D631B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSuiteV2RandomResult_TypeDefinitionIndex = 49347;

	class ConfigSuiteV2RandomResult : public ::System::Object
	{
	public:
		::System::Int32 Count; // 0x10
		::System::Int32 Weight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_46F5479027C46F32(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUITEV2RANDOMRESULT_METHOD_1_46F5479027C46F32_OFFSET))(this, a1, a2);
		}
	};
}
