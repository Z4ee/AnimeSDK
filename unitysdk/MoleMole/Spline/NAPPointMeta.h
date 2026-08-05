#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FE72B9AC849E8D70.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Point.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySplineEventArgs; }
namespace FluffyUnderware::Curvy { class NearestSplinePointHelper; }
namespace MoleMole::DataStructures::Common { class Comment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define MOLEMOLE_SPLINE_NAPPOINTMETA_AWAKE_OFFSET UNITYSDK_OFFSET(0x190B5410)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x190B5800)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_GETUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x190B53D0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_GET_TAG_OFFSET UNITYSDK_OFFSET(0x190B53C0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x190B5700)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_METHOD_7_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x190B6160)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_METHOD_7_7A8DAE462BFF8B7E_OFFSET UNITYSDK_OFFSET(0x190B6000)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_METHOD_7_7AD45F2239746CAB_OFFSET UNITYSDK_OFFSET(0x190B6140)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_METHOD_7_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x190B5AC0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x190B5C90)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x190B58F0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x190B5620)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x190B5540)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x190B5460)
#define MOLEMOLE_SPLINE_NAPPOINTMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x190B5E60)
#define MOLEMOLE_SPLINE_NAPPOINTMETA___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x190B5FB0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA___BASE_GETUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x190B5FC0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x190B5FD0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x190B5FE0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPPointMeta_TypeDefinitionIndex = 76103;

	class NAPPointMeta : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Point
	{
	public:
		::System::String* _tag; // 0x50
		::System::Boolean _hasSerialized; // 0x58
		::Enum_3_FE72B9AC849E8D70 Direction; // 0x5C
		::System::String* UniqueName; // 0x60
		::MoleMole::DataStructures::Common::Comment* Comment; // 0x68
		::FluffyUnderware::Curvy::NearestSplinePointHelper* Field_7_6; // 0x70
		::System::Boolean Field_7_5; // 0x78
		::UnityEngine::Vector3 Field_7_4; // 0x7C
		::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* Field_7_11; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA__CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_GET_TAG_OFFSET))(this);
		}

		::System::String* GetUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_GETUNIQUENAME_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_AWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_MANUALUPDATE_OFFSET))(this);
		}

		::System::Void ForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA___BASE_AWAKE_OFFSET))(this);
		}

		::System::String* __base_GetUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA___BASE_GETUNIQUENAME_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* Method_7_7A8DAE462BFF8B7E()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_METHOD_7_7A8DAE462BFF8B7E_OFFSET))(this);
		}

		::System::Void Method_7_7AD45F2239746CAB(::FluffyUnderware::Curvy::CurvySplineEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineEventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_METHOD_7_7AD45F2239746CAB_OFFSET))(this, a1);
		}

		::System::Void Method_7_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_METHOD_7_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_7_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_METHOD_7_4E8DF6F8A37B229A_OFFSET))(this, a1);
		}
	};
}
