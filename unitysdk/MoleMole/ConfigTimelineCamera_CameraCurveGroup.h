#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineCamera_CameraCurveItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP_GETCURVEDICT_OFFSET UNITYSDK_OFFSET(0x183E4500)
#define MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP_GETCURVE_OFFSET UNITYSDK_OFFSET(0x183E4740)
#define MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP_SETCURVE_OFFSET UNITYSDK_OFFSET(0x183E4830)
#define MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x183E4980)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTimelineCamera_CameraCurveGroup_TypeDefinitionIndex = 61107;

	class ConfigTimelineCamera_CameraCurveGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigTimelineCamera_CameraCurveItem*>* CurveList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* _curveDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* GetCurveDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP_GETCURVEDICT_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* GetCurve(::System::String* propertyName)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP_GETCURVE_OFFSET))(this, propertyName);
		}

		::System::Void SetCurve(::System::String* propertyName, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP_SETCURVE_OFFSET))(this, propertyName, curve);
		}
	};
}
