#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RealtimeQTETaskUIPositionType.h"
#include "unitysdk/System/Object.h"

class Class_1_D47998EF092D4845;
namespace System { class String; }

#define MOLEMOLE_CONFIG_REALTIMEQTETASKENTRYBASE_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x161A0020)
#define MOLEMOLE_CONFIG_REALTIMEQTETASKENTRYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x161A0060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RealtimeQTETaskEntryBase_TypeDefinitionIndex = 78774;

	class RealtimeQTETaskEntryBase : public ::System::Object
	{
	public:
		::System::Boolean IsInfiniteDurationTime; // 0x10
		::System::Single DurationTime; // 0x14
		::MoleMole::RealtimeQTETaskUIPositionType UIPositionType; // 0x18
		::System::Boolean SuccessInstantFinish; // 0x1C
		::System::Boolean FailInstantFinish; // 0x1D
		::System::String* TimeSlowConfigKey; // 0x20
		::Il2CppArray<::System::String*>* HideUIItemTagList; // 0x28
		::System::Boolean IgnoreHandleInputButOnlyShowIcon; // 0x30
		::System::Boolean CustomHandleUIShowLogic; // 0x31
		::System::Boolean SkipSuccessCloseAnimation; // 0x32
		::System::String* QTEInputSoundAction; // 0x38
		::System::String* QTEStartSoundAction; // 0x40
		::System::String* QTEFinishSoundAction; // 0x48
		::System::String* QTESuccessSoundAction; // 0x50
		::System::String* QTEFailSoundAction; // 0x58

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
