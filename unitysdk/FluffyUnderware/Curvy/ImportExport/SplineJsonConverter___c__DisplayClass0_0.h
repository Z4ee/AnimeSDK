#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ImportExport/CurvySerializationSpace.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy::ImportExport { class SerializedCurvySpline; }

#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCE0290)
#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER___C__DISPLAYCLASS0_0__SPLINESTOJSON_B__0_OFFSET UNITYSDK_OFFSET(0x1BCE02A0)

namespace FluffyUnderware::Curvy::ImportExport
{
	inline static constexpr unsigned int SplineJsonConverter___c__DisplayClass0_0_TypeDefinitionIndex = 37265;

	class SplineJsonConverter___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace coordinatesSpace; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::ImportExport::SerializedCurvySpline* _SplinesToJson_b__0(::FluffyUnderware::Curvy::CurvySpline* s)
		{
			return ((::FluffyUnderware::Curvy::ImportExport::SerializedCurvySpline*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER___C__DISPLAYCLASS0_0__SPLINESTOJSON_B__0_OFFSET))(this, s);
		}
	};
}
