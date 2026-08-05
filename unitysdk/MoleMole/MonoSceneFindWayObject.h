#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class FindWayObjectPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOHIDE_OFFSET UNITYSDK_OFFSET(0x144EFF40)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOREALRESET_OFFSET UNITYSDK_OFFSET(0x144F03C0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSHOW_OFFSET UNITYSDK_OFFSET(0x144EF7D0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSTARTRESET_OFFSET UNITYSDK_OFFSET(0x144EFF90)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x144F0040)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_09B5E063A8E55AF5_OFFSET UNITYSDK_OFFSET(0x144F1030)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_33C4BFBE26A21097_OFFSET UNITYSDK_OFFSET(0x144F1860)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x144EF850)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_8DF6D21677681C65_OFFSET UNITYSDK_OFFSET(0x144F2320)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_C40A3A99F1A7DDE8_OFFSET UNITYSDK_OFFSET(0x144F2660)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_CB4D39C5BA77C6F6_OFFSET UNITYSDK_OFFSET(0x144F0850)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F5586C5D862C8EF0_OFFSET UNITYSDK_OFFSET(0x144F29F0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F71C6089F0909CDF_OFFSET UNITYSDK_OFFSET(0x144F2CD0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F9B8047F726FEAA7_OFFSET UNITYSDK_OFFSET(0x144F0CF0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x144F0550)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_SETTOMAT_OFFSET UNITYSDK_OFFSET(0x144EFD60)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_UPDATEWAYPOINTSSTARTEND_OFFSET UNITYSDK_OFFSET(0x144F0690)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x144F0760)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSceneFindWayObject_TypeDefinitionIndex = 90845;

	class MonoSceneFindWayObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		// static const ::System::Single Field_7_22; // 0x0
		// static const ::System::Int32 Field_7_20 = 0x8; // 0x0
		// static const ::System::Int32 Field_7_27 = 0x6; // 0x0
		::System::Int32 wayID; // 0x28
		::Il2CppArray<::MoleMole::FindWayObjectPoint*>* wayPoints; // 0x30
		::System::String* matKey; // 0x38
		::Foundation::AssetRequestHandle Field_7_7; // 0x40
		::System::Single thickness; // 0x60
		::System::Single elbowRadius; // 0x64
		::System::Single fadeInTime; // 0x68
		::System::Single fadeOutTime; // 0x6C
		::System::String* FadeInCurveKey; // 0x70
		::System::String* FadeOutCurveKey; // 0x78
		::System::Boolean Field_7_8; // 0x80
		::UnityEngine::AnimationCurve* Field_7_15; // 0x88
		::UnityEngine::AnimationCurve* Field_7_14; // 0x90
		::System::Single Field_7_13; // 0x98
		::System::Single Field_7_12; // 0x9C
		::System::Single Field_7_19; // 0xA0
		::System::Boolean Field_7_18; // 0xA4
		::System::Boolean Field_7_17; // 0xA5
		::UnityEngine::Material* Field_7_16; // 0xA8
		::UnityEngine::Mesh* Field_7_23; // 0xB0
		::System::Boolean generateElbows; // 0xB8
		::System::Boolean avoidStrangling; // 0xB9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void DoShow(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSHOW_OFFSET))(this, a1);
		}

		::System::Void DoHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOHIDE_OFFSET))(this);
		}

		::System::Void SetToMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_SETTOMAT_OFFSET))(this);
		}

		::System::Void DoStartReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSTARTRESET_OFFSET))(this);
		}

		::System::Void DoRealReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOREALRESET_OFFSET))(this);
		}

		::System::Void DoUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void UpdateWayPointsStartEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_UPDATEWAYPOINTSSTARTEND_OFFSET))(this);
		}

		::System::Void Method_7_CB4D39C5BA77C6F6(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_CB4D39C5BA77C6F6_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_7_F9B8047F726FEAA7(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F9B8047F726FEAA7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_09B5E063A8E55AF5(::UnityEngine::Mesh* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_09B5E063A8E55AF5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_67D41ACFEF39E84E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_67D41ACFEF39E84E_OFFSET))(this);
		}

		::System::Void Method_7_8DF6D21677681C65()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_8DF6D21677681C65_OFFSET))(this);
		}

		::System::Void Method_7_33C4BFBE26A21097(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a4, ::System::Collections::Generic::List_1<::System::Int32>* a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_33C4BFBE26A21097_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void Method_7_F71C6089F0909CDF(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F71C6089F0909CDF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_7_C40A3A99F1A7DDE8(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_C40A3A99F1A7DDE8_OFFSET))(this, a1);
		}

		::System::Boolean Method_7_F5586C5D862C8EF0(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F5586C5D862C8EF0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
