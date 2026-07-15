#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CC45B4503679E14E.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class IRI_BuildingRendererList_RendererMatrix;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IRI_BUILDINGRENDERERLIST_METHOD_3_6A507C996C1CD4F9_OFFSET UNITYSDK_OFFSET(0x175063A0)
#define IRI_BUILDINGRENDERERLIST_METHOD_3_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0x175064F0)
#define IRI_BUILDINGRENDERERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x17506550)

inline static constexpr unsigned int IRI_BuildingRendererList_TypeDefinitionIndex = 45379;

class IRI_BuildingRendererList : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::IRI_BuildingRendererList_RendererMatrix*>* RendererList; // 0x18
	::UnityEngine::Bounds RenderBounds; // 0x20
	::System::Int32 MatrixDataVersion; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGRENDERERLIST__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_6A507C996C1CD4F9(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + IRI_BUILDINGRENDERERLIST_METHOD_3_6A507C996C1CD4F9_OFFSET))(this, a1);
	}

	::Struct_2_CC45B4503679E14E Method_3_895E6BF2EDCD95D0()
	{
		return ((::Struct_2_CC45B4503679E14E(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGRENDERERLIST_METHOD_3_895E6BF2EDCD95D0_OFFSET))(this);
	}
};
