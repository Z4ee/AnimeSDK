#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Spline.h"

namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGINBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x191B9250)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x191B9290)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPSplineMetaPluginBase_TypeDefinitionIndex = 59050;

	class NAPSplineMetaPluginBase : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Spline
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGINBASE__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGINBASE_GET_NAME_OFFSET))(this);
		}
	};
}
