#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGColliderEnum.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGSpot.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGYesNoAuto.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/Modules/ResourceExportingModule.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/MeshColliderCookingOptions.h"
#include "unitysdk/UnityEngine/Rendering/LightProbeUsage.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeUsage.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"

namespace FluffyUnderware::Curvy::Generator { class CGMeshResource; }
namespace FluffyUnderware::Curvy::Generator { class CGMeshResourceCollection; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGSpotComparer; }
namespace FluffyUnderware::Curvy::Generator { class CGSpots; }
namespace FluffyUnderware::Curvy::Generator { class CGVMesh; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class PhysicMaterial; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EEC6B30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_CREATEMESHES_OFFSET UNITYSDK_OFFSET(0x1EEC8400)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_CREATESPOTMESHES_OFFSET UNITYSDK_OFFSET(0x1EEC7800)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_DELETEALLOUTPUTMANAGEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1EEC6700)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GETNEWMESH_OFFSET UNITYSDK_OFFSET(0x1EEC9200)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_ADDNORMALS_OFFSET UNITYSDK_OFFSET(0x1EEC55A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_ADDTANGENTS_OFFSET UNITYSDK_OFFSET(0x1EEC55F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_ADDUV2_OFFSET UNITYSDK_OFFSET(0x1EEC5640)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_ANCHOROVERRIDE_OFFSET UNITYSDK_OFFSET(0x1EEC5990)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_AUTOUPDATECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1EEC5A90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_CANGROUPMESHES_OFFSET UNITYSDK_OFFSET(0x1EEC5CE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_CANMODIFYSTATICFLAG_OFFSET UNITYSDK_OFFSET(0x1EEC5D00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_CANUPDATE_OFFSET UNITYSDK_OFFSET(0x1EEC5D10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_CASTSHADOWS_OFFSET UNITYSDK_OFFSET(0x1EEC5800)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x1EEC5A40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_COMBINE_OFFSET UNITYSDK_OFFSET(0x1EEC5390)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_CONVEX_OFFSET UNITYSDK_OFFSET(0x1EEC5AE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_COOKINGOPTIONS_OFFSET UNITYSDK_OFFSET(0x1EEC5B80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_ENABLEISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1EEC5D40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_GROUPMESHES_OFFSET UNITYSDK_OFFSET(0x1EEC54B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_INCLUDENORMALS_OFFSET UNITYSDK_OFFSET(0x1EEC5500)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_INCLUDETANGENTS_OFFSET UNITYSDK_OFFSET(0x1EEC5550)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1EEC5B30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1EEC5690)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_LIGHTPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1EEC58F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_MAKESTATIC_OFFSET UNITYSDK_OFFSET(0x1EEC5760)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1EEC5BD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_MESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1EEC5C90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_MESHES_OFFSET UNITYSDK_OFFSET(0x1EEC5C80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_RECEIVESHADOWS_OFFSET UNITYSDK_OFFSET(0x1EEC5850)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_REFLECTIONPROBES_OFFSET UNITYSDK_OFFSET(0x1EEC5940)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_RENDERERENABLED_OFFSET UNITYSDK_OFFSET(0x1EEC57B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1EEC56F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_UNWRAPUV2_OFFSET UNITYSDK_OFFSET(0x1EEC53E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_USELIGHTPROBES_OFFSET UNITYSDK_OFFSET(0x1EEC58A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1EEC5CC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EEC8C50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EEC8C40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EEC5D80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_REFRESH_OFFSET UNITYSDK_OFFSET(0x1EEC6B40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_RESETONENABLE_OFFSET UNITYSDK_OFFSET(0x1EECA1F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_RESET_OFFSET UNITYSDK_OFFSET(0x1EEC5DB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SAVERESOURCETOSCENE_OFFSET UNITYSDK_OFFSET(0x1EECA2A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SAVETOASSET_OFFSET UNITYSDK_OFFSET(0x1EECA200)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SAVETOSCENEANDASSET_OFFSET UNITYSDK_OFFSET(0x1EECA250)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_ADDNORMALS_OFFSET UNITYSDK_OFFSET(0x1EEC55B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_ADDTANGENTS_OFFSET UNITYSDK_OFFSET(0x1EEC5600)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_ADDUV2_OFFSET UNITYSDK_OFFSET(0x1EEC5650)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_ANCHOROVERRIDE_OFFSET UNITYSDK_OFFSET(0x1EEC59A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_AUTOUPDATECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1EEC5AA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_CASTSHADOWS_OFFSET UNITYSDK_OFFSET(0x1EEC5810)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x1EEC5A50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_COMBINE_OFFSET UNITYSDK_OFFSET(0x1EEC53A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_CONVEX_OFFSET UNITYSDK_OFFSET(0x1EEC5AF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_COOKINGOPTIONS_OFFSET UNITYSDK_OFFSET(0x1EEC5B90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_GROUPMESHES_OFFSET UNITYSDK_OFFSET(0x1EEC54C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_INCLUDENORMALS_OFFSET UNITYSDK_OFFSET(0x1EEC5510)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_INCLUDETANGENTS_OFFSET UNITYSDK_OFFSET(0x1EEC5560)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1EEC5B40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1EEC56A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_LIGHTPROBEUSAGE_OFFSET UNITYSDK_OFFSET(0x1EEC5900)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_MAKESTATIC_OFFSET UNITYSDK_OFFSET(0x1EEC5770)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1EEC5BE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_RECEIVESHADOWS_OFFSET UNITYSDK_OFFSET(0x1EEC5860)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_REFLECTIONPROBES_OFFSET UNITYSDK_OFFSET(0x1EEC5950)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_RENDERERENABLED_OFFSET UNITYSDK_OFFSET(0x1EEC57C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_TAG_OFFSET UNITYSDK_OFFSET(0x1EEC5700)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_UNWRAPUV2_OFFSET UNITYSDK_OFFSET(0x1EEC53F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_USELIGHTPROBES_OFFSET UNITYSDK_OFFSET(0x1EEC58B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1EEC5CD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_TOONEDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x1EEC7370)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_UPDATECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1EEC8520)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_VALIDATEMESH_OFFSET UNITYSDK_OFFSET(0x1EEC9DC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_WRITEVMESHTOMESH_OFFSET UNITYSDK_OFFSET(0x1EEC8D10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC6520)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int CreateMesh_TypeDefinitionIndex = 39451;

	class CreateMesh : public ::FluffyUnderware::Curvy::Generator::Modules::ResourceExportingModule
	{
	public:
		// static const ::System::String* DefaultTag; // 0x0
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InVMeshArray; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InSpots; // 0xC0
		::FluffyUnderware::Curvy::Generator::CGMeshResourceCollection* m_MeshResources; // 0xC8
		::System::Boolean m_Combine; // 0xD0
		::System::Boolean unwrapUV2; // 0xD1
		::System::Boolean m_GroupMeshes; // 0xD2
		::System::Boolean includeNormals; // 0xD3
		::System::Boolean includeTangents; // 0xD4
		::FluffyUnderware::Curvy::Generator::CGYesNoAuto m_AddNormals; // 0xD8
		::FluffyUnderware::Curvy::Generator::CGYesNoAuto m_AddTangents; // 0xDC
		::System::Boolean m_AddUV2; // 0xE0
		::System::Boolean m_MakeStatic; // 0xE1
		::System::Int32 m_Layer; // 0xE4
		::System::String* m_Tag; // 0xE8
		::System::Boolean m_RendererEnabled; // 0xF0
		::UnityEngine::Rendering::ShadowCastingMode m_CastShadows; // 0xF4
		::System::Boolean m_ReceiveShadows; // 0xF8
		::UnityEngine::Rendering::LightProbeUsage m_LightProbeUsage; // 0xFC
		::System::Boolean m_UseLightProbes; // 0x100
		::UnityEngine::Rendering::ReflectionProbeUsage m_ReflectionProbes; // 0x104
		::UnityEngine::Transform* m_AnchorOverride; // 0x108
		::FluffyUnderware::Curvy::Generator::CGColliderEnum m_Collider; // 0x110
		::System::Boolean m_Convex; // 0x114
		::System::Boolean m_IsTrigger; // 0x115
		::UnityEngine::MeshColliderCookingOptions m_CookingOptions; // 0x118
		::System::Boolean m_AutoUpdateColliders; // 0x11C
		::UnityEngine::PhysicMaterial* m_Material; // 0x120
		::System::Int32 _VertexCount_k__BackingField; // 0x128
		::FluffyUnderware::Curvy::Generator::CGSpotComparer* cgSpotComparer; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Combine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_COMBINE_OFFSET))(this);
		}

		::System::Void set_Combine(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_COMBINE_OFFSET))(this, value);
		}

		::System::Boolean get_UnwrapUV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_UNWRAPUV2_OFFSET))(this);
		}

		::System::Void set_UnwrapUV2(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_UNWRAPUV2_OFFSET))(this, value);
		}

		::System::Boolean get_GroupMeshes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_GROUPMESHES_OFFSET))(this);
		}

		::System::Void set_GroupMeshes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_GROUPMESHES_OFFSET))(this, value);
		}

		::System::Boolean get_IncludeNormals()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_INCLUDENORMALS_OFFSET))(this);
		}

		::System::Void set_IncludeNormals(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_INCLUDENORMALS_OFFSET))(this, value);
		}

		::System::Boolean get_IncludeTangents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_INCLUDETANGENTS_OFFSET))(this);
		}

		::System::Void set_IncludeTangents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_INCLUDETANGENTS_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGYesNoAuto get_AddNormals()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGYesNoAuto(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_ADDNORMALS_OFFSET))(this);
		}

		::System::Void set_AddNormals(::FluffyUnderware::Curvy::Generator::CGYesNoAuto value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGYesNoAuto))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_ADDNORMALS_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGYesNoAuto get_AddTangents()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGYesNoAuto(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_ADDTANGENTS_OFFSET))(this);
		}

		::System::Void set_AddTangents(::FluffyUnderware::Curvy::Generator::CGYesNoAuto value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGYesNoAuto))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_ADDTANGENTS_OFFSET))(this, value);
		}

		::System::Boolean get_AddUV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_ADDUV2_OFFSET))(this);
		}

		::System::Void set_AddUV2(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_ADDUV2_OFFSET))(this, value);
		}

		::System::Int32 get_Layer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_Layer(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_LAYER_OFFSET))(this, value);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_TAG_OFFSET))(this);
		}

		::System::Void set_Tag(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_TAG_OFFSET))(this, value);
		}

		::System::Boolean get_MakeStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_MAKESTATIC_OFFSET))(this);
		}

		::System::Void set_MakeStatic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_MAKESTATIC_OFFSET))(this, value);
		}

		::System::Boolean get_RendererEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_RENDERERENABLED_OFFSET))(this);
		}

		::System::Void set_RendererEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_RENDERERENABLED_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::ShadowCastingMode get_CastShadows()
		{
			return ((::UnityEngine::Rendering::ShadowCastingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_CASTSHADOWS_OFFSET))(this);
		}

		::System::Void set_CastShadows(::UnityEngine::Rendering::ShadowCastingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShadowCastingMode))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_CASTSHADOWS_OFFSET))(this, value);
		}

		::System::Boolean get_ReceiveShadows()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_RECEIVESHADOWS_OFFSET))(this);
		}

		::System::Void set_ReceiveShadows(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_RECEIVESHADOWS_OFFSET))(this, value);
		}

		::System::Boolean get_UseLightProbes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_USELIGHTPROBES_OFFSET))(this);
		}

		::System::Void set_UseLightProbes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_USELIGHTPROBES_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::LightProbeUsage get_LightProbeUsage()
		{
			return ((::UnityEngine::Rendering::LightProbeUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_LIGHTPROBEUSAGE_OFFSET))(this);
		}

		::System::Void set_LightProbeUsage(::UnityEngine::Rendering::LightProbeUsage value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightProbeUsage))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_LIGHTPROBEUSAGE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::ReflectionProbeUsage get_ReflectionProbes()
		{
			return ((::UnityEngine::Rendering::ReflectionProbeUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_REFLECTIONPROBES_OFFSET))(this);
		}

		::System::Void set_ReflectionProbes(::UnityEngine::Rendering::ReflectionProbeUsage value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflectionProbeUsage))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_REFLECTIONPROBES_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_AnchorOverride()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_ANCHOROVERRIDE_OFFSET))(this);
		}

		::System::Void set_AnchorOverride(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_ANCHOROVERRIDE_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGColliderEnum get_Collider()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGColliderEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_COLLIDER_OFFSET))(this);
		}

		::System::Void set_Collider(::FluffyUnderware::Curvy::Generator::CGColliderEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGColliderEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_COLLIDER_OFFSET))(this, value);
		}

		::System::Boolean get_AutoUpdateColliders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_AUTOUPDATECOLLIDERS_OFFSET))(this);
		}

		::System::Void set_AutoUpdateColliders(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_AUTOUPDATECOLLIDERS_OFFSET))(this, value);
		}

		::System::Boolean get_Convex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_CONVEX_OFFSET))(this);
		}

		::System::Void set_Convex(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_CONVEX_OFFSET))(this, value);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void set_IsTrigger(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_ISTRIGGER_OFFSET))(this, value);
		}

		::UnityEngine::MeshColliderCookingOptions get_CookingOptions()
		{
			return ((::UnityEngine::MeshColliderCookingOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_COOKINGOPTIONS_OFFSET))(this);
		}

		::System::Void set_CookingOptions(::UnityEngine::MeshColliderCookingOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshColliderCookingOptions))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_COOKINGOPTIONS_OFFSET))(this, value);
		}

		::UnityEngine::PhysicMaterial* get_Material()
		{
			return ((::UnityEngine::PhysicMaterial*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_Material(::UnityEngine::PhysicMaterial* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicMaterial*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_MATERIAL_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGMeshResourceCollection* get_Meshes()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGMeshResourceCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_MESHES_OFFSET))(this);
		}

		::System::Int32 get_MeshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_MESHCOUNT_OFFSET))(this);
		}

		::System::Int32 get_VertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Void set_VertexCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SET_VERTEXCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_CanGroupMeshes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_CANGROUPMESHES_OFFSET))(this);
		}

		::System::Boolean get_CanModifyStaticFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_CANMODIFYSTATICFLAG_OFFSET))(this);
		}

		::System::Boolean get_CanUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_CANUPDATE_OFFSET))(this);
		}

		::System::Boolean get_EnableIsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GET_ENABLEISTRIGGER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_RESET_OFFSET))(this);
		}

		::System::Boolean DeleteAllOutputManagedResources()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_DELETEALLOUTPUTMANAGEDRESOURCES_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_CLEAR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_REFRESH_OFFSET))(this);
		}

		::System::Void UpdateColliders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_UPDATECOLLIDERS_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void CreateMeshes(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>* vMeshes, ::System::Boolean combine, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMeshResource*>* createdMeshes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>*, ::System::Boolean, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMeshResource*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_CREATEMESHES_OFFSET))(this, vMeshes, combine, createdMeshes);
		}

		::System::Void CreateSpotMeshes(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>* vMeshes, ::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot> spots, ::System::Boolean combine, ::System::Boolean spotsIsACopy, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMeshResource*>* createdMeshes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGVMesh*>*, ::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot>, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMeshResource*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_CREATESPOTMESHES_OFFSET))(this, vMeshes, spots, combine, spotsIsACopy, createdMeshes);
		}

		::FluffyUnderware::Curvy::Generator::CGMeshResource* WriteVMeshToMesh(::FluffyUnderware::Curvy::Generator::CGVMesh* vmesh, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMeshResource*>* cgMeshResources)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGMeshResource*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVMesh*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMeshResource*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_WRITEVMESHTOMESH_OFFSET))(this, vmesh, cgMeshResources);
		}

		::FluffyUnderware::Curvy::Generator::CGMeshResource* GetNewMesh(::System::Int32 currentMeshCount)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGMeshResource*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_GETNEWMESH_OFFSET))(this, currentMeshCount);
		}

		static ::System::Nullable_1<::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot>> ToOneDimensionalArray(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGSpots*>* spotsList, ::System::Boolean& arrayIsCopy)
		{
			return ((::System::Nullable_1<::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot>>(*)(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGSpots*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_TOONEDIMENSIONALARRAY_OFFSET))(spotsList, arrayIsCopy);
		}

		::System::Void ValidateMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_VALIDATEMESH_OFFSET))(this, mesh);
		}

		::System::Void ResetOnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_RESETONENABLE_OFFSET))(this);
		}

		::System::Void SaveToAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SAVETOASSET_OFFSET))(this);
		}

		::System::Void SaveToSceneAndAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SAVETOSCENEANDASSET_OFFSET))(this);
		}

		::UnityEngine::GameObject* SaveResourceToScene(::UnityEngine::Component* managedResource, ::UnityEngine::Transform* newParent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH_SAVERESOURCETOSCENE_OFFSET))(this, managedResource, newParent);
		}
	};
}
