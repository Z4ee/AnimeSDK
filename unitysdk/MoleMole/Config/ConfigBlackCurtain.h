#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11CA50C0)
#define MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11CA3BE0)
#define MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11CA5120)
#define MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x11CA3C60)
#define MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA5AA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBlackCurtain_TypeDefinitionIndex = 66342;

	class ConfigBlackCurtain : public ::System::Object
	{
	public:
		::System::String* ExcludeTargets; // 0x10
		::System::Boolean DisableStageLight; // 0x18
		::System::Boolean EnableAvatar; // 0x19
		::System::Boolean SuspendCurMatPropertyModifiers; // 0x1A
		::System::Boolean EnableMonster; // 0x1B
		::System::Boolean EnableBuddy; // 0x1C
		::System::Boolean EnableCaster; // 0x1D
		::System::Boolean DisableStageCollider; // 0x1E
		::System::Boolean DisableQTE; // 0x1F
		::System::Boolean DisableReceiveShadows; // 0x20
		::System::Boolean DisableShadowColorFadeByZ; // 0x21
		::System::Boolean EnableStageEffect; // 0x22
		::System::Boolean EnableStageMesh; // 0x23
		::System::Boolean EnableLocalAvatar; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLACKCURTAIN_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
