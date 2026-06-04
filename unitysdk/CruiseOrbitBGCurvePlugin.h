#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OrbitAreaState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_AF955E07D4ABCAF6;
namespace BansheeGz::BGSpline::Components { class BGCcTrs; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurveChangedArgs; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CRUISEORBITBGCURVEPLUGIN_APPLYARC_OFFSET UNITYSDK_OFFSET(0xC757950)
#define CRUISEORBITBGCURVEPLUGIN_AWAKE_OFFSET UNITYSDK_OFFSET(0xC757670)
#define CRUISEORBITBGCURVEPLUGIN_CALCPOSITIONBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0xC758F50)
#define CRUISEORBITBGCURVEPLUGIN_GETANGLE_OFFSET UNITYSDK_OFFSET(0xC757180)
#define CRUISEORBITBGCURVEPLUGIN_GETCENTERPOS_OFFSET UNITYSDK_OFFSET(0xC757110)
#define CRUISEORBITBGCURVEPLUGIN_GETCLOSESTONARCPROJECTIONTORAY_OFFSET UNITYSDK_OFFSET(0xC7581F0)
#define CRUISEORBITBGCURVEPLUGIN_GETCURRENTRATIO_OFFSET UNITYSDK_OFFSET(0xC759410)
#define CRUISEORBITBGCURVEPLUGIN_GETCURRENTSPEED_OFFSET UNITYSDK_OFFSET(0xC759460)
#define CRUISEORBITBGCURVEPLUGIN_GETDEATHAREASTATE_OFFSET UNITYSDK_OFFSET(0xC756DA0)
#define CRUISEORBITBGCURVEPLUGIN_GETDEATHAREATYPEBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0xC756F40)
#define CRUISEORBITBGCURVEPLUGIN_GETDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0xC756EF0)
#define CRUISEORBITBGCURVEPLUGIN_GETNEARESTPOSITIONRATIO_OFFSET UNITYSDK_OFFSET(0xC758A00)
#define CRUISEORBITBGCURVEPLUGIN_GETNEXTSTEPDISTANCEDELTA_OFFSET UNITYSDK_OFFSET(0xC759390)
#define CRUISEORBITBGCURVEPLUGIN_GETRAYFROMARCPOSITION_OFFSET UNITYSDK_OFFSET(0xC757010)
#define CRUISEORBITBGCURVEPLUGIN_GET_FINALPOSITION_OFFSET UNITYSDK_OFFSET(0xC7570E0)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_0F2AF21BF93699B5_1_OFFSET UNITYSDK_OFFSET(0xC7575E0)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_0F2AF21BF93699B5_OFFSET UNITYSDK_OFFSET(0xC757550)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_218124418542E081_OFFSET UNITYSDK_OFFSET(0xC7579F0)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_73B2F7CAF334D84C_OFFSET UNITYSDK_OFFSET(0xC758390)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_AAB36E9C15D550EF_OFFSET UNITYSDK_OFFSET(0xC758CB0)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_CD6C0B4190E9DEBA_OFFSET UNITYSDK_OFFSET(0xC757900)
#define CRUISEORBITBGCURVEPLUGIN_RECALCULATECURVE_OFFSET UNITYSDK_OFFSET(0xC756860)
#define CRUISEORBITBGCURVEPLUGIN_REINIT_OFFSET UNITYSDK_OFFSET(0xC756360)
#define CRUISEORBITBGCURVEPLUGIN_SETTRSPARAMS_OFFSET UNITYSDK_OFFSET(0xC7592B0)
#define CRUISEORBITBGCURVEPLUGIN_SET_FINALPOSITION_OFFSET UNITYSDK_OFFSET(0xC757100)
#define CRUISEORBITBGCURVEPLUGIN_TICK_OFFSET UNITYSDK_OFFSET(0xC7590B0)
#define CRUISEORBITBGCURVEPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xC7594B0)
#define CRUISEORBITBGCURVEPLUGIN__FINDNEXTNONDEATHSECTIONSTARTDISTANCE_OFFSET UNITYSDK_OFFSET(0xC7571C0)

inline static constexpr unsigned int CruiseOrbitBGCurvePlugin_TypeDefinitionIndex = 44663;

class CruiseOrbitBGCurvePlugin : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single HardDeathArea; // 0x18
	::System::Single SoftDeathArea; // 0x1C
	::BansheeGz::BGSpline::Curve::BGCurve* Field_5_2; // 0x20
	::BansheeGz::BGSpline::Components::BGCcTrs* Field_5_3; // 0x28
	::UnityEngine::Vector3 Field_5_4; // 0x30
	::UnityEngine::Transform* Field_5_5; // 0x40
	::System::Single Field_5_6; // 0x48
	::Class_1_AF955E07D4ABCAF6* Field_5_7; // 0x50
	::UnityEngine::Vector3 _FinalPosition_k__BackingField; // 0x58
	::System::Boolean Field_5_9; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN__CTOR_OFFSET))(this);
	}

	::System::Void ReInit(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_REINIT_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::OrbitAreaState GetDeathAreaState()
	{
		return ((::RPG::GameCore::OrbitAreaState(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETDEATHAREASTATE_OFFSET))(this);
	}

	::RPG::GameCore::OrbitAreaState GetDeathAreaTypeByDistanceRatio(::System::Single a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::OrbitAreaState(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETDEATHAREATYPEBYDISTANCERATIO_OFFSET))(this, a1, a2);
	}

	::System::Void GetRayFromArcPosition(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETRAYFROMARCPOSITION_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 get_FinalPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GET_FINALPOSITION_OFFSET))(this);
	}

	::System::Void set_FinalPosition(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_SET_FINALPOSITION_OFFSET))(this, a1);
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

	::System::Void Method_5_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_218124418542E081_OFFSET))(this);
	}

	::System::Single GetDistanceRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETDISTANCERATIO_OFFSET))(this);
	}

	::System::Single GetClosestOnArcProjectionToRay(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETCLOSESTONARCPROJECTIONTORAY_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_5_73B2F7CAF334D84C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_73B2F7CAF334D84C_OFFSET))(this, a1, a2, a3);
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
