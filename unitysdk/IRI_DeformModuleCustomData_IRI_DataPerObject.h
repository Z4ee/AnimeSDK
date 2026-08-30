#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4857AA933F438880_DeformMode.h"
#include "unitysdk/Class_1_4857AA933F438880_ModuleCustomData.h"
#include "unitysdk/System/ValueType.h"

class IRI_DeformModuleCustomData;
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x2DF61A0)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_DEFORMMODE_OFFSET UNITYSDK_OFFSET(0x2DF6180)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MAT_OFFSET UNITYSDK_OFFSET(0x2DF60E0)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MESH_OFFSET UNITYSDK_OFFSET(0x2DF60D0)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MODULEBOUNDS_OFFSET UNITYSDK_OFFSET(0x2DF6160)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MODULESIZE_OFFSET UNITYSDK_OFFSET(0x2DF6140)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_METHOD_2_8706B4640D53FE36_OFFSET UNITYSDK_OFFSET(0x2DF6190)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_SET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x2DF61C0)

inline static constexpr unsigned int IRI_DeformModuleCustomData_IRI_DataPerObject_TypeDefinitionIndex = 47634;

struct alignas(8) IRI_DeformModuleCustomData_IRI_DataPerObject
{
	::UnityEngine::MeshRenderer* Target; // 0x10
	::Class_1_4857AA933F438880_ModuleCustomData ModuleCustomData; // 0x18
	::IRI_DeformModuleCustomData* Parent; // 0x90

	::UnityEngine::Mesh* get_Mesh()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MESH_OFFSET))(this);
	}

	::UnityEngine::Material* get_Mat()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MAT_OFFSET))(this);
	}

	/*
	::UnityEngine::Vector3 get_ModuleSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MODULESIZE_OFFSET))(this);
	}
	*/

	/*
	::UnityEngine::Bounds get_ModuleBounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MODULEBOUNDS_OFFSET))(this);
	}
	*/

	::Class_1_4857AA933F438880_DeformMode get_DeformMode()
	{
		return ((::Class_1_4857AA933F438880_DeformMode(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_DEFORMMODE_OFFSET))(this);
	}

	::System::Void Method_2_8706B4640D53FE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_METHOD_2_8706B4640D53FE36_OFFSET))(this);
	}

	/*
	::UnityEngine::Bounds get_Bounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_BOUNDS_OFFSET))(this);
	}
	*/

	/*
	::System::Void set_Bounds(::UnityEngine::Bounds a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_SET_BOUNDS_OFFSET))(this, a1);
	}
	*/
};
