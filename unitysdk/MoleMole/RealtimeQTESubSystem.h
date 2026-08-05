#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_1.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_1_D47998EF092D4845;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_REALTIMEQTESUBSYSTEM_DESTROYREALTIMEQTE_OFFSET UNITYSDK_OFFSET(0x11909090)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_DESTROYTASK_OFFSET UNITYSDK_OFFSET(0x11908C80)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_GETTASKBYTAG_OFFSET UNITYSDK_OFFSET(0x11908A50)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_ISTASKWORKING_OFFSET UNITYSDK_OFFSET(0x11908B30)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11908DA0)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11908DE0)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11908E30)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_STARTREALTIMEQTE_OFFSET UNITYSDK_OFFSET(0x11908F40)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM_TICKTASK_OFFSET UNITYSDK_OFFSET(0x11908B90)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x119090E0)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x119090F0)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11909180)
#define MOLEMOLE_REALTIMEQTESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11909210)

namespace MoleMole
{
	inline static constexpr unsigned int RealtimeQTESubSystem_TypeDefinitionIndex = 65723;

	class RealtimeQTESubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::RealtimeQTESubSystem*>
	{
	public:
		::Class_1_D47998EF092D4845* _curTask; // 0x10
		::System::Boolean IsBtnWorkable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::Class_1_D47998EF092D4845* GetTaskByTag(::System::String* tag)
		{
			return ((::Class_1_D47998EF092D4845*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_GETTASKBYTAG_OFFSET))(this, tag);
		}

		::System::Boolean IsTaskWorking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_ISTASKWORKING_OFFSET))(this);
		}

		::System::Void TickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_TICKTASK_OFFSET))(this);
		}

		::System::Void DestroyTask(::System::String* customTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_DESTROYTASK_OFFSET))(this, customTag);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void StartRealtimeQTE(::System::String* key, ::System::String* customTag, ::System::Action_1<::Enum_3_D2BBBB758B896E04_1>* OnQTEFinished, ::System::Int32 triggerEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::Enum_3_D2BBBB758B896E04_1>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_STARTREALTIMEQTE_OFFSET))(this, key, customTag, OnQTEFinished, triggerEntityID);
		}

		::System::Void DestroyRealtimeQTE(::System::String* customTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM_DESTROYREALTIMEQTE_OFFSET))(this, customTag);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REALTIMEQTESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
