#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1424C830)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1424C310)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x1424C390)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_METHOD_1_591F73C1C45E9D80_OFFSET UNITYSDK_OFFSET(0x1424C890)
#define MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1424CA70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelGlobalAICounterstrokeData_TypeDefinitionIndex = 72862;

	class ConfigLevelGlobalAICounterstrokeData : public ::System::Object
	{
	public:
		::System::Single AICounterstrokeCD; // 0x10
		::System::Single MinBeHitCountDown; // 0x14
		::System::Single MaxBeHitCountDown; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_591F73C1C45E9D80(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELGLOBALAICOUNTERSTROKEDATA_METHOD_1_591F73C1C45E9D80_OFFSET))(this, a1, a2);
		}
	};
}
