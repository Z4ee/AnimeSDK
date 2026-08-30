#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_8911A6DB4DFF0DFE;
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace UnityEngine::EventSystems { class AxisEventData; }

#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_8FEFFCD15B56B2B6_OFFSET UNITYSDK_OFFSET(0xD7E2BC0)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_9D967D80C41C7781_1_OFFSET UNITYSDK_OFFSET(0xD7E2D80)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_9D967D80C41C7781_OFFSET UNITYSDK_OFFSET(0xD7E2C60)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_F2ECB60E4FF37B93_OFFSET UNITYSDK_OFFSET(0xD7E2CB0)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD7E29D0)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_ONMOVE_OFFSET UNITYSDK_OFFSET(0xD7E2B40)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_START_OFFSET UNITYSDK_OFFSET(0xD7E2860)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E2DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEraFlipperSearchLight_TypeDefinitionIndex = 68919;

	class MonoEraFlipperSearchLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single SwipeMinDistance; // 0x18
		::Class_1_8911A6DB4DFF0DFE* NFPKMFGMCIC; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_ONMOVE_OFFSET))(this, a1);
		}

		::System::Void Method_5_8FEFFCD15B56B2B6(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_8FEFFCD15B56B2B6_OFFSET))(this, a1);
		}

		::System::Void Method_5_9D967D80C41C7781(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_9D967D80C41C7781_OFFSET))(this, a1);
		}

		::System::Void Method_5_F2ECB60E4FF37B93(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_F2ECB60E4FF37B93_OFFSET))(this, a1);
		}

		::System::Void Method_5_9D967D80C41C7781_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_9D967D80C41C7781_1_OFFSET))(this, a1);
		}
	};
}
