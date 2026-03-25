#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesToastItem_Status.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_PLANETFESTOASTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x9FCE6C0)
#define RPG_CLIENT_PLANETFESTOASTITEM_FADEIN_OFFSET UNITYSDK_OFFSET(0x9FC3100)
#define RPG_CLIENT_PLANETFESTOASTITEM_FADEOUT_OFFSET UNITYSDK_OFFSET(0x9FC2EB0)
#define RPG_CLIENT_PLANETFESTOASTITEM_GET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0x9FCE7F0)
#define RPG_CLIENT_PLANETFESTOASTITEM_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x9FCE790)
#define RPG_CLIENT_PLANETFESTOASTITEM_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x9FCE7B0)
#define RPG_CLIENT_PLANETFESTOASTITEM_GET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x9FCE7D0)
#define RPG_CLIENT_PLANETFESTOASTITEM_GET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0x9FCE810)
#define RPG_CLIENT_PLANETFESTOASTITEM_GET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9FCE770)
#define RPG_CLIENT_PLANETFESTOASTITEM_HIDE_OFFSET UNITYSDK_OFFSET(0x9FC3170)
#define RPG_CLIENT_PLANETFESTOASTITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9FC2F80)
#define RPG_CLIENT_PLANETFESTOASTITEM_ISANIMATING_OFFSET UNITYSDK_OFFSET(0x9FC2E00)
#define RPG_CLIENT_PLANETFESTOASTITEM_SETPOSITIONY_OFFSET UNITYSDK_OFFSET(0x9FC2900)
#define RPG_CLIENT_PLANETFESTOASTITEM_SET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0x9FCE800)
#define RPG_CLIENT_PLANETFESTOASTITEM_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x9FCE7A0)
#define RPG_CLIENT_PLANETFESTOASTITEM_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x9FCE7C0)
#define RPG_CLIENT_PLANETFESTOASTITEM_SET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x9FCE7E0)
#define RPG_CLIENT_PLANETFESTOASTITEM_SET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0x9FCE820)
#define RPG_CLIENT_PLANETFESTOASTITEM_SET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9FCE780)
#define RPG_CLIENT_PLANETFESTOASTITEM_SHOWING_OFFSET UNITYSDK_OFFSET(0x9FC2E60)
#define RPG_CLIENT_PLANETFESTOASTITEM_STOPANIMATION_OFFSET UNITYSDK_OFFSET(0x9FCE660)
#define RPG_CLIENT_PLANETFESTOASTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9FCE830)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesToastItem_TypeDefinitionIndex = 54098;

	class PlanetFesToastItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single STAY_TIME; // 0x0
		::System::Single Padding; // 0x18
		::UnityEngine::AnimationClip* FadeOutAnimationClip; // 0x20
		::UnityEngine::AnimationClip* FadeInAnimationClip; // 0x28
		::System::Object* _UserObjectData_k__BackingField; // 0x30
		::System::Single _Height_k__BackingField; // 0x38
		::System::Single _LifeTime_k__BackingField; // 0x3C
		::System::UInt32 _PositionIndex_k__BackingField; // 0x40
		::RPG::Client::PlanetFesToastItem_Status _CurStatus_k__BackingField; // 0x44
		::System::Single _TimePoint_k__BackingField; // 0x48
		::UnityEngine::Animation* _Animation; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_INITIALIZE_OFFSET))(this);
		}

		::System::Void SetPositionY(::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SETPOSITIONY_OFFSET))(this, y);
		}

		::System::Void Showing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SHOWING_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_FADEIN_OFFSET))(this);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_FADEOUT_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_HIDE_OFFSET))(this);
		}

		::System::Boolean IsAnimating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_ISANIMATING_OFFSET))(this);
		}

		::System::Void StopAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_STOPANIMATION_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_AWAKE_OFFSET))(this);
		}

		::System::Object* get_UserObjectData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_GET_USEROBJECTDATA_OFFSET))(this);
		}

		::System::Void set_UserObjectData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SET_USEROBJECTDATA_OFFSET))(this, value);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Single get_LifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SET_LIFETIME_OFFSET))(this, value);
		}

		::System::UInt32 get_PositionIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_GET_POSITIONINDEX_OFFSET))(this);
		}

		::System::Void set_PositionIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SET_POSITIONINDEX_OFFSET))(this, value);
		}

		::RPG::Client::PlanetFesToastItem_Status get_CurStatus()
		{
			return ((::RPG::Client::PlanetFesToastItem_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_GET_CURSTATUS_OFFSET))(this);
		}

		::System::Void set_CurStatus(::RPG::Client::PlanetFesToastItem_Status value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesToastItem_Status))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SET_CURSTATUS_OFFSET))(this, value);
		}

		::System::Single get_TimePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_GET_TIMEPOINT_OFFSET))(this);
		}

		::System::Void set_TimePoint(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTOASTITEM_SET_TIMEPOINT_OFFSET))(this, value);
		}
	};
}
