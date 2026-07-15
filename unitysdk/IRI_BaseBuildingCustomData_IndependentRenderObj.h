#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x175061F0)
#define IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_METHOD_1_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0x17505AA0)
#define IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_METHOD_1_CE50258D081DC33B_OFFSET UNITYSDK_OFFSET(0x17505AF0)
#define IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17506290)

inline static constexpr unsigned int IRI_BaseBuildingCustomData_IndependentRenderObj_TypeDefinitionIndex = 45376;

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

	::System::Void Method_1_CE50258D081DC33B(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_METHOD_1_CE50258D081DC33B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_METHOD_1_1290EA767C459179_OFFSET))(this);
	}
};
