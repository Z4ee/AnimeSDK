#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint; }
namespace RPG::GameCore { class LevelCurveInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LEVELCURVEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA980540)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVECLOSESTPOSANDROT_OFFSET UNITYSDK_OFFSET(0xA980D00)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVECLOSESTPOSITION_OFFSET UNITYSDK_OFFSET(0xA980F30)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVEPOSANDROT_1_OFFSET UNITYSDK_OFFSET(0xA980B70)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVEPOSANDROT_OFFSET UNITYSDK_OFFSET(0xA980790)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_FOREACHPOINT_OFFSET UNITYSDK_OFFSET(0xA9805C0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GETCURVEPOINTPOSITION_1_OFFSET UNITYSDK_OFFSET(0xA980700)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GETCURVEPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0xA980690)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0xA981300)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xA9812F0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA9812E0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA97FF70)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GET_MATH_OFFSET UNITYSDK_OFFSET(0xA981310)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0xA981320)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_HASCURVEPOINT_OFFSET UNITYSDK_OFFSET(0xA980600)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_VALIDATETANGENT_1_OFFSET UNITYSDK_OFFSET(0xA981070)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_VALIDATETANGENT_OFFSET UNITYSDK_OFFSET(0xA980A20)
#define RPG_GAMECORE_LEVELCURVEINSTANCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA97FF90)
#define RPG_GAMECORE_LEVELCURVEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xA97F8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCurveInstance_TypeDefinitionIndex = 46628;

	class LevelCurveInstance : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* _Curve; // 0x10
		::RPG::GameCore::LevelCurveInfo* _Config; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _PointNameMap; // 0x20
		::BansheeGz::BGSpline::Components::BGCcMath* _Math; // 0x28
		::System::Single _Distance_k__BackingField; // 0x30
		::System::UInt32 _GroupID_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 groupID, ::RPG::GameCore::LevelCurveInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE__CTOR_OFFSET))(this, groupID, info);
		}

		::System::Void _ctor_1(::System::UInt32 groupID, ::RPG::GameCore::LevelCurveInfo* info, ::System::Func_3<::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurve*, ::BansheeGz::BGSpline::Curve::BGCurvePoint*>* curvePointFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelCurveInfo*, ::System::Func_3<::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurve*, ::BansheeGz::BGSpline::Curve::BGCurvePoint*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE__CTOR_1_OFFSET))(this, groupID, info, curvePointFunc);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ForeachPoint()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_FOREACHPOINT_OFFSET))(this);
		}

		::System::Boolean HasCurvePoint(::System::String* pointAlias)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_HASCURVEPOINT_OFFSET))(this, pointAlias);
		}

		::System::Single GetCurvePointPosition(::System::String* pointAlias)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_GETCURVEPOINTPOSITION_OFFSET))(this, pointAlias);
		}

		::System::Single GetCurvePointPosition_1(::System::Int32 pointIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_GETCURVEPOINTPOSITION_1_OFFSET))(this, pointIndex);
		}

		::System::Boolean EvaluateCurvePosAndRot(::System::String* pointAlias, ::System::Boolean positive, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVEPOSANDROT_OFFSET))(this, pointAlias, positive, pos, rot);
		}

		::System::Void EvaluateCurvePosAndRot_1(::System::Single distance, ::System::Boolean positive, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVEPOSANDROT_1_OFFSET))(this, distance, positive, pos, rot);
		}

		::System::Void EvaluateCurveClosestPosAndRot(::UnityEngine::Vector3 inPoint, ::System::Boolean positive, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVECLOSESTPOSANDROT_OFFSET))(this, inPoint, positive, pos, rot);
		}

		::System::Single EvaluateCurveClosestPosition(::UnityEngine::Vector3 inPoint)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVECLOSESTPOSITION_OFFSET))(this, inPoint);
		}

		::System::Void ValidateTangent(::System::Single distance, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& tangent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_VALIDATETANGENT_OFFSET))(this, distance, position, tangent);
		}

		::System::Void ValidateTangent_1(::System::Int32 index, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& tangent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_VALIDATETANGENT_1_OFFSET))(this, index, position, tangent);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_GET_DISTANCE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_GET_CURVE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_Math()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_GET_MATH_OFFSET))(this);
		}

		::System::Int32 get_PointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_GET_POINTCOUNT_OFFSET))(this);
		}
	};
}
