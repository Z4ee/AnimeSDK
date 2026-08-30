#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/System/Object.h"

class Class_1_4FF4F44114B6FC55;
class Class_1_D44ED542AE6D01E6;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_SPECIALVISIONSYSTEM_CLEARSPECIALVISION_OFFSET UNITYSDK_OFFSET(0x196E9730)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_CLOSESPECIALVISION_OFFSET UNITYSDK_OFFSET(0x196E9110)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x196E8B80)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_GETLASTOPENVISIONTYPE_OFFSET UNITYSDK_OFFSET(0x196E9970)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_GETLASTVISIONCLOSETIME_OFFSET UNITYSDK_OFFSET(0x196E99B0)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_GET_SMELLPATHSYSTEM_OFFSET UNITYSDK_OFFSET(0x196E9A40)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_ISSPECIALVISIONOPEN_OFFSET UNITYSDK_OFFSET(0x196E9930)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_OPENSPECIALVISION_OFFSET UNITYSDK_OFFSET(0x196E92C0)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_SETCLOSEPROTECT_OFFSET UNITYSDK_OFFSET(0x196E99F0)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_SETSPECIALVISIONEFFECTACTIVE_OFFSET UNITYSDK_OFFSET(0x196E9790)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0x196E9840)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x196E8A60)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__ONTEAMLEADERCHANGED_OFFSET UNITYSDK_OFFSET(0x196E8CC0)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__SETUPAUTOCLOSETIMER_OFFSET UNITYSDK_OFFSET(0x196E8FD0)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__TICKAUTOCLOSETIMER_OFFSET UNITYSDK_OFFSET(0x196E9090)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__TRIGGERGAMEWORLDEVENT_OFFSET UNITYSDK_OFFSET(0x196E8D20)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__TRIGGERSMELLGRAPHSYSTEMVISIONOFF_OFFSET UNITYSDK_OFFSET(0x196E8F80)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__TRIGGERSMELLGRAPHSYSTEMVISIONON_OFFSET UNITYSDK_OFFSET(0x196E8F30)

namespace RPG::Client
{
	inline static constexpr unsigned int SpecialVisionSystem_TypeDefinitionIndex = 61037;

	class SpecialVisionSystem : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* _AdvPhase; // 0x10
		::Class_1_4FF4F44114B6FC55* _SmellPathSystem; // 0x18
		::Class_1_D44ED542AE6D01E6* _SpecialVisionEffect; // 0x20
		::System::UInt64 _SpecialVisionLastClose; // 0x28
		::RPG::GameCore::SpecialVisionType _SpecialVisionType; // 0x30
		::System::Single _AutoCloseTimer; // 0x34
		::System::Boolean _CloseProtect; // 0x38
		::System::Boolean _SpecialVisionEnable; // 0x39

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnTeamLeaderChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__ONTEAMLEADERCHANGED_OFFSET))(this, a1);
		}

		::System::Void _TriggerGameworldEvent(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__TRIGGERGAMEWORLDEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void _TriggerSmellGraphSystemVisionOn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__TRIGGERSMELLGRAPHSYSTEMVISIONON_OFFSET))(this);
		}

		::System::Void _TriggerSmellGraphSystemVisionOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__TRIGGERSMELLGRAPHSYSTEMVISIONOFF_OFFSET))(this);
		}

		::System::Void _SetupAutoCloseTimer(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__SETUPAUTOCLOSETIMER_OFFSET))(this, a1, a2);
		}

		::System::Void _TickAutoCloseTimer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__TICKAUTOCLOSETIMER_OFFSET))(this, a1);
		}

		::System::Boolean OpenSpecialVision(::RPG::GameCore::SpecialVisionType a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5, ::System::String* a6, ::RPG::GameCore::GameEntity* a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SpecialVisionType, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::String*, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_OPENSPECIALVISION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void ClearSpecialVision(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_CLEARSPECIALVISION_OFFSET))(this, a1);
		}

		::System::Boolean CloseSpecialVision(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_CLOSESPECIALVISION_OFFSET))(this, a1);
		}

		::System::Void SetSpecialVisionEffectActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_SETSPECIALVISIONEFFECTACTIVE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_TICK_OFFSET))(this, a1);
		}

		::System::Boolean IsSpecialVisionOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_ISSPECIALVISIONOPEN_OFFSET))(this);
		}

		::RPG::GameCore::SpecialVisionType GetLastOpenVisionType()
		{
			return ((::RPG::GameCore::SpecialVisionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_GETLASTOPENVISIONTYPE_OFFSET))(this);
		}

		::System::UInt64 GetLastVisionCloseTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_GETLASTVISIONCLOSETIME_OFFSET))(this);
		}

		::System::Void SetCloseProtect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_SETCLOSEPROTECT_OFFSET))(this, a1);
		}

		::Class_1_4FF4F44114B6FC55* get_SmellPathSystem()
		{
			return ((::Class_1_4FF4F44114B6FC55*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_GET_SMELLPATHSYSTEM_OFFSET))(this);
		}
	};
}
