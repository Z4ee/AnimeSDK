#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Spline.h"

namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGINBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18715BB0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18715BF0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPSplineMetaPluginBase_TypeDefinitionIndex = 41517;

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
