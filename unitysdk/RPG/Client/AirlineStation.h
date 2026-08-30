#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Airline.h"
#include "unitysdk/RPG/Client/EAirlineMoorState.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_083521F7486609FD;
class Class_1_5F439A66B759DFD0;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRLINESTATION_AWAKE_OFFSET UNITYSDK_OFFSET(0xC721F40)
#define RPG_CLIENT_AIRLINESTATION_GETCURRENTTRANSITIONPOSITION_OFFSET UNITYSDK_OFFSET(0xC721E40)
#define RPG_CLIENT_AIRLINESTATION_GET_AIRSHIP_OFFSET UNITYSDK_OFFSET(0xC71FDE0)
#define RPG_CLIENT_AIRLINESTATION_GET_ISMOOREDSTATE_OFFSET UNITYSDK_OFFSET(0xC720180)
#define RPG_CLIENT_AIRLINESTATION_GET_ISMOORINGTRANSITION_OFFSET UNITYSDK_OFFSET(0xC71FDF0)
#define RPG_CLIENT_AIRLINESTATION_GET_MOORENTERPOINT_OFFSET UNITYSDK_OFFSET(0xC71FF70)
#define RPG_CLIENT_AIRLINESTATION_GET_MOOREXITPOINT_OFFSET UNITYSDK_OFFSET(0xC720010)
#define RPG_CLIENT_AIRLINESTATION_GET_REQUESTBACK_OFFSET UNITYSDK_OFFSET(0xC720110)
#define RPG_CLIENT_AIRLINESTATION_GET_REQUESTMOOR_OFFSET UNITYSDK_OFFSET(0xC7200B0)
#define RPG_CLIENT_AIRLINESTATION_INIT_OFFSET UNITYSDK_OFFSET(0xC7201D0)
#define RPG_CLIENT_AIRLINESTATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC722320)
#define RPG_CLIENT_AIRLINESTATION_SETAIRSHIP_OFFSET UNITYSDK_OFFSET(0xC720250)
#define RPG_CLIENT_AIRLINESTATION_TICK_OFFSET UNITYSDK_OFFSET(0xC720360)
#define RPG_CLIENT_AIRLINESTATION__CCTOR_OFFSET UNITYSDK_OFFSET(0xC7224E0)
#define RPG_CLIENT_AIRLINESTATION__CTOR_OFFSET UNITYSDK_OFFSET(0xC722380)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineStation_TypeDefinitionIndex = 59904;

	class AirlineStation : public ::RPG::Client::Airline
	{
	public:
		static ::UnityEngine::AnimationCurve** StaticGet_LerpCurve()
		{
			return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(AirlineStation_TypeDefinitionIndex)->GetStaticField(0x651C0);
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
		::Class_1_083521F7486609FD* JFJPIBHCGNK; // 0x90
		::System::Single LBBIIBDKOKI; // 0x98
		::System::Single EKBLJDFIHAC; // 0x9C
		::System::Single ANCCFCLMLKH; // 0xA0
		::RPG::Client::EAirlineMoorState FPGLMKDOPPG; // 0xA4
		::Class_1_5F439A66B759DFD0* EHHCPMFKNKP; // 0xA8
		::System::Single EHKCBIBNLHK; // 0xB0
		::System::Single FBMHAAKGMPJ; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION__CCTOR_OFFSET))();
		}

		::Class_1_5F439A66B759DFD0* get_Airship()
		{
			return ((::Class_1_5F439A66B759DFD0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_GET_AIRSHIP_OFFSET))(this);
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

		::System::Void Init(::Class_1_083521F7486609FD* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_083521F7486609FD*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAirship(::Class_1_5F439A66B759DFD0* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F439A66B759DFD0*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINESTATION_SETAIRSHIP_OFFSET))(this, a1, a2);
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
	};
}
