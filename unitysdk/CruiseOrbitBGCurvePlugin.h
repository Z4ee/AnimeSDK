#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OrbitAreaState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_AF955E07D4ABCAF6;
class CruiseRotationNode;
namespace BansheeGz::BGSpline::Components { class BGCcTrs; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurveChangedArgs; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CRUISEORBITBGCURVEPLUGIN_APPLYARC_OFFSET UNITYSDK_OFFSET(0x16B4B400)
#define CRUISEORBITBGCURVEPLUGIN_AWAKE_OFFSET UNITYSDK_OFFSET(0x16B49660)
#define CRUISEORBITBGCURVEPLUGIN_CALCPOSITIONBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x16B4CB10)
#define CRUISEORBITBGCURVEPLUGIN_GETANGLE_OFFSET UNITYSDK_OFFSET(0x16B4AF10)
#define CRUISEORBITBGCURVEPLUGIN_GETCENTERPOS_OFFSET UNITYSDK_OFFSET(0x16B4AEA0)
#define CRUISEORBITBGCURVEPLUGIN_GETCLOSESTONARCPROJECTIONTORAY_OFFSET UNITYSDK_OFFSET(0x16B4BF50)
#define CRUISEORBITBGCURVEPLUGIN_GETCORRECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x16B4A920)
#define CRUISEORBITBGCURVEPLUGIN_GETCURRENTRATIO_OFFSET UNITYSDK_OFFSET(0x16B4D330)
#define CRUISEORBITBGCURVEPLUGIN_GETCURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x16B4D380)
#define CRUISEORBITBGCURVEPLUGIN_GETDEATHAREASTATE_OFFSET UNITYSDK_OFFSET(0x16B49EF0)
#define CRUISEORBITBGCURVEPLUGIN_GETDEATHAREATYPEBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x16B4A450)
#define CRUISEORBITBGCURVEPLUGIN_GETDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x16B4A400)
#define CRUISEORBITBGCURVEPLUGIN_GETNEARESTPOSITIONRATIO_OFFSET UNITYSDK_OFFSET(0x16B4C690)
#define CRUISEORBITBGCURVEPLUGIN_GETNEXTSTEPDISTANCEDELTA_OFFSET UNITYSDK_OFFSET(0x16B4A650)
#define CRUISEORBITBGCURVEPLUGIN_GETRAYFROMARCPOSITION_OFFSET UNITYSDK_OFFSET(0x16B4A6D0)
#define CRUISEORBITBGCURVEPLUGIN_GETRAYFROMCRICLETOARCPOSITION_OFFSET UNITYSDK_OFFSET(0x16B4A7A0)
#define CRUISEORBITBGCURVEPLUGIN_GET_FINALPOSITION_OFFSET UNITYSDK_OFFSET(0x16B4A8A0)
#define CRUISEORBITBGCURVEPLUGIN_GET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0x16B4A870)
#define CRUISEORBITBGCURVEPLUGIN_ISLEAVINGDEATHAREA_OFFSET UNITYSDK_OFFSET(0x16B4A520)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_0F2AF21BF93699B5_1_OFFSET UNITYSDK_OFFSET(0x16B4B320)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_0F2AF21BF93699B5_OFFSET UNITYSDK_OFFSET(0x16B4B290)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x16B4B4A0)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_AA43C393D46889E6_OFFSET UNITYSDK_OFFSET(0x16B4C0F0)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_AAB36E9C15D550EF_OFFSET UNITYSDK_OFFSET(0x16B4C870)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_CD6C0B4190E9DEBA_OFFSET UNITYSDK_OFFSET(0x16B4B3B0)
#define CRUISEORBITBGCURVEPLUGIN_RECALCULATECURVE_OFFSET UNITYSDK_OFFSET(0x16B498C0)
#define CRUISEORBITBGCURVEPLUGIN_REINIT_OFFSET UNITYSDK_OFFSET(0x16B49090)
#define CRUISEORBITBGCURVEPLUGIN_SETTRSPARAMS_OFFSET UNITYSDK_OFFSET(0x16B4CFF0)
#define CRUISEORBITBGCURVEPLUGIN_SET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0x16B4A890)
#define CRUISEORBITBGCURVEPLUGIN_TICK_OFFSET UNITYSDK_OFFSET(0x16B4CC30)
#define CRUISEORBITBGCURVEPLUGIN_TRANSFERROTATIONNODESTATE_OFFSET UNITYSDK_OFFSET(0x16B4D190)
#define CRUISEORBITBGCURVEPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x16B4D3D0)
#define CRUISEORBITBGCURVEPLUGIN__FINDNEXTNONDEATHSECTIONSTARTDISTANCE_OFFSET UNITYSDK_OFFSET(0x16B4AF50)

inline static constexpr unsigned int CruiseOrbitBGCurvePlugin_TypeDefinitionIndex = 45543;

class CruiseOrbitBGCurvePlugin : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single HardDeathArea; // 0x18
	::System::Single SoftDeathArea; // 0x1C
	::CruiseRotationNode* RotationNode; // 0x20
	::BansheeGz::BGSpline::Curve::BGCurve* Field_5_3; // 0x28
	::BansheeGz::BGSpline::Components::BGCcTrs* Field_5_4; // 0x30
	::UnityEngine::Vector3 Field_5_5; // 0x38
	::UnityEngine::Transform* Field_5_6; // 0x48
	::System::Single Field_5_7; // 0x50
	::Class_1_AF955E07D4ABCAF6* Field_5_8; // 0x58
	::UnityEngine::Vector3 _RawPosition_k__BackingField; // 0x60
	::System::Boolean Field_5_10; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN__CTOR_OFFSET))(this);
	}

	::System::Void ReInit(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_REINIT_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::OrbitAreaState GetDeathAreaState(::System::Single a1)
	{
		return ((::RPG::GameCore::OrbitAreaState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETDEATHAREASTATE_OFFSET))(this, a1);
	}

	::System::Boolean IsLeavingDeathArea(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_ISLEAVINGDEATHAREA_OFFSET))(this, a1);
	}

	::RPG::GameCore::OrbitAreaState GetDeathAreaTypeByDistanceRatio(::System::Single a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::OrbitAreaState(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETDEATHAREATYPEBYDISTANCERATIO_OFFSET))(this, a1, a2);
	}

	::System::Void GetRayFromArcPosition(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETRAYFROMARCPOSITION_OFFSET))(this, a1, a2, a3);
	}

	::System::Void GetRayFromCricleToArcPosition(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETRAYFROMCRICLETOARCPOSITION_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 get_RawPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GET_RAWPOSITION_OFFSET))(this);
	}

	::System::Void set_RawPosition(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_SET_RAWPOSITION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_FinalPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GET_FINALPOSITION_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetCenterPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETCENTERPOS_OFFSET))(this);
	}

	::System::Single GetAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETANGLE_OFFSET))(this);
	}

	::System::Single _FindNextNonDeathSectionStartDistance(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN__FINDNEXTNONDEATHSECTIONSTARTDISTANCE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_0F2AF21BF93699B5(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_0F2AF21BF93699B5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_0F2AF21BF93699B5_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_0F2AF21BF93699B5_1_OFFSET))(this, a1, a2);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_AWAKE_OFFSET))(this);
	}

	::System::Void RecalculateCurve()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_RECALCULATECURVE_OFFSET))(this);
	}

	::UnityEngine::Vector3 ApplyArc(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_APPLYARC_OFFSET))(this, a1);
	}

	::System::Void Method_5_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_96A53A17AC5D0E93_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetCorrectedPosition(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETCORRECTEDPOSITION_OFFSET))(this, a1);
	}

	::System::Single GetDistanceRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETDISTANCERATIO_OFFSET))(this);
	}

	::System::Single GetClosestOnArcProjectionToRay(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETCLOSESTONARCPROJECTIONTORAY_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_5_AA43C393D46889E6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_AA43C393D46889E6_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_5_AAB36E9C15D550EF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_AAB36E9C15D550EF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single GetNearestPositionRatio(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETNEARESTPOSITIONRATIO_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 CalcPositionByDistanceRatio(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_CALCPOSITIONBYDISTANCERATIO_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_TICK_OFFSET))(this, a1);
	}

	::System::Void SetTrsParams(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_SETTRSPARAMS_OFFSET))(this, a1, a2, a3);
	}

	::System::Void TransferRotationNodeState(::CruiseOrbitBGCurvePlugin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::CruiseOrbitBGCurvePlugin*))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_TRANSFERROTATIONNODESTATE_OFFSET))(this, a1);
	}

	::System::Single GetNextStepDistanceDelta(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETNEXTSTEPDISTANCEDELTA_OFFSET))(this, a1, a2);
	}

	::System::Single GetCurrentRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETCURRENTRATIO_OFFSET))(this);
	}

	::System::Single GetCurrentSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETCURRENTSPEED_OFFSET))(this);
	}

	::System::Void Method_5_CD6C0B4190E9DEBA(::System::Object* a1, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_CD6C0B4190E9DEBA_OFFSET))(this, a1, a2);
	}
};
