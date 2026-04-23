#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_2FE60955EA74184C;
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace UnityEngine::EventSystems { class AxisEventData; }

#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_8FEFFCD15B56B2B6_OFFSET UNITYSDK_OFFSET(0xA9BA3A0)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_9D967D80C41C7781_1_OFFSET UNITYSDK_OFFSET(0xA9BA570)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_9D967D80C41C7781_OFFSET UNITYSDK_OFFSET(0xA9BA440)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_ECC5A0EE2919D8A0_OFFSET UNITYSDK_OFFSET(0xA9BA490)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA9BA1E0)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_ONMOVE_OFFSET UNITYSDK_OFFSET(0xA9BA320)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_START_OFFSET UNITYSDK_OFFSET(0xA9BA0A0)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0xA9BA5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEraFlipperSearchLight_TypeDefinitionIndex = 63560;

	class MonoEraFlipperSearchLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single SwipeMinDistance; // 0x18
		::Class_1_2FE60955EA74184C* Field_5_1; // 0x20

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

		::System::Void Method_5_ECC5A0EE2919D8A0(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_ECC5A0EE2919D8A0_OFFSET))(this, a1);
		}

		::System::Void Method_5_9D967D80C41C7781_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_METHOD_5_9D967D80C41C7781_1_OFFSET))(this, a1);
		}
	};
}
