#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8B48740F46FC53FC.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class IRI_BuildingRendererList_RendererMatrix;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IRI_BUILDINGRENDERERLIST_METHOD_3_69FEAEDB0A47A437_OFFSET UNITYSDK_OFFSET(0x111DACA0)
#define IRI_BUILDINGRENDERERLIST_METHOD_3_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0x111DAD80)
#define IRI_BUILDINGRENDERERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x111DADE0)

inline static constexpr unsigned int IRI_BuildingRendererList_TypeDefinitionIndex = 38081;

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

	::System::Void Method_3_69FEAEDB0A47A437(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + IRI_BUILDINGRENDERERLIST_METHOD_3_69FEAEDB0A47A437_OFFSET))(this, a1);
	}

	::Struct_2_8B48740F46FC53FC Method_3_895E6BF2EDCD95D0()
	{
		return ((::Struct_2_8B48740F46FC53FC(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGRENDERERLIST_METHOD_3_895E6BF2EDCD95D0_OFFSET))(this);
	}
};
