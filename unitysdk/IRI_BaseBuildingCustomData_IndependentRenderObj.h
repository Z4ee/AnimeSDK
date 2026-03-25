#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x111DAB00)
#define IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_METHOD_1_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0x111DA420)
#define IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_METHOD_1_C11C8C2B79548B66_OFFSET UNITYSDK_OFFSET(0x111DA470)
#define IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x111DAB90)

inline static constexpr unsigned int IRI_BaseBuildingCustomData_IndependentRenderObj_TypeDefinitionIndex = 38078;

class IRI_BaseBuildingCustomData_IndependentRenderObj : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* RendererMatrixList; // 0x10
	::UnityEngine::GameObject* Prefab; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GameObjList; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7900DB25C44BBC9B(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_METHOD_1_7900DB25C44BBC9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_C11C8C2B79548B66(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_METHOD_1_C11C8C2B79548B66_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
