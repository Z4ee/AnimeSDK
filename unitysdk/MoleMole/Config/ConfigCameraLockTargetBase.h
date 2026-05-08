#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D1C9F0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D1C7B0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x17D1C830)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_METHOD_1_A42B0141BE94FABE_OFFSET UNITYSDK_OFFSET(0x17D1CA50)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1CC40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraLockTargetBase_TypeDefinitionIndex = 77051;

	class ConfigCameraLockTargetBase : public ::System::Object
	{
	public:
		::System::Boolean MuteLock; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_A42B0141BE94FABE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETBASE_METHOD_1_A42B0141BE94FABE_OFFSET))(this, a1, a2);
		}
	};
}
