#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_DeformModuleCustomData_AutoFitBoundsMode.h"
#include "unitysdk/IRI_DeformModuleCustomData_IRI_DataPerObject.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Transform; }

#define IRI_DEFORMMODULECUSTOMDATA_COLLECTOBJECT_OFFSET UNITYSDK_OFFSET(0x12418AC0)
#define IRI_DEFORMMODULECUSTOMDATA_ENCODEDATA_OFFSET UNITYSDK_OFFSET(0x1241A8A0)
#define IRI_DEFORMMODULECUSTOMDATA_GETELEMENTMATRIXLIST_OFFSET UNITYSDK_OFFSET(0x1241A380)
#define IRI_DEFORMMODULECUSTOMDATA_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x12418550)
#define IRI_DEFORMMODULECUSTOMDATA_GET_MPB_OFFSET UNITYSDK_OFFSET(0x124184D0)
#define IRI_DEFORMMODULECUSTOMDATA_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1241AA60)
#define IRI_DEFORMMODULECUSTOMDATA_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1241B9C0)
#define IRI_DEFORMMODULECUSTOMDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1241A330)
#define IRI_DEFORMMODULECUSTOMDATA_RESETDATA_OFFSET UNITYSDK_OFFSET(0x12419890)
#define IRI_DEFORMMODULECUSTOMDATA_SETSIZE_OFFSET UNITYSDK_OFFSET(0x1241AAF0)
#define IRI_DEFORMMODULECUSTOMDATA_SET_MPB_OFFSET UNITYSDK_OFFSET(0x12418540)
#define IRI_DEFORMMODULECUSTOMDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1241BA80)
#define IRI_DEFORMMODULECUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1241BA70)

inline static constexpr unsigned int IRI_DeformModuleCustomData_TypeDefinitionIndex = 43965;

class IRI_DeformModuleCustomData : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Single* StaticGet_Field_5_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(IRI_DeformModuleCustomData_TypeDefinitionIndex)->GetStaticField(0x3070);
	}
	::IRI_DeformModuleCustomData_AutoFitBoundsMode FitBoundsMode; // 0x18
	::UnityEngine::Vector3 BoundsStartPos; // 0x1C
	::UnityEngine::Vector3 BoundsSize; // 0x28
	::System::Collections::Generic::List_1<::IRI_DeformModuleCustomData_IRI_DataPerObject>* ModuleObjDatas; // 0x38
	::UnityEngine::MaterialPropertyBlock* Field_5_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA__CCTOR_OFFSET))();
	}

	::UnityEngine::MaterialPropertyBlock* get_Mpb()
	{
		return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_GET_MPB_OFFSET))(this);
	}

	::System::Void set_Mpb(::UnityEngine::MaterialPropertyBlock* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_SET_MPB_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds get_Bounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_GET_BOUNDS_OFFSET))(this);
	}

	::System::Void CollectObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_COLLECTOBJECT_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_ONENABLE_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Matrix4x4>* GetElementMatrixList(::UnityEngine::Transform* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_GETELEMENTMATRIXLIST_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 EncodeData(::IRI_DeformModuleCustomData_IRI_DataPerObject a1)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::IRI_DeformModuleCustomData_IRI_DataPerObject))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_ENCODEDATA_OFFSET))(this, a1);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void ResetData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_RESETDATA_OFFSET))(this);
	}

	::System::Void SetSize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_SETSIZE_OFFSET))(this);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}
};
