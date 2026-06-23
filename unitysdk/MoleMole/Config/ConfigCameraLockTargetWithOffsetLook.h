#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigCameraLockTargetBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AA4A7A0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1AA49940)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_METHOD_2_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x1AA499C0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_METHOD_2_A00BA7031F286AAF_OFFSET UNITYSDK_OFFSET(0x1AA4A800)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA4AC80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraLockTargetWithOffsetLook_TypeDefinitionIndex = 56291;

	class ConfigCameraLockTargetWithOffsetLook : public ::MoleMole::Config::ConfigCameraLockTargetBase
	{
	public:
		::System::Single LockLastTime; // 0x18
		::System::Single EnterLerpTime; // 0x1C
		::System::Single ExitLerpTime; // 0x20
		::System::String* StartCurveKey; // 0x28
		::System::String* EndCurveKey; // 0x30
		::System::Boolean IngoreTimeScale; // 0x38
		::System::Boolean IsDragCancel; // 0x39
		::System::Single OffsetLookRatio; // 0x3C
		::System::String* OverrideSpineLockName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_METHOD_2_0578713EDB32B89E_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_A00BA7031F286AAF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETWITHOFFSETLOOK_METHOD_2_A00BA7031F286AAF_OFFSET))(this, a1, a2);
		}
	};
}
