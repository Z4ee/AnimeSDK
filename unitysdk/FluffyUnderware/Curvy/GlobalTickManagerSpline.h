#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8649573A691533F8.h"

class Class_0_16E4307DCC419505;
namespace FluffyUnderware::Curvy { class CurvySplineUnityUpdater; }
namespace FluffyUnderware::Curvy::Controllers { class CurvyControllerUnityUpdater; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_3B365E645019A36F;

#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_INITDELAYREFRESHLIST_OFFSET UNITYSDK_OFFSET(0x1F86D5B0)
#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1F86D6C0)
#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F86D670)
#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F86D620)
#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F86D710)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int GlobalTickManagerSpline_TypeDefinitionIndex = 39450;

	class GlobalTickManagerSpline : public ::Class_2_8649573A691533F8<::FluffyUnderware::Curvy::GlobalTickManagerSpline*>
	{
	public:
		::Class_1_3B365E645019A36F<::FluffyUnderware::Curvy::CurvySplineUnityUpdater*>* _curvySplineUpdaters; // 0x18
		::Class_1_3B365E645019A36F<::FluffyUnderware::Curvy::Controllers::CurvyControllerUnityUpdater*>* _curvyControllerUpdaters; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE__CTOR_OFFSET))(this);
		}

		::System::Void InitDelayRefreshList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505*>* delayRefreshList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_INITDELAYREFRESHLIST_OFFSET))(this, delayRefreshList);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONFIXEDUPDATE_OFFSET))(this);
		}
	};
}
