#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDebugMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy::Generator::Modules { class BuildShapeExtrusion; }
namespace FluffyUnderware::Curvy::Generator::Modules { class CreateMesh; }
namespace FluffyUnderware::Curvy::Generator::Modules { class InputSplinePath; }
namespace FluffyUnderware::Curvy::Generator::Modules { class ModifierPathRelativeTranslation; }
namespace FluffyUnderware::Curvy::Generator::Modules { class ModifierTRSShape; }
namespace FluffyUnderware::Curvy::Shapes { class CSRectangle; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define SURFINGFENCEMESHGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6AAC00)

inline static constexpr unsigned int SurfingFenceMeshGenerator_TypeDefinitionIndex = 73453;

class SurfingFenceMeshGenerator : public ::UnityEngine::MonoBehaviour
{
public:
	::FluffyUnderware::Curvy::CurvySpline* spline; // 0x18
	::System::Single height; // 0x20
	::System::Single distance; // 0x24
	::System::Int32 subdivision; // 0x28
	::System::Single dissolveThreshold; // 0x2C
	::System::Single arrowSegmentLength; // 0x30
	::System::Boolean reverseDirection; // 0x34
	::EDebugMode debugMode; // 0x38
	::System::Int32 vertexLabelSize; // 0x3C
	::FluffyUnderware::Curvy::Generator::Modules::InputSplinePath* inputSplinePath; // 0x40
	::FluffyUnderware::Curvy::Shapes::CSRectangle* rectangleShape; // 0x48
	::FluffyUnderware::Curvy::Generator::Modules::ModifierPathRelativeTranslation* pathOffset1; // 0x50
	::FluffyUnderware::Curvy::Generator::Modules::ModifierPathRelativeTranslation* pathOffset2; // 0x58
	::FluffyUnderware::Curvy::Generator::Modules::ModifierTRSShape* trsShape; // 0x60
	::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion* buildShapeExtrusion1; // 0x68
	::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion* buildShapeExtrusion2; // 0x70
	::FluffyUnderware::Curvy::Generator::Modules::CreateMesh* createMesh; // 0x78
	::UnityEngine::Mesh* newMesh; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* segmentPoints; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SURFINGFENCEMESHGENERATOR__CTOR_OFFSET))(this);
	}
};
