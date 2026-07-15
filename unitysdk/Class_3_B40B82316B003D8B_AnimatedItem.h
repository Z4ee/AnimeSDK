#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B40B82316B003D8B_AnimatedInstance;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_ANIMATEDINSTANCEMATRIXLISTS_OFFSET UNITYSDK_OFFSET(0x15186330)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_ARGSBUFFER_OFFSET UNITYSDK_OFFSET(0x15186380)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_CURRENTINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x151863C0)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_CURVEBOUNDSINITIALIZED_OFFSET UNITYSDK_OFFSET(0x15186430)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_INSTANCEBOUNDS_OFFSET UNITYSDK_OFFSET(0x151863E0)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_INSTANCEMATRIXBUFFER_OFFSET UNITYSDK_OFFSET(0x15186360)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_INSTANCERELATIVEDATABUFFER_OFFSET UNITYSDK_OFFSET(0x15186450)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_LASTBOUNDSUPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x15186410)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_LASTINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x15186340)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x151829D0)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_MESH_OFFSET UNITYSDK_OFFSET(0x15182AB0)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_PERCENTAGEOFLINEBUFFER_OFFSET UNITYSDK_OFFSET(0x151863A0)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x15182B90)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_METHOD_1_46E030E6F5465A66_OFFSET UNITYSDK_OFFSET(0x15184A70)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_ARGSBUFFER_OFFSET UNITYSDK_OFFSET(0x15186390)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_CURRENTINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x151863D0)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_CURVEBOUNDSINITIALIZED_OFFSET UNITYSDK_OFFSET(0x15186440)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_INSTANCEBOUNDS_OFFSET UNITYSDK_OFFSET(0x15186400)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_INSTANCEMATRIXBUFFER_OFFSET UNITYSDK_OFFSET(0x15186370)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_INSTANCERELATIVEDATABUFFER_OFFSET UNITYSDK_OFFSET(0x15186460)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_LASTBOUNDSUPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x15186420)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_LASTINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x15186350)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x15186320)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_MESH_OFFSET UNITYSDK_OFFSET(0x15186310)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_PERCENTAGEOFLINEBUFFER_OFFSET UNITYSDK_OFFSET(0x151863B0)
#define CLASS_3_B40B82316B003D8B_ANIMATEDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15186020)

inline static constexpr unsigned int Class_3_B40B82316B003D8B_AnimatedItem_TypeDefinitionIndex = 67170;

class Class_3_B40B82316B003D8B_AnimatedItem : public ::System::Object
{
public:
	::UnityEngine::GameObject* GameObject; // 0x10
	::UnityEngine::Vector3 LossyScale; // 0x18
	::System::Boolean EnableInstancing; // 0x24
	::UnityEngine::Mesh* _Mesh; // 0x28
	::Il2CppArray<::UnityEngine::Material*>* _Materials; // 0x30
	::System::Collections::Generic::List_1<::Class_3_B40B82316B003D8B_AnimatedInstance*>* AnimatedInstances; // 0x38
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* _AnimatedInstanceMatrixLists; // 0x40
	::System::Int32 _lastInstanceCount; // 0x48
	::UnityEngine::ComputeBuffer* _InstanceMatrixBuffer; // 0x50
	::UnityEngine::ComputeBuffer* _ArgsBuffer; // 0x58
	::UnityEngine::ComputeBuffer* _PercentageOfLineBuffer; // 0x60
	::System::Int32 _CurrentInstanceCount; // 0x68
	::UnityEngine::Bounds _InstanceBounds; // 0x6C
	::System::Int32 _lastBoundsUpdateFrame; // 0x84
	::System::Boolean _curveBoundsInitialized; // 0x88
	::UnityEngine::ComputeBuffer* _instanceRelativeDataBuffer; // 0x90

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Mesh* get_Mesh()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_MESH_OFFSET))(this);
	}

	::System::Void set_Mesh(::UnityEngine::Mesh* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_MESH_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Material*>* get_Materials()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_MATERIALS_OFFSET))(this);
	}

	::System::Void set_Materials(::Il2CppArray<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_MATERIALS_OFFSET))(this, a1);
	}

	::System::Int32 get_SubMeshCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_SUBMESHCOUNT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* get_AnimatedInstanceMatrixLists()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_ANIMATEDINSTANCEMATRIXLISTS_OFFSET))(this);
	}

	::System::Int32 get_LastInstanceCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_LASTINSTANCECOUNT_OFFSET))(this);
	}

	::System::Void set_LastInstanceCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_LASTINSTANCECOUNT_OFFSET))(this, a1);
	}

	::UnityEngine::ComputeBuffer* get_InstanceMatrixBuffer()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_INSTANCEMATRIXBUFFER_OFFSET))(this);
	}

	::System::Void set_InstanceMatrixBuffer(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_INSTANCEMATRIXBUFFER_OFFSET))(this, a1);
	}

	::UnityEngine::ComputeBuffer* get_ArgsBuffer()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_ARGSBUFFER_OFFSET))(this);
	}

	::System::Void set_ArgsBuffer(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_ARGSBUFFER_OFFSET))(this, a1);
	}

	::UnityEngine::ComputeBuffer* get_PercentageOfLineBuffer()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_PERCENTAGEOFLINEBUFFER_OFFSET))(this);
	}

	::System::Void set_PercentageOfLineBuffer(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_PERCENTAGEOFLINEBUFFER_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentInstanceCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_CURRENTINSTANCECOUNT_OFFSET))(this);
	}

	::System::Void set_CurrentInstanceCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_CURRENTINSTANCECOUNT_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds get_InstanceBounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_INSTANCEBOUNDS_OFFSET))(this);
	}

	::System::Void set_InstanceBounds(::UnityEngine::Bounds a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_INSTANCEBOUNDS_OFFSET))(this, a1);
	}

	::System::Int32 get_LastBoundsUpdateFrame()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_LASTBOUNDSUPDATEFRAME_OFFSET))(this);
	}

	::System::Void set_LastBoundsUpdateFrame(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_LASTBOUNDSUPDATEFRAME_OFFSET))(this, a1);
	}

	::System::Boolean get_CurveBoundsInitialized()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_CURVEBOUNDSINITIALIZED_OFFSET))(this);
	}

	::System::Void set_CurveBoundsInitialized(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_CURVEBOUNDSINITIALIZED_OFFSET))(this, a1);
	}

	::UnityEngine::ComputeBuffer* get_InstanceRelativeDataBuffer()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_GET_INSTANCERELATIVEDATABUFFER_OFFSET))(this);
	}

	::System::Void set_InstanceRelativeDataBuffer(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_SET_INSTANCERELATIVEDATABUFFER_OFFSET))(this, a1);
	}

	::System::Void Method_1_46E030E6F5465A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_ANIMATEDITEM_METHOD_1_46E030E6F5465A66_OFFSET))(this);
	}
};
