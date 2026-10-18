#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }

#define RPG_CLIENT_AIRLINE_AWAKE_OFFSET UNITYSDK_OFFSET(0xC636D00)
#define RPG_CLIENT_AIRLINE_GETCLOSETPOINT_OFFSET UNITYSDK_OFFSET(0xC636500)
#define RPG_CLIENT_AIRLINE_GETCLOSETPOSITION_OFFSET UNITYSDK_OFFSET(0xC636380)
#define RPG_CLIENT_AIRLINE_GETPOINTPOSANDTANGENT_OFFSET UNITYSDK_OFFSET(0xC636A10)
#define RPG_CLIENT_AIRLINE_GETPOINTPOS_OFFSET UNITYSDK_OFFSET(0xC636B70)
#define RPG_CLIENT_AIRLINE_GETPOINTTANGENT_OFFSET UNITYSDK_OFFSET(0xC636960)
#define RPG_CLIENT_AIRLINE_GETPOINT_OFFSET UNITYSDK_OFFSET(0xC636C90)
#define RPG_CLIENT_AIRLINE_GET_ISLINECURVEINVALID_OFFSET UNITYSDK_OFFSET(0xC636110)
#define RPG_CLIENT_AIRLINE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xC636200)
#define RPG_CLIENT_AIRLINE_ISINLINECURVEPOINTRANGE_OFFSET UNITYSDK_OFFSET(0xC636190)
#define RPG_CLIENT_AIRLINE_METHOD_5_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0xC636220)
#define RPG_CLIENT_AIRLINE_METHOD_5_9803DB6CC606FD86_OFFSET UNITYSDK_OFFSET(0xC6366D0)
#define RPG_CLIENT_AIRLINE_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0xC636210)
#define RPG_CLIENT_AIRLINE__CTOR_OFFSET UNITYSDK_OFFSET(0xC636DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int Airline_TypeDefinitionIndex = 59765;

	class Airline : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* lineCurve; // 0x18
		::System::Single _Length_k__BackingField; // 0x20
		::BansheeGz::BGSpline::Components::BGCcMath* FEBODGEEPFP; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsLineCurveInValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GET_ISLINECURVEINVALID_OFFSET))(this);
		}

		::System::Boolean IsInLineCurvePointRange(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_ISINLINECURVEPOINTRANGE_OFFSET))(this, a1);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_SET_LENGTH_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_0EB2899F45F512FE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_METHOD_5_0EB2899F45F512FE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetClosetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GETCLOSETPOSITION_OFFSET))(this, a1);
		}

		::System::Single GetClosetPoint(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GETCLOSETPOINT_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetPointTangent(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GETPOINTTANGENT_OFFSET))(this, a1);
		}

		::System::Void GetPointPosAndTangent(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GETPOINTPOSANDTANGENT_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetPointPos(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GETPOINTPOS_OFFSET))(this, a1);
		}

		::System::Single GetPoint(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_GETPOINT_OFFSET))(this, a1);
		}

		::System::Void Method_5_9803DB6CC606FD86(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_METHOD_5_9803DB6CC606FD86_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINE_AWAKE_OFFSET))(this);
		}
	};
}
