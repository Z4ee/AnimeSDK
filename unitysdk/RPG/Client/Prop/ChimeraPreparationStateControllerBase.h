#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1148;
class Class_1_9C1673530BBC4E15;
class Class_1_CEF50BC26E0B42E9_VirtualCameraConfig;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADE7C40)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE_INIT_OFFSET UNITYSDK_OFFSET(0xADE7B70)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xADDB300)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xADDC280)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE_ONTICK_OFFSET UNITYSDK_OFFSET(0xADE7BE0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE_SWITCHTO_OFFSET UNITYSDK_OFFSET(0xADDB580)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xADDB6B0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE__HANDLEUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xADDD8E0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE__INIT_OFFSET UNITYSDK_OFFSET(0xADDF320)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xADE7CA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraPreparationStateControllerBase_TypeDefinitionIndex = 71975;

	class ChimeraPreparationStateControllerBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_0_16E4307DCC419505_1148* _StateMachine; // 0x18
		::Class_1_9C1673530BBC4E15* _SharedContext; // 0x20
		::Class_1_CEF50BC26E0B42E9_VirtualCameraConfig* _VirtualCameraConfig; // 0x28
		::UnityEngine::Transform* _AudioListenerAnchor; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_0_16E4307DCC419505_1148* stateMachine, ::Class_1_9C1673530BBC4E15* sharedContext)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1148*, ::Class_1_9C1673530BBC4E15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE_INIT_OFFSET))(this, stateMachine, sharedContext);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE__INIT_OFFSET))(this);
		}

		::System::Void SwitchTo(::RPG::Client::Prop::ChimeraPreparationState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE_SWITCHTO_OFFSET))(this, state);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE_ONEXIT_OFFSET))(this);
		}

		::System::Void OnTick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE_ONTICK_OFFSET))(this, deltaTime);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnUIScreenSizeChanged(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE__ONUISCREENSIZECHANGED_OFFSET))(this, _);
		}

		::System::Void _HandleUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONSTATECONTROLLERBASE__HANDLEUISCREENSIZECHANGED_OFFSET))(this);
		}
	};
}
