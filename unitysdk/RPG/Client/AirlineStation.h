#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Airline.h"
#include "unitysdk/RPG/Client/EAirlineMoorState.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_20A9882BBF853CEE;
class Class_1_54124C7961E65E42;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRLINESTATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x9CE9680)
#define RPG_CLIENT_AIRLINESTATION_GETCURRENTTRANSITIONPOSITION_OFFSET UNITYSDK_OFFSET(0x9CE9560)
#define RPG_CLIENT_AIRLINESTATION_GET_AIRSHIP_OFFSET UNITYSDK_OFFSET(0x9CE77A0)
#define RPG_CLIENT_AIRLINESTATION_GET_ISMOOREDSTATE_OFFSET UNITYSDK_OFFSET(0x9CE7BC0)
#define RPG_CLIENT_AIRLINESTATION_GET_ISMOORINGTRANSITION_OFFSET UNITYSDK_OFFSET(0x9CE77B0)
#define RPG_CLIENT_AIRLINESTATION_GET_MOORENTERPOINT_OFFSET UNITYSDK_OFFSET(0x9CE7970)
#define RPG_CLIENT_AIRLINESTATION_GET_MOOREXITPOINT_OFFSET UNITYSDK_OFFSET(0x9CE7A30)
#define RPG_CLIENT_AIRLINESTATION_GET_REQUESTBACK_OFFSET UNITYSDK_OFFSET(0x9CE7B50)
#define RPG_CLIENT_AIRLINESTATION_GET_REQUESTMOOR_OFFSET UNITYSDK_OFFSET(0x9CE7AF0)
#define RPG_CLIENT_AIRLINESTATION_INIT_OFFSET UNITYSDK_OFFSET(0x9CE7C10)
#define RPG_CLIENT_AIRLINESTATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9CE9A60)
#define RPG_CLIENT_AIRLINESTATION_SETAIRSHIP_OFFSET UNITYSDK_OFFSET(0x9CE7C90)
#define RPG_CLIENT_AIRLINESTATION_TICK_OFFSET UNITYSDK_OFFSET(0x9CE7DF0)
#define RPG_CLIENT_AIRLINESTATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x9CE9B40)
#define RPG_CLIENT_AIRLINESTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x9CE9AC0)
#define RPG_CLIENT_AIRLINESTATION___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x9CE9C20)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineStation_TypeDefinitionIndex = 55139;

	class AirlineStation : public ::RPG::Client::Airline
	{
	public:
		static ::UnityEngine::AnimationCurve** StaticGet_LerpCurve()
		{
			return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(AirlineStation_TypeDefinitionIndex)->GetStaticField(0x27FE0);
		}
		::System::Boolean isMoorHorizontal; // 0x30
		::System::Int32 moorEnterPointIndex; // 0x34
		::System::Int32 moorTransitionEnterPointIndex; // 0x38
		::System::Int32 moorExitPointIndex; // 0x3C
		::System::Int32 moorTransitionExitPointIndex; // 0x40
		::UnityEngine::AnimationCurve* mooredToStationTiltCurve; // 0x48
		::UnityEngine::AnimationCurve* enterStationVerticalTiltCurve; // 0x50
		::UnityEngine::AnimationCurve* exitStationVerticalTiltCurve; // 0x58
		::UnityEngine::Transform* stationPoint; // 0x60
		::System::Single mooredToStationDuration; // 0x68
		::System::Single stationWaitDuration; // 0x6C
		::System::Single mooredStopEventNormalizedTime; // 0x70
		::UnityEngine::AnimationCurve* mooredEnterStationCurve; // 0x78
		::UnityEngine::AnimationCurve* mooredExitStationCurve; // 0x80
		::UnityEngine::Vector2 mooringRequestTimeRange; // 0x88
		::Class_1_54124C7961E65E42* Field_6_16; // 0x90
		::System::Single Field_6_17; // 0x98
		::System::Single Field_6_18; // 0x9C
		::System::Single Field_6_19; // 0xA0
		::RPG::Client::EAirlineMoorState Field_6_20; // 0xA4
		::Class_1_20A9882BBF853CEE* Field_6_21; // 0xA8
		::System::Single Field_6_22; // 0xB0
		::System::Single Field_6_23; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION__CCTOR_OFFSET))();
		}

		::Class_1_20A9882BBF853CEE* get_Airship()
		{
			return ((::Class_1_20A9882BBF853CEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_GET_AIRSHIP_OFFSET))(this);
		}

		::System::Boolean get_IsMooringTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_GET_ISMOORINGTRANSITION_OFFSET))(this);
		}

		::System::Single get_MoorEnterPoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_GET_MOORENTERPOINT_OFFSET))(this);
		}

		::System::Single get_MoorExitPoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_GET_MOOREXITPOINT_OFFSET))(this);
		}

		::System::Boolean get_RequestMoor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_GET_REQUESTMOOR_OFFSET))(this);
		}

		::System::Boolean get_RequestBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_GET_REQUESTBACK_OFFSET))(this);
		}

		::System::Boolean get_IsMooredState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_GET_ISMOOREDSTATE_OFFSET))(this);
		}

		::System::Void Init(::Class_1_54124C7961E65E42* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_54124C7961E65E42*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAirship(::Class_1_20A9882BBF853CEE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_20A9882BBF853CEE*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_SETAIRSHIP_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCurrentTransitionPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_GETCURRENTTRANSITIONPOSITION_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_ONDESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}
	};
}
