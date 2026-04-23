#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace RPG::CustomRP { class CRPRendererData; }
namespace System { class Type; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1813A220)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_GETMESH_OFFSET UNITYSDK_OFFSET(0x18139BD0)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x181393A0)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_UPDATE_OFFSET UNITYSDK_OFFSET(0x18139360)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1813B830)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x18139080)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugWireframePass_TypeDefinitionIndex = 34950;

	class DebugWireframePass : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_colliderType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(DebugWireframePass_TypeDefinitionIndex)->GetStaticField(0x66D20);
		}
		static ::System::Boolean* StaticGet_EnableDebugColliderWireframe()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DebugWireframePass_TypeDefinitionIndex)->GetStaticField(0x10F40);
		}
		static ::System::Int32* StaticGet_layer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DebugWireframePass_TypeDefinitionIndex)->GetStaticField(0x10F44);
		}
		::UnityEngine::Material* _DebugWireframeMat; // 0x10
		::Il2CppArray<::System::Type*>* _ColliderTypes; // 0x18
		::UnityEngine::Material* _DebugWireframeMatLegacy; // 0x20
		::System::Int32 _WireColor; // 0x28
		::UnityEngine::RenderTextureDescriptor _TargetDesc; // 0x2C
		::System::Int32 _WireColorTmpRT; // 0x60
		::System::Int32 _WireframeTmpRT; // 0x64

		::System::Void _ctor(::RPG::CustomRP::CRPRendererData* renderData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS__CTOR_OFFSET))(this, renderData);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS__CCTOR_OFFSET))();
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_UPDATE_OFFSET))(this);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::CRPMainCameraDesc mainCameraDesc, ::System::Single renderScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_INNEREXECUTE_OFFSET))(this, cmd, mainCameraDesc, renderScale);
		}

		::UnityEngine::Mesh* GetMesh(::UnityEngine::Collider* collider, ::UnityEngine::Matrix4x4& TSMatrix)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_GETMESH_OFFSET))(this, collider, TSMatrix);
		}

		::UnityEngine::Color GetColor(::UnityEngine::Collider* collider)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_GETCOLOR_OFFSET))(this, collider);
		}
	};
}
