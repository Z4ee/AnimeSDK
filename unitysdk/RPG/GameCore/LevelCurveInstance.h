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

#define RPG_GAMECORE_LEVELCURVEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DD1A1B0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVECLOSESTPOSANDROT_OFFSET UNITYSDK_OFFSET(0x1DD1A9E0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVECLOSESTPOSITION_OFFSET UNITYSDK_OFFSET(0x1DD1AC10)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVEPOSANDROT_1_OFFSET UNITYSDK_OFFSET(0x1DD1A880)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVEPOSANDROT_OFFSET UNITYSDK_OFFSET(0x1DD1A4B0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_FOREACHPOINT_OFFSET UNITYSDK_OFFSET(0x1DD1A230)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GETCURVEPOINTPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1DD1A3C0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GETCURVEPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x1DD1A300)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x1DD1AFE0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1DD1AFD0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1DD1AFC0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1DD19BD0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GET_MATH_OFFSET UNITYSDK_OFFSET(0x1DD1AFF0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DD1B000)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_HASCURVEPOINT_OFFSET UNITYSDK_OFFSET(0x1DD1A270)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_VALIDATETANGENT_1_OFFSET UNITYSDK_OFFSET(0x1DD1AD50)
#define RPG_GAMECORE_LEVELCURVEINSTANCE_VALIDATETANGENT_OFFSET UNITYSDK_OFFSET(0x1DD1A6D0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD19BF0)
#define RPG_GAMECORE_LEVELCURVEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD19560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCurveInstance_TypeDefinitionIndex = 57996;

	class LevelCurveInstance : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* _Curve; // 0x10
		::RPG::GameCore::LevelCurveInfo* _Config; // 0x18
		::BansheeGz::BGSpline::Components::BGCcMath* _Math; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _PointNameMap; // 0x28
		::System::Single _Distance_k__BackingField; // 0x30
		::System::UInt32 _GroupID_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::LevelCurveInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::RPG::GameCore::LevelCurveInfo* a2, ::System::Func_3<::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurve*, ::BansheeGz::BGSpline::Curve::BGCurvePoint*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelCurveInfo*, ::System::Func_3<::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurve*, ::BansheeGz::BGSpline::Curve::BGCurvePoint*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ForeachPoint()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_FOREACHPOINT_OFFSET))(this);
		}

		::System::Boolean HasCurvePoint(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_HASCURVEPOINT_OFFSET))(this, a1);
		}

		::System::Single GetCurvePointPosition(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_GETCURVEPOINTPOSITION_OFFSET))(this, a1);
		}

		::System::Single GetCurvePointPosition_1(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_GETCURVEPOINTPOSITION_1_OFFSET))(this, a1);
		}

		::System::Boolean EvaluateCurvePosAndRot(::System::String* a1, ::System::Boolean a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVEPOSANDROT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EvaluateCurvePosAndRot_1(::System::Single a1, ::System::Boolean a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVEPOSANDROT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EvaluateCurveClosestPosAndRot(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVECLOSESTPOSANDROT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single EvaluateCurveClosestPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_EVALUATECURVECLOSESTPOSITION_OFFSET))(this, a1);
		}

		::System::Void ValidateTangent(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_VALIDATETANGENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ValidateTangent_1(::System::Int32 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCURVEINSTANCE_VALIDATETANGENT_1_OFFSET))(this, a1, a2, a3);
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
