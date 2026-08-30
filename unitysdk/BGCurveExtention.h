#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CurveTwirlType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CurveEulerAngle;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define BGCURVEEXTENTION_GETCLOSESTPOSITIONINFO_OFFSET UNITYSDK_OFFSET(0x14C32BF0)
#define BGCURVEEXTENTION_GETDISTANCE_1_OFFSET UNITYSDK_OFFSET(0x14C320F0)
#define BGCURVEEXTENTION_GETDISTANCE_OFFSET UNITYSDK_OFFSET(0x14C32090)
#define BGCURVEEXTENTION_GETLENGTHBYSTARTEND_OFFSET UNITYSDK_OFFSET(0x14C33210)
#define BGCURVEEXTENTION_GETNORMALBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x14C32D90)
#define BGCURVEEXTENTION_GETPOSITIONBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x14C323C0)
#define BGCURVEEXTENTION_GETPOSITIONINFOBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x14C32150)
#define BGCURVEEXTENTION_GETQUATERNIONBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x14C32B30)
#define BGCURVEEXTENTION_GETTANGENTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x14C32AA0)
#define BGCURVEEXTENTION_GETTWIRLANGLEBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x14C33B30)
#define BGCURVEEXTENTION_GETTWIRLTYPEBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x14C330C0)
#define BGCURVEEXTENTION_GET_CURBGCURVE_OFFSET UNITYSDK_OFFSET(0x14C31DB0)
#define BGCURVEEXTENTION_METHOD_5_0A7E3B5497F578CD_OFFSET UNITYSDK_OFFSET(0x14C31E60)
#define BGCURVEEXTENTION_METHOD_5_6B80A6E41CC40DCF_OFFSET UNITYSDK_OFFSET(0x14C33E10)
#define BGCURVEEXTENTION_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x14C31FF0)
#define BGCURVEEXTENTION__CTOR_OFFSET UNITYSDK_OFFSET(0x14C33EC0)

inline static constexpr unsigned int BGCurveExtention_TypeDefinitionIndex = 47726;

class BGCurveExtention : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::CurveEulerAngle*>* EulerChanges; // 0x18
	::BansheeGz::BGSpline::Curve::BGCurve* MGEIOLNGKAJ; // 0x20
	::BansheeGz::BGSpline::Components::BGCcMath* OIGJNAIAEDJ; // 0x28
	::System::Single RoadWidth; // 0x30
	::System::Single RoadDistance; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION__CTOR_OFFSET))(this);
	}

	::BansheeGz::BGSpline::Curve::BGCurve* get_CurBGCurve()
	{
		return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_GET_CURBGCURVE_OFFSET))(this);
	}

	::BansheeGz::BGSpline::Components::BGCcMath* Method_5_0A7E3B5497F578CD()
	{
		return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_METHOD_5_0A7E3B5497F578CD_OFFSET))(this);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}

	::System::Single GetDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_GETDISTANCE_OFFSET))(this);
	}

	::System::Single GetDistance_1(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_GETDISTANCE_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 GetPositionInfoByDistance(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_GETPOSITIONINFOBYDISTANCE_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 GetClosestPositionInfo(::UnityEngine::Vector3 a1, ::System::Single& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_GETCLOSESTPOSITIONINFO_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 GetNormalByDistance(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_GETNORMALBYDISTANCE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 GetTangentByDistance(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_GETTANGENTBYDISTANCE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 GetPositionByDistance(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_GETPOSITIONBYDISTANCE_OFFSET))(this, a1);
	}

	::System::Single GetLengthByStartEnd(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_GETLENGTHBYSTARTEND_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion GetQuaternionByDistance(::System::Single a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_GETQUATERNIONBYDISTANCE_OFFSET))(this, a1);
	}

	::System::Single GetTwirlAngleByDistance(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_GETTWIRLANGLEBYDISTANCE_OFFSET))(this, a1);
	}

	::CurveTwirlType GetTwirlTypeByDistance(::System::Single a1)
	{
		return ((::CurveTwirlType(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_GETTWIRLTYPEBYDISTANCE_OFFSET))(this, a1);
	}

	::System::Single Method_5_6B80A6E41CC40DCF(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + BGCURVEEXTENTION_METHOD_5_6B80A6E41CC40DCF_OFFSET))(this, a1, a2, a3, a4);
	}
};
