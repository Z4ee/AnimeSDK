#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RealtimeQTETaskUIPositionType.h"
#include "unitysdk/System/Object.h"

class Class_1_D47998EF092D4845;
namespace System { class String; }

#define MOLEMOLE_CONFIG_REALTIMEQTETASKENTRYBASE_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x1B926D40)
#define MOLEMOLE_CONFIG_REALTIMEQTETASKENTRYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B926D80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RealtimeQTETaskEntryBase_TypeDefinitionIndex = 74323;

	class RealtimeQTETaskEntryBase : public ::System::Object
	{
	public:
		::System::Boolean IsInfiniteDurationTime; // 0x10
		::System::Single DurationTime; // 0x14
		::System::Boolean disableHighLightUI; // 0x18
		::MoleMole::RealtimeQTETaskUIPositionType UIPositionType; // 0x1C
		::System::Boolean SuccessInstantFinish; // 0x20
		::System::Boolean FailInstantFinish; // 0x21
		::System::String* TimeSlowConfigKey; // 0x28
		::Il2CppArray<::System::String*>* HideUIItemTagList; // 0x30
		::System::Boolean IgnoreHandleInputButOnlyShowIcon; // 0x38
		::System::Boolean CustomHandleUIShowLogic; // 0x39
		::System::Boolean UseCommonQTEHint; // 0x3A
		::System::Boolean SkipSuccessCloseAnimation; // 0x3B
		::System::String* QTEInputSoundAction; // 0x40
		::System::String* QTEStartSoundAction; // 0x48
		::System::String* QTEFinishSoundAction; // 0x50
		::System::String* QTESuccessSoundAction; // 0x58
		::System::String* QTEFailSoundAction; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REALTIMEQTETASKENTRYBASE__CTOR_OFFSET))(this);
		}

		::Class_1_D47998EF092D4845* CreateRealtimeQTETask()
		{
			return ((::Class_1_D47998EF092D4845*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REALTIMEQTETASKENTRYBASE_CREATEREALTIMEQTETASK_OFFSET))(this);
		}
	};
}
