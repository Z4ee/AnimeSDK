#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ThriftSharedMemoryBufferType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_DEFINES__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EBEB40)
#define HOUDINIENGINEUNITY_HEU_DEFINES__CTOR_OFFSET UNITYSDK_OFFSET(0x17EBEB30)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Defines_TypeDefinitionIndex = 37469;

	class HEU_Defines : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_HEU_ENGINE_ASSETS()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HEU_Defines_TypeDefinitionIndex)->GetStaticField(0xA300);
		}
		static ::System::String** StaticGet_HEU_PLUGIN_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HEU_Defines_TypeDefinitionIndex)->GetStaticField(0xA308);
		}
		static ::System::String** StaticGet_HEU_TEXTURES_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HEU_Defines_TypeDefinitionIndex)->GetStaticField(0xA310);
		}
		static ::System::String** StaticGet_HEU_BAKED_ASSETS_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HEU_Defines_TypeDefinitionIndex)->GetStaticField(0xA318);
		}
		static ::System::Int32* StaticGet_DEFAULT_MATERIAL_KEY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HEU_Defines_TypeDefinitionIndex)->GetStaticField(0x4450);
		}
		static ::System::Int32* StaticGet_EDITABLE_MATERIAL_KEY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HEU_Defines_TypeDefinitionIndex)->GetStaticField(0x4454);
		}
		// static const ::System::String* HEU_PRODUCT_NAME; // 0x0
		// static const ::System::String* HEU_NAME; // 0x0
		// static const ::System::String* HAPI_PATH; // 0x0
		// static const ::System::String* HEU_ENVPATH_PREFIX; // 0x0
		// static const ::System::String* HEU_ENVPATH_KEY; // 0x0
		// static const ::System::Int32 HEU_INVALID_NODE_ID = 0xFFFFFFFF; // 0x0
		// static const ::System::String* HEU_DEFAULT_ASSET_NAME; // 0x0
		// static const ::System::String* HEU_SESSION_PIPENAME; // 0x0
		// static const ::System::String* HEU_SESSION_LOCALHOST; // 0x0
		// static const ::System::Int32 HEU_SESSION_PORT = 0x2382; // 0x0
		// static const ::System::String* HEU_SESSION_SHARED_MEMORY_NAME; // 0x0
		// static const ::System::Int32 HEU_SESSION_SHARED_MEMORY_BUFFER_SIZE = 0x64; // 0x0
		// static const ::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType HEU_SESSION_SHARED_MEMORY_BUFFER_TYPE; // 0x0
		// static const ::System::Single HEU_SESSION_TIMEOUT; // 0x0
		// static const ::System::Boolean HEU_SESSION_AUTOCLOSE; // 0x0
		// static const ::System::Int32 HAPI_MAX_PAGE_SIZE = 0x4E20; // 0x0
		// static const ::System::Int32 HAPI_SEC_BEFORE_PROGRESS_BAR_SHOW = 0x3; // 0x0
		// static const ::System::Int32 HAPI_MAX_VERTICES_PER_FACE = 0x3; // 0x0
		// static const ::System::Boolean HAPI_CURVE_REFINE_TO_LINEAR; // 0x0
		// static const ::System::Single HAPI_CURVE_LOD; // 0x0
		// static const ::System::Single HAPI_VOLUME_POSITION_MULT; // 0x0
		// static const ::System::Single HAPI_VOLUME_SURFACE_MAX_PT_PER_C; // 0x0
		// static const ::System::Single HAPI_VOLUME_SURFACE_DELTA_MULT; // 0x0
		// static const ::System::Single HAPI_VOLUME_SURFACE_PT_SIZE_MULT; // 0x0
		// static const ::System::String* DEFAULT_TOP_NODE_FILTER; // 0x0
		// static const ::System::String* DEFAULT_TOP_OUTPUT_FILTER; // 0x0
		// static const ::System::String* HAPI_ATTRIB_ORIENT; // 0x0
		// static const ::System::String* HAPI_ATTRIB_ROTATION; // 0x0
		// static const ::System::String* HAPI_ATTRIB_SCALE; // 0x0
		// static const ::System::String* HAPI_ATTRIB_ALPHA; // 0x0
		// static const ::System::String* HAPI_HANDLE_TRANSFORM; // 0x0
		// static const ::System::Int32 HAPI_MAX_UVS = 0x8; // 0x0
		// static const ::System::String* HAPI_OBJMERGE_TRANSFORM_PARAM; // 0x0
		// static const ::System::String* HAPI_OBJMERGE_PACK_GEOMETRY; // 0x0
		// static const ::System::String* HAPI_OBJPATH_1_PARAM; // 0x0
		// static const ::System::String* NO_EXISTING_SESSION; // 0x0
		// static const ::System::String* HEU_ERROR_TITLE; // 0x0
		// static const ::System::String* HEU_INSTALL_INFO; // 0x0
		// static const ::System::String* PLUGIN_STORE_KEYS; // 0x0
		// static const ::System::String* PLUGIN_STORE_DATA; // 0x0
		// static const ::System::String* PLUGIN_SESSION_DATA; // 0x0
		// static const ::System::String* PLUGIN_SETTINGS_FILE; // 0x0
		// static const ::System::String* PLUGIN_SESSION_FILE; // 0x0
		// static const ::System::String* COOK_LOGS_FILE; // 0x0
		// static const ::System::String* DEFAULT_COLLISION_GEO; // 0x0
		// static const ::System::String* DEFAULT_RENDERED_COLLISION_GEO; // 0x0
		// static const ::System::String* DEFAULT_RENDERED_CONVEX_COLLISION_GEO; // 0x0
		// static const ::System::String* DEFAULT_CONVEX_COLLISION_GEO; // 0x0
		// static const ::System::String* DEFAULT_SIMPLE_COLLISION_GEO; // 0x0
		// static const ::System::String* DEFAULT_SIMPLE_RENDERED_COLLISION_GEO; // 0x0
		// static const ::System::String* DEFAULT_SIMPLE_RENDERED_CONVEX_COLLISION_GEO; // 0x0
		// static const ::System::String* DEFAULT_COLLISION_TRIGGER; // 0x0
		// static const ::System::String* DEFAULT_UNITY_MATERIAL_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_SUBMATERIAL_NAME_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_SUBMATERIAL_INDEX_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_DIFFUSE_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_MASK_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_NORMAL_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_NORMAL_SCALE_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_METALLIC_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_SMOOTHNESS_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_SPECULAR_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_TILE_OFFSET_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_TILE_SIZE_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_FILE_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_EXPORT_FILE_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_TERRAINLAYER_FILE_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_EXPORT_PATH; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_HEIGHT_RANGE; // 0x0
		// static const ::System::String* DEFAULT_UNITY_HEIGHTFIELD_YPOS; // 0x0
		// static const ::System::String* HEIGHTFIELD_TREEPROTOTYPE; // 0x0
		// static const ::System::String* HEIGHTFIELD_TREEINSTANCE_PROTOTYPEINDEX; // 0x0
		// static const ::System::String* HEIGHTFIELD_TREEINSTANCE_HEIGHTSCALE; // 0x0
		// static const ::System::String* HEIGHTFIELD_TREEINSTANCE_WIDTHSCALE; // 0x0
		// static const ::System::String* HEIGHTFIELD_TREEINSTANCE_LIGHTMAPCOLOR; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_RESOLUTION_PER_PATCH; // 0x0
		// static const ::System::String* HEIGHTFIELD_UNITY_TILE; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_DISTANCE; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_DENSITY; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_PROTOTYPE_PREFAB; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_PROTOTYPE_TEXTURE; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_PROTOTYPE_BENDFACTOR; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_PROTOTYPE_DRYCOLOR; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_PROTOTYPE_HEALTHYCOLOR; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_PROTOTYPE_MAXHEIGHT; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_PROTOTYPE_MAXWIDTH; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_PROTOTYPE_MINHEIGHT; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_PROTOTYPE_MINWIDTH; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_PROTOTYPE_NOISESPREAD; // 0x0
		// static const ::System::String* HEIGHTFIELD_DETAIL_PROTOTYPE_RENDERMODE; // 0x0
		// static const ::System::String* HEIGHTFIELD_LAYER_ATTR_TYPE; // 0x0
		// static const ::System::String* HEIGHTFIELD_LAYER_TYPE_DETAIL; // 0x0
		// static const ::System::String* HAPI_HEIGHTFIELD_TILE_ATTR; // 0x0
		// static const ::System::String* HAPI_HEIGHTFIELD_LAYERNAME_HEIGHT; // 0x0
		// static const ::System::String* HAPI_HEIGHTFIELD_LAYERNAME_MASK; // 0x0
		// static const ::System::String* MAT_OGL_DIFF_ATTR; // 0x0
		// static const ::System::String* MAT_DIFF_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_TEX1_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_TEX1_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_BASECOLOR_ATTR; // 0x0
		// static const ::System::String* MAT_BASECOLOR_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_MAP_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_NORMAL_ATTR; // 0x0
		// static const ::System::String* MAT_NORMAL_ATTR; // 0x0
		// static const ::System::String* MAT_NORMAL_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_OGL_SPEC_ATTR; // 0x0
		// static const ::System::String* MAT_SPEC_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_SPEC_MAP_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_SPEC_MAP_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_SPEC_MAP_ATTR; // 0x0
		// static const ::System::String* MAT_SPEC_MAP_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_OGL_ROUGH_ATTR; // 0x0
		// static const ::System::String* MAT_ROUGH_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_ROUGH_MAP_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_ROUGH_MAP_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_ROUGH_MAP_ATTR; // 0x0
		// static const ::System::String* MAT_ROUGH_MAP_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_OGL_METALLIC_ATTR; // 0x0
		// static const ::System::String* MAT_METALLIC_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_METALLIC_MAP_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_METALLIC_MAP_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_METALLIC_MAP_ATTR; // 0x0
		// static const ::System::String* MAT_METALLIC_MAP_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_OGL_EMISSIVE_ATTR; // 0x0
		// static const ::System::String* MAT_EMISSIVE_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_EMISSIVE_MAP_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_EMISSIVE_MAP_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_EMISSIVE_MAP_ATTR; // 0x0
		// static const ::System::String* MAT_EMISSIVE_MAP_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_OGL_ALPHA_ATTR; // 0x0
		// static const ::System::String* MAT_ALPHA_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_OPACITY_MAP_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_OPACITY_MAP_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_OPACITY_MAP_ATTR; // 0x0
		// static const ::System::String* MAT_OPACITY_MAP_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_OGL_TRANSPARENCY_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_TRANSPARENCY_ATTR_ENABLED; // 0x0
		// static const ::System::String* MAT_OGL_OCCLUSION_MAP_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_OCCLUSION_MAP_ATTR_ENABLED; // 0x0
		// static const ::System::String* CURVE_COORDS_PARAM; // 0x0
		// static const ::System::String* CURVE_TYPE_PARAM; // 0x0
		// static const ::System::String* CURVE_METHOD_PARAM; // 0x0
		// static const ::System::String* CURVE_CLOSE_PARAM; // 0x0
		// static const ::System::String* CURVE_REVERSE_PARAM; // 0x0
		// static const ::System::String* HENGINE_STORE_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_TAG_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_SCRIPT_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_INSTANCE_ATTR; // 0x0
		// static const ::System::String* UNITY_USE_INSTANCE_FLAGS_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_INPUT_MESH_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_STATIC_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_LAYER_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_MESH_READABLE; // 0x0
		// static const ::System::String* DEFAULT_INSTANCE_PREFIX_ATTR; // 0x0
		// static const ::System::String* UNITY_SHADER_COLOR; // 0x0
		// static const ::System::String* UNITY_SHADER_SPEC_COLOR; // 0x0
		// static const ::System::String* UNITY_SHADER_SPEC_MAP; // 0x0
		// static const ::System::String* UNITY_SHADER_METALLIC; // 0x0
		// static const ::System::String* UNITY_SHADER_METALLIC_MAP; // 0x0
		// static const ::System::String* UNITY_SHADER_BUMP_MAP; // 0x0
		// static const ::System::String* UNITY_SHADER_EMISSION_COLOR; // 0x0
		// static const ::System::String* UNITY_SHADER_EMISSION_MAP; // 0x0
		// static const ::System::String* UNITY_SHADER_SMOOTHNESS; // 0x0
		// static const ::System::String* UNITY_SHADER_SMOOTHNESS_MAP; // 0x0
		// static const ::System::String* UNITY_SHADER_SHININESS; // 0x0
		// static const ::System::String* UNITY_SHADER_OCCLUSION; // 0x0
		// static const ::System::String* UNITY_SHADER_OCCLUSION_MAP; // 0x0
		// static const ::System::String* UNITY_SHADER_OPACITY; // 0x0
		// static const ::System::String* UNITY_SHADER_OPACITY_MAP; // 0x0
		// static const ::System::String* UNITY_EDITORONLY_TAG; // 0x0
		// static const ::System::String* UNITY_HDADATA_NAME; // 0x0
		// static const ::System::String* HOUDINI_SHADER_PREFIX; // 0x0
		// static const ::System::String* DEFAULT_STANDARD_SHADER; // 0x0
		// static const ::System::String* DEFAULT_VERTEXCOLOR_SHADER; // 0x0
		// static const ::System::String* DEFAULT_TRANSPARENT_SHADER; // 0x0
		// static const ::System::String* DEFAULT_STANDARD_SHADER_SPECULAR; // 0x0
		// static const ::System::String* DEFAULT_STANDARD_SHADER_SPECULAR_LEGACY; // 0x0
		// static const ::System::String* DEFAULT_VERTEXCOLOR_SHADER_SPECULAR; // 0x0
		// static const ::System::String* DEFAULT_VERTEXCOLOR_SHADER_SPECULAR_LEGACY; // 0x0
		// static const ::System::String* DEFAULT_TRANSPARENT_SHADER_SPECULAR; // 0x0
		// static const ::System::String* DEFAULT_TRANSPARENT_SHADER_SPECULAR_LEGACY; // 0x0
		// static const ::System::String* DEFAULT_CURVE_SHADER; // 0x0
		// static const ::System::String* DEFAULT_TERRAIN_SHADER; // 0x0
		// static const ::System::String* DEFAULT_STANDARD_SHADER_HDRP; // 0x0
		// static const ::System::String* DEFAULT_VERTEXCOLOR_SHADER_HDRP; // 0x0
		// static const ::System::String* DEFAULT_TRANSPARENT_SHADER_HDRP; // 0x0
		// static const ::System::String* DEFAULT_STANDARD_SHADER_HDRP_SPECULAR; // 0x0
		// static const ::System::String* DEFAULT_VERTEXCOLOR_SHADER_HDRP_SPECULAR; // 0x0
		// static const ::System::String* DEFAULT_TRANSPARENT_SHADER_HDRP_SPECULAR; // 0x0
		// static const ::System::String* DEFAULT_CURVE_SHADER_HDRP; // 0x0
		// static const ::System::String* DEFAULT_TERRAIN_SHADER_HDRP; // 0x0
		// static const ::System::String* DEFAULT_STANDARD_SHADER_URP; // 0x0
		// static const ::System::String* DEFAULT_VERTEXCOLOR_SHADER_URP; // 0x0
		// static const ::System::String* DEFAULT_TRANSPARENT_SHADER_URP; // 0x0
		// static const ::System::String* DEFAULT_STANDARD_SHADER_URP_SPECULAR; // 0x0
		// static const ::System::String* DEFAULT_VERTEXCOLOR_SHADER_URP_SPECULAR; // 0x0
		// static const ::System::String* DEFAULT_TRANSPARENT_SHADER_URP_SPECULAR; // 0x0
		// static const ::System::String* DEFAULT_CURVE_SHADER_URP; // 0x0
		// static const ::System::String* DEFAULT_TERRAIN_SHADER_URP; // 0x0
		// static const ::System::String* DEFAULT_UNITY_BUILTIN_RESOURCES; // 0x0
		// static const ::System::String* DEFAULT_TERRAIN_MATERIAL_PATH; // 0x0
		// static const ::System::String* DEFAULT_TERRAIN_MATERIAL_PATH_HDRP; // 0x0
		// static const ::System::String* DEFAULT_TERRAIN_MATERIAL_PATH_URP; // 0x0
		// static const ::System::String* DEFAULT_MATERIAL; // 0x0
		// static const ::System::String* EDITABLE_MATERIAL; // 0x0
		// static const ::System::Int32 HEU_INVALID_MATERIAL = 0xFFFFFFFF; // 0x0
		// static const ::System::String* HEU_ASSET_CACHE_PATH; // 0x0
		// static const ::System::String* HEU_WORKING_PATH; // 0x0
		// static const ::System::String* HEU_BAKED_PATH; // 0x0
		// static const ::System::String* HEU_BAKED_HDA; // 0x0
		// static const ::System::String* HEU_BAKED_CLONE; // 0x0
		// static const ::System::String* HEU_INSTANCE; // 0x0
		// static const ::System::String* HEU_INSTANCE_PATTERN; // 0x0
		// static const ::System::String* HEU_INSTANCE_SPLIT_ATTR; // 0x0
		// static const ::System::String* HEU_DEFAULT_GEO_GROUP_NAME; // 0x0
		// static const ::System::String* HEU_DEFAULT_LOD_NAME; // 0x0
		// static const ::System::String* HEU_UNITY_LOD_TRANSITION_ATTR; // 0x0
		// static const ::System::String* HEU_SUBASSET; // 0x0
		// static const ::System::String* HEU_HENGINE_TOOLS_SHIPPED_FOLDER; // 0x0
		// static const ::System::String* HEU_HENGINE_SHIPPED_SHELF; // 0x0
		// static const ::System::String* HEU_PATH_KEY_PROJECT; // 0x0
		// static const ::System::String* HEU_PATH_KEY_PLUGIN; // 0x0
		// static const ::System::String* HEU_PATH_KEY_HFS; // 0x0
		// static const ::System::String* HEU_PATH_KEY_TOOL; // 0x0
		// static const ::System::String* HEU_USERMSG_NONEDITOR_NOT_SUPPORTED; // 0x0
		// static const ::System::String* HEU_TERRAIN_SPLAT_DEFAULT; // 0x0
		// static const ::System::String* HEU_FOLDER_MESHES; // 0x0
		// static const ::System::String* HEU_FOLDER_MATERIALS; // 0x0
		// static const ::System::String* HEU_FOLDER_TERRAIN; // 0x0
		// static const ::System::String* HEU_FOLDER_TILE; // 0x0
		// static const ::System::String* HEU_FOLDER_TEXTURES; // 0x0
		// static const ::System::String* HEU_EXT_ASSET; // 0x0
		// static const ::System::String* HEU_EXT_MAT; // 0x0
		// static const ::System::String* HEU_EXT_TERRAINDATA; // 0x0
		// static const ::System::String* HEU_EXT_TERRAINLAYER; // 0x0
		// static const ::System::String* HEU_KEY_CTRL; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_DEFINES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_DEFINES__CCTOR_OFFSET))();
		}
	};
}
