#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8649573A691533F8.h"

class Class_0_16E4307DCC419505_2;
namespace FluffyUnderware::Curvy { class CurvySplineUnityUpdater; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_3B365E645019A36F;

#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_INITDELAYREFRESHLIST_OFFSET UNITYSDK_OFFSET(0x1E451C20)
#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E451CF0)
#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E451CB0)
#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E451C70)
#define FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E451D30)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int GlobalTickManagerSpline_TypeDefinitionIndex = 39022;

	class GlobalTickManagerSpline : public ::Class_2_8649573A691533F8<::FluffyUnderware::Curvy::GlobalTickManagerSpline*>
	{
	public:
		::Class_1_3B365E645019A36F<::FluffyUnderware::Curvy::CurvySplineUnityUpdater*>* _curvySplineUpdaters; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE__CTOR_OFFSET))(this);
		}

		::System::Void InitDelayRefreshList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_2*>* delayRefreshList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_2*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GLOBALTICKMANAGERSPLINE_INITDELAYREFRESHLIST_OFFSET))(this, delayRefreshList);
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
