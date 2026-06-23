#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineCamera_CameraCurveItem; }
namespace System { class String; }

#define MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x115F2630)
#define MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP___C__DISPLAYCLASS4_0__SETCURVE_B__0_OFFSET UNITYSDK_OFFSET(0x115F2640)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTimelineCamera_CameraCurveGroup___c__DisplayClass4_0_TypeDefinitionIndex = 47289;

	class ConfigTimelineCamera_CameraCurveGroup___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::String* propertyName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetCurve_b__0(::MoleMole::ConfigTimelineCamera_CameraCurveItem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigTimelineCamera_CameraCurveItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINECAMERA_CAMERACURVEGROUP___C__DISPLAYCLASS4_0__SETCURVE_B__0_OFFSET))(this, x);
		}
	};
}
