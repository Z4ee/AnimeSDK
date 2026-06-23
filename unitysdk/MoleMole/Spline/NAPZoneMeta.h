#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FE72B9AC849E8D70.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Zone.h"

namespace FluffyUnderware::Curvy { class CurvyMetadataBase_Point_Empty; }
namespace FluffyUnderware::Curvy { class NearestSplinePointHelper; }
namespace MoleMole::DataStructures::Common { class Comment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define MOLEMOLE_SPLINE_NAPZONEMETA_AWAKE_OFFSET UNITYSDK_OFFSET(0x18715C90)
#define MOLEMOLE_SPLINE_NAPZONEMETA_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x18715EA0)
#define MOLEMOLE_SPLINE_NAPZONEMETA_GETUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x18715C50)
#define MOLEMOLE_SPLINE_NAPZONEMETA_GET_TAG_OFFSET UNITYSDK_OFFSET(0x18715C40)
#define MOLEMOLE_SPLINE_NAPZONEMETA_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x18715E20)
#define MOLEMOLE_SPLINE_NAPZONEMETA_METHOD_7_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x18715FD0)
#define MOLEMOLE_SPLINE_NAPZONEMETA_METHOD_7_7A8DAE462BFF8B7E_OFFSET UNITYSDK_OFFSET(0x18716430)
#define MOLEMOLE_SPLINE_NAPZONEMETA_METHOD_7_BEC24221D56EC499_OFFSET UNITYSDK_OFFSET(0x18716300)
#define MOLEMOLE_SPLINE_NAPZONEMETA_ONAFTERCREATEZONEPOINT_OFFSET UNITYSDK_OFFSET(0x18716070)
#define MOLEMOLE_SPLINE_NAPZONEMETA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18716030)
#define MOLEMOLE_SPLINE_NAPZONEMETA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18715F10)
#define MOLEMOLE_SPLINE_NAPZONEMETA_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18715DE0)
#define MOLEMOLE_SPLINE_NAPZONEMETA_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18715DA0)
#define MOLEMOLE_SPLINE_NAPZONEMETA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18715CE0)
#define MOLEMOLE_SPLINE_NAPZONEMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x187160F0)
#define MOLEMOLE_SPLINE_NAPZONEMETA___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x187162A0)
#define MOLEMOLE_SPLINE_NAPZONEMETA___BASE_GETUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x187162B0)
#define MOLEMOLE_SPLINE_NAPZONEMETA___BASE_ONAFTERCREATEZONEPOINT_OFFSET UNITYSDK_OFFSET(0x187162C0)
#define MOLEMOLE_SPLINE_NAPZONEMETA___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x187162D0)
#define MOLEMOLE_SPLINE_NAPZONEMETA___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x187162E0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPZoneMeta_TypeDefinitionIndex = 56866;

	class NAPZoneMeta : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone
	{
	public:
		::System::String* _tag; // 0x40
		::System::Boolean _hasSerialized; // 0x48
		::Enum_3_FE72B9AC849E8D70 Direction; // 0x4C
		::System::String* UniqueName; // 0x50
		::MoleMole::DataStructures::Common::Comment* Comment; // 0x58
		::FluffyUnderware::Curvy::NearestSplinePointHelper* Field_7_5; // 0x60
		::FluffyUnderware::Curvy::NearestSplinePointHelper* Field_7_6; // 0x68
		::System::Boolean Field_7_7; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* Field_7_8; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA__CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_GET_TAG_OFFSET))(this);
		}

		::System::String* GetUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_GETUNIQUENAME_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_AWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_MANUALUPDATE_OFFSET))(this);
		}

		::System::Void ForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnAfterCreateZonePoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_ONAFTERCREATEZONEPOINT_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA___BASE_AWAKE_OFFSET))(this);
		}

		::System::String* __base_GetUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA___BASE_GETUNIQUENAME_OFFSET))(this);
		}

		::System::Void __base_OnAfterCreateZonePoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA___BASE_ONAFTERCREATEZONEPOINT_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_7_BEC24221D56EC499(::FluffyUnderware::Curvy::NearestSplinePointHelper* a1, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::NearestSplinePointHelper*, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_METHOD_7_BEC24221D56EC499_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* Method_7_7A8DAE462BFF8B7E()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_METHOD_7_7A8DAE462BFF8B7E_OFFSET))(this);
		}

		::System::Void Method_7_2B66C008535F8B01()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_METHOD_7_2B66C008535F8B01_OFFSET))(this);
		}
	};
}
