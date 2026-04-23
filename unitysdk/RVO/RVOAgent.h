#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/RVOAgentParam.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Object.h"

namespace RVO { class RVOManager; }

#define RVO_RVOAGENT_APPLY_OFFSET UNITYSDK_OFFSET(0x8E02510)
#define RVO_RVOAGENT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x8E03000)
#define RVO_RVOAGENT_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x8E02980)
#define RVO_RVOAGENT_GET_MAXNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x8E03C60)
#define RVO_RVOAGENT_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x8E03840)
#define RVO_RVOAGENT_GET_NEIGHBORDIST_OFFSET UNITYSDK_OFFSET(0x8E03A50)
#define RVO_RVOAGENT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x8E02990)
#define RVO_RVOAGENT_GET_PREFVELOCITY_OFFSET UNITYSDK_OFFSET(0x8E02DB0)
#define RVO_RVOAGENT_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x8E03210)
#define RVO_RVOAGENT_GET_TIMEHORIZONOBST_OFFSET UNITYSDK_OFFSET(0x8E03630)
#define RVO_RVOAGENT_GET_TIMEHORIZON_OFFSET UNITYSDK_OFFSET(0x8E03420)
#define RVO_RVOAGENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x8E02BA0)
#define RVO_RVOAGENT_ONALLOC_OFFSET UNITYSDK_OFFSET(0x8E02500)
#define RVO_RVOAGENT_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x8E026D0)
#define RVO_RVOAGENT_PERTURB_OFFSET UNITYSDK_OFFSET(0x8E03E70)
#define RVO_RVOAGENT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x8E027B0)
#define RVO_RVOAGENT_SET_MAXNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x8E02930)
#define RVO_RVOAGENT_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x8E027F0)
#define RVO_RVOAGENT_SET_NEIGHBORDIST_OFFSET UNITYSDK_OFFSET(0x8E028F0)
#define RVO_RVOAGENT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x8E02730)
#define RVO_RVOAGENT_SET_PREFVELOCITY_OFFSET UNITYSDK_OFFSET(0x8E02ED0)
#define RVO_RVOAGENT_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x8E02830)
#define RVO_RVOAGENT_SET_TIMEHORIZONOBST_OFFSET UNITYSDK_OFFSET(0x8E028B0)
#define RVO_RVOAGENT_SET_TIMEHORIZON_OFFSET UNITYSDK_OFFSET(0x8E02870)
#define RVO_RVOAGENT_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x8E02770)
#define RVO_RVOAGENT_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E02970)
#define RVO_RVOAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x8E021C0)

namespace RVO
{
	inline static constexpr unsigned int RVOAgent_TypeDefinitionIndex = 41053;

	class RVOAgent : public ::System::Object
	{
	public:
		::RVO::RVOManager* _manager; // 0x10
		::System::Int32 _ID; // 0x18

		::System::Void _ctor(::RVO::RVOManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOManager*))((::PBYTE)hIl2Cpp + RVO_RVOAGENT__CTOR_OFFSET))(this, manager);
		}

		::System::Void OnAlloc(::RVO::RVOAgentParam& param)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOAgentParam&))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_ONALLOC_OFFSET))(this, param);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_ONRELEASE_OFFSET))(this);
		}

		::System::Void Apply(::RVO::RVOAgentParam& param)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOAgentParam&))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_APPLY_OFFSET))(this, param);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_ISDISPOSED_OFFSET))(this);
		}

		::RVO::Vector2 get_Position()
		{
			return ((::RVO::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::RVO::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_POSITION_OFFSET))(this, value);
		}

		::RVO::Vector2 get_Velocity()
		{
			return ((::RVO::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_Velocity(::RVO::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_VELOCITY_OFFSET))(this, value);
		}

		::RVO::Vector2 get_PrefVelocity()
		{
			return ((::RVO::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_PREFVELOCITY_OFFSET))(this);
		}

		::System::Void set_PrefVelocity(::RVO::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_PREFVELOCITY_OFFSET))(this, value);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_RADIUS_OFFSET))(this, value);
		}

		::System::Single get_TimeHorizon()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_TIMEHORIZON_OFFSET))(this);
		}

		::System::Void set_TimeHorizon(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_TIMEHORIZON_OFFSET))(this, value);
		}

		::System::Single get_TimeHorizonObst()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_TIMEHORIZONOBST_OFFSET))(this);
		}

		::System::Void set_TimeHorizonObst(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_TIMEHORIZONOBST_OFFSET))(this, value);
		}

		::System::Single get_MaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_MAXSPEED_OFFSET))(this);
		}

		::System::Void set_MaxSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_MAXSPEED_OFFSET))(this, value);
		}

		::System::Single get_NeighborDist()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_NEIGHBORDIST_OFFSET))(this);
		}

		::System::Void set_NeighborDist(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_NEIGHBORDIST_OFFSET))(this, value);
		}

		::System::Int32 get_MaxNeighbors()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_MAXNEIGHBORS_OFFSET))(this);
		}

		::System::Void set_MaxNeighbors(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_MAXNEIGHBORS_OFFSET))(this, value);
		}

		::System::Void Perturb()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_PERTURB_OFFSET))(this);
		}
	};
}
