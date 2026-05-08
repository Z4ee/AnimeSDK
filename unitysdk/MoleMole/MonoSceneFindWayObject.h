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

#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOHIDE_OFFSET UNITYSDK_OFFSET(0x1702D4A0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOREALRESET_OFFSET UNITYSDK_OFFSET(0x1702D920)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSHOW_OFFSET UNITYSDK_OFFSET(0x1702CD30)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSTARTRESET_OFFSET UNITYSDK_OFFSET(0x1702D4F0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x1702D5A0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_09B5E063A8E55AF5_OFFSET UNITYSDK_OFFSET(0x1702E5A0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_3EC59EBDB116E19C_OFFSET UNITYSDK_OFFSET(0x1702EE70)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_513522A29644217D_OFFSET UNITYSDK_OFFSET(0x17030300)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x1702CDB0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_8DF6D21677681C65_OFFSET UNITYSDK_OFFSET(0x1702DDB0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_BAAE641E9BDEB492_OFFSET UNITYSDK_OFFSET(0x1702E0E0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_CCF1D6419B23EEE1_OFFSET UNITYSDK_OFFSET(0x1702FE70)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F5586C5D862C8EF0_OFFSET UNITYSDK_OFFSET(0x17030E90)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F9B8047F726FEAA7_OFFSET UNITYSDK_OFFSET(0x1702FB30)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1702DAB0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_SETTOMAT_OFFSET UNITYSDK_OFFSET(0x1702D2C0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_UPDATEWAYPOINTSSTARTEND_OFFSET UNITYSDK_OFFSET(0x1702DBF0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1702DCC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSceneFindWayObject_TypeDefinitionIndex = 67830;

	class MonoSceneFindWayObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		// static const ::System::Single Field_7_20; // 0x0
		// static const ::System::Int32 Field_7_22 = 0x8; // 0x0
		// static const ::System::Int32 Field_7_23 = 0x6; // 0x0
		::System::Int32 wayID; // 0x28
		::Il2CppArray<::MoleMole::FindWayObjectPoint*>* wayPoints; // 0x30
		::System::String* matKey; // 0x38
		::Foundation::AssetRequestHandle Field_7_3; // 0x40
		::System::Single thickness; // 0x60
		::System::Single elbowRadius; // 0x64
		::System::Single fadeInTime; // 0x68
		::System::Single fadeOutTime; // 0x6C
		::System::String* FadeInCurveKey; // 0x70
		::System::String* FadeOutCurveKey; // 0x78
		::System::Boolean Field_7_10; // 0x80
		::UnityEngine::AnimationCurve* Field_7_11; // 0x88
		::UnityEngine::AnimationCurve* Field_7_12; // 0x90
		::System::Single Field_7_13; // 0x98
		::System::Single Field_7_14; // 0x9C
		::System::Single Field_7_15; // 0xA0
		::System::Boolean Field_7_16; // 0xA4
		::System::Boolean Field_7_17; // 0xA5
		::UnityEngine::Material* Field_7_18; // 0xA8
		::UnityEngine::Mesh* Field_7_19; // 0xB0
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

		::System::Void Method_7_67D41ACFEF39E84E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_67D41ACFEF39E84E_OFFSET))(this);
		}

		::System::Void Method_7_8DF6D21677681C65()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_8DF6D21677681C65_OFFSET))(this);
		}

		::System::Void Method_7_BAAE641E9BDEB492(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_BAAE641E9BDEB492_OFFSET))(this, a1);
		}

		::System::Void Method_7_3EC59EBDB116E19C(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_3EC59EBDB116E19C_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_7_F9B8047F726FEAA7(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F9B8047F726FEAA7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_09B5E063A8E55AF5(::UnityEngine::Mesh* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_09B5E063A8E55AF5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_513522A29644217D(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a4, ::System::Collections::Generic::List_1<::System::Int32>* a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_513522A29644217D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void Method_7_CCF1D6419B23EEE1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_CCF1D6419B23EEE1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_7_F5586C5D862C8EF0(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_METHOD_7_F5586C5D862C8EF0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
