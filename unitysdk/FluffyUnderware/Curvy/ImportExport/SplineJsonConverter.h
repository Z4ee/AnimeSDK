#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ImportExport/CurvySerializationSpace.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy::ImportExport { class SerializedCurvySpline; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER_JSONTOSERIALIZEDSPLINES_OFFSET UNITYSDK_OFFSET(0x1E3B9C20)
#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER_JSONTOSPLINES_OFFSET UNITYSDK_OFFSET(0x1E3B9AB0)
#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER_JSONTOSPLINE_OFFSET UNITYSDK_OFFSET(0x1E3BA060)
#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER_SPLINESTOJSON_OFFSET UNITYSDK_OFFSET(0x1E3B9900)
#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER_SPLINETOJSON_OFFSET UNITYSDK_OFFSET(0x1E3B99E0)

namespace FluffyUnderware::Curvy::ImportExport
{
	inline static constexpr unsigned int SplineJsonConverter_TypeDefinitionIndex = 38934;

	class SplineJsonConverter : public ::System::Object
	{
	public:
		static ::System::String* SplinesToJson(::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::CurvySpline*>* splines, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace coordinatesSpace, ::System::Boolean prettify)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::CurvySpline*>*, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER_SPLINESTOJSON_OFFSET))(splines, coordinatesSpace, prettify);
		}

		static ::System::String* SplineToJson(::FluffyUnderware::Curvy::CurvySpline* spline, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace coordinatesSpace, ::System::Boolean prettify)
		{
			return ((::System::String*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER_SPLINETOJSON_OFFSET))(spline, coordinatesSpace, prettify);
		}

		static ::Il2CppArray<::FluffyUnderware::Curvy::CurvySpline*>* JsonToSplines(::System::String* json, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace coordinatesSpace)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::CurvySpline*>*(*)(::System::String*, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER_JSONTOSPLINES_OFFSET))(json, coordinatesSpace);
		}

		static ::FluffyUnderware::Curvy::CurvySpline* JsonToSpline(::System::String* json, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace coordinatesSpace)
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::System::String*, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER_JSONTOSPLINE_OFFSET))(json, coordinatesSpace);
		}

		static ::Il2CppArray<::FluffyUnderware::Curvy::ImportExport::SerializedCurvySpline*>* JsonToSerializedSplines(::System::String* json)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::ImportExport::SerializedCurvySpline*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINEJSONCONVERTER_JSONTOSERIALIZEDSPLINES_OFFSET))(json);
		}
	};
}
