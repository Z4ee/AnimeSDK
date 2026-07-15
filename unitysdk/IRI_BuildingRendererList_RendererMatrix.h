#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IRI_BUILDINGRENDERERLIST_RENDERERMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x175064E0)

inline static constexpr unsigned int IRI_BuildingRendererList_RendererMatrix_TypeDefinitionIndex = 45380;

class IRI_BuildingRendererList_RendererMatrix : public ::System::Object
{
public:
	::System::String* RendererFBXPath; // 0x10
	::System::String* RendererMeshName; // 0x18
	::System::String* RendererMaterialPath; // 0x20
	::System::UInt32 DeformType; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* RendererMatrixList; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGRENDERERLIST_RENDERERMATRIX__CTOR_OFFSET))(this);
	}
};
