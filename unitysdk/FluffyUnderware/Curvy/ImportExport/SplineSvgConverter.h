#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ImportExport/CurvySerializationSpace.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Matrix2D.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy::ImportExport { class SerializedCurvySpline; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SceneNode; }

#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINESVGCONVERTER_DRAWNODE_OFFSET UNITYSDK_OFFSET(0x1C17C940)
#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINESVGCONVERTER_SVGTOSERIALIZEDSPLINES_OFFSET UNITYSDK_OFFSET(0x1C17C4F0)
#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINESVGCONVERTER_SVGTOSPLINES_OFFSET UNITYSDK_OFFSET(0x1C17C3A0)
#define FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINESVGCONVERTER_SVGTOSPLINE_OFFSET UNITYSDK_OFFSET(0x1C17C8F0)

namespace FluffyUnderware::Curvy::ImportExport
{
	inline static constexpr unsigned int SplineSvgConverter_TypeDefinitionIndex = 37266;

	class SplineSvgConverter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::FluffyUnderware::Curvy::CurvySpline*>* SvgToSplines(::System::String* svg, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace coordinatesSpace)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::CurvySpline*>*(*)(::System::String*, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINESVGCONVERTER_SVGTOSPLINES_OFFSET))(svg, coordinatesSpace);
		}

		static ::FluffyUnderware::Curvy::CurvySpline* SvgToSpline(::System::String* svg, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace coordinatesSpace)
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::System::String*, ::FluffyUnderware::Curvy::ImportExport::CurvySerializationSpace))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINESVGCONVERTER_SVGTOSPLINE_OFFSET))(svg, coordinatesSpace);
		}

		static ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::ImportExport::SerializedCurvySpline*>* SvgToSerializedSplines(::System::String* svg, ::System::Boolean invertY)
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::ImportExport::SerializedCurvySpline*>*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINESVGCONVERTER_SVGTOSERIALIZEDSPLINES_OFFSET))(svg, invertY);
		}

		static ::System::Void DrawNode(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode* node, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D rootTransform, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::ImportExport::SerializedCurvySpline*>* splines)
		{
			return ((::System::Void(*)(::ToolBuddy::ThirdParty::VectorGraphics::SceneNode*, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::ImportExport::SerializedCurvySpline*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_IMPORTEXPORT_SPLINESVGCONVERTER_DRAWNODE_OFFSET))(node, rootTransform, splines);
		}
	};
}
