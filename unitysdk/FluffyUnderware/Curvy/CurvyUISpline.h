#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvySpline.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_CURVYUISPLINE_CREATEUISPLINE_OFFSET UNITYSDK_OFFSET(0x1E0D51D0)
#define FLUFFYUNDERWARE_CURVY_CURVYUISPLINE_RESET_OFFSET UNITYSDK_OFFSET(0x1E0D5560)
#define FLUFFYUNDERWARE_CURVY_CURVYUISPLINE_SETUPUISPLINE_OFFSET UNITYSDK_OFFSET(0x1E0D54B0)
#define FLUFFYUNDERWARE_CURVY_CURVYUISPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D5630)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyUISpline_TypeDefinitionIndex = 38968;

	class CurvyUISpline : public ::FluffyUnderware::Curvy::CurvySpline
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYUISPLINE__CTOR_OFFSET))(this);
		}

		static ::FluffyUnderware::Curvy::CurvyUISpline* CreateUISpline(::System::String* gameObjectName)
		{
			return ((::FluffyUnderware::Curvy::CurvyUISpline*(*)(::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYUISPLINE_CREATEUISPLINE_OFFSET))(gameObjectName);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYUISPLINE_RESET_OFFSET))(this);
		}

		::System::Void SetupUISpline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYUISPLINE_SETUPUISPLINE_OFFSET))(this);
		}
	};
}
