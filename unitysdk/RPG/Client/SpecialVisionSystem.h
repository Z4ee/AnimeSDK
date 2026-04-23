#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/System/Object.h"

class Class_1_91BE70367C0D1365;
class Class_1_A8EF306B45FE2EA1;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_SPECIALVISIONSYSTEM_CLEARSPECIALVISION_OFFSET UNITYSDK_OFFSET(0xB1A51B0)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_CLOSESPECIALVISION_OFFSET UNITYSDK_OFFSET(0xB1A4BE0)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1A4670)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_GETLASTOPENVISIONTYPE_OFFSET UNITYSDK_OFFSET(0xB1A53F0)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_GETLASTVISIONCLOSETIME_OFFSET UNITYSDK_OFFSET(0xB1A5430)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_GET_SMELLPATHSYSTEM_OFFSET UNITYSDK_OFFSET(0xB1A54C0)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_ISSPECIALVISIONOPEN_OFFSET UNITYSDK_OFFSET(0xB1A53B0)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_OPENSPECIALVISION_OFFSET UNITYSDK_OFFSET(0xB1A4D90)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_SETCLOSEPROTECT_OFFSET UNITYSDK_OFFSET(0xB1A5470)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_SETSPECIALVISIONEFFECTACTIVE_OFFSET UNITYSDK_OFFSET(0xB1A5210)
#define RPG_CLIENT_SPECIALVISIONSYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0xB1A52C0)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A4560)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__ONTEAMLEADERCHANGED_OFFSET UNITYSDK_OFFSET(0xB1A4780)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__SETUPAUTOCLOSETIMER_OFFSET UNITYSDK_OFFSET(0xB1A4AA0)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__TICKAUTOCLOSETIMER_OFFSET UNITYSDK_OFFSET(0xB1A4B60)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__TRIGGERGAMEWORLDEVENT_OFFSET UNITYSDK_OFFSET(0xB1A47E0)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__TRIGGERSMELLGRAPHSYSTEMVISIONOFF_OFFSET UNITYSDK_OFFSET(0xB1A4A50)
#define RPG_CLIENT_SPECIALVISIONSYSTEM__TRIGGERSMELLGRAPHSYSTEMVISIONON_OFFSET UNITYSDK_OFFSET(0xB1A4A00)

namespace RPG::Client
{
	inline static constexpr unsigned int SpecialVisionSystem_TypeDefinitionIndex = 56201;

	class SpecialVisionSystem : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* _AdvPhase; // 0x10
		::Class_1_A8EF306B45FE2EA1* _SmellPathSystem; // 0x18
		::Class_1_91BE70367C0D1365* _SpecialVisionEffect; // 0x20
		::System::Boolean _CloseProtect; // 0x28
		::System::Boolean _SpecialVisionEnable; // 0x29
		::System::Single _AutoCloseTimer; // 0x2C
		::RPG::GameCore::SpecialVisionType _SpecialVisionType; // 0x30
		::System::UInt64 _SpecialVisionLastClose; // 0x38

		::System::Void _ctor(::RPG::Client::AdventurePhase* advPhase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__CTOR_OFFSET))(this, advPhase);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnTeamLeaderChanged(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__ONTEAMLEADERCHANGED_OFFSET))(this, args);
		}

		::System::Void _TriggerGameworldEvent(::System::Boolean open, ::System::Boolean uiClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__TRIGGERGAMEWORLDEVENT_OFFSET))(this, open, uiClick);
		}

		::System::Void _TriggerSmellGraphSystemVisionOn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__TRIGGERSMELLGRAPHSYSTEMVISIONON_OFFSET))(this);
		}

		::System::Void _TriggerSmellGraphSystemVisionOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__TRIGGERSMELLGRAPHSYSTEMVISIONOFF_OFFSET))(this);
		}

		::System::Void _SetupAutoCloseTimer(::System::Boolean overrideCloseTimer, ::System::Single closeTimer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__SETUPAUTOCLOSETIMER_OFFSET))(this, overrideCloseTimer, closeTimer);
		}

		::System::Void _TickAutoCloseTimer(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM__TICKAUTOCLOSETIMER_OFFSET))(this, dt);
		}

		::System::Boolean OpenSpecialVision(::RPG::GameCore::SpecialVisionType visionType, ::System::Boolean uiClick, ::System::Boolean overrideCloseTimer, ::System::Single closeTimer, ::System::String* visionEffectType, ::System::String* cameraEffectType, ::RPG::GameCore::GameEntity* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SpecialVisionType, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::String*, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_OPENSPECIALVISION_OFFSET))(this, visionType, uiClick, overrideCloseTimer, closeTimer, visionEffectType, cameraEffectType, target);
		}

		::System::Void ClearSpecialVision(::System::Boolean checkProtect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_CLEARSPECIALVISION_OFFSET))(this, checkProtect);
		}

		::System::Boolean CloseSpecialVision(::System::Boolean checkProtect)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_CLOSESPECIALVISION_OFFSET))(this, checkProtect);
		}

		::System::Void SetSpecialVisionEffectActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_SETSPECIALVISIONEFFECTACTIVE_OFFSET))(this, isActive);
		}

		::System::Void Tick(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_TICK_OFFSET))(this, dt);
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

		::System::Void SetCloseProtect(::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_SETCLOSEPROTECT_OFFSET))(this, flag);
		}

		::Class_1_A8EF306B45FE2EA1* get_SmellPathSystem()
		{
			return ((::Class_1_A8EF306B45FE2EA1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPECIALVISIONSYSTEM_GET_SMELLPATHSYSTEM_OFFSET))(this);
		}
	};
}
