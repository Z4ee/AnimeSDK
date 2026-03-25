#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_DEFINES__CCTOR_OFFSET UNITYSDK_OFFSET(0x841ADD0)
#define HOUDINIENGINEUNITY_HEU_DEFINES__CTOR_OFFSET UNITYSDK_OFFSET(0x841ADC0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Defines_TypeDefinitionIndex = 37658;

	class HEU_Defines : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_HEU_BAKED_ASSETS_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HEU_Defines_TypeDefinitionIndex)->GetStaticField(0x43C0);
		}
		static ::System::String** StaticGet_HEU_PLUGIN_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HEU_Defines_TypeDefinitionIndex)->GetStaticField(0x43C8);
		}
		static ::System::String** StaticGet_HEU_ENGINE_ASSETS()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HEU_Defines_TypeDefinitionIndex)->GetStaticField(0x43D0);
		}
		static ::System::String** StaticGet_HEU_TEXTURES_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HEU_Defines_TypeDefinitionIndex)->GetStaticField(0x43D8);
		}
		static ::System::Int32* StaticGet_DEFAULT_MATERIAL_KEY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HEU_Defines_TypeDefinitionIndex)->GetStaticField(0x2590);
		}
		static ::System::Int32* StaticGet_EDITABLE_MATERIAL_KEY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HEU_Defines_TypeDefinitionIndex)->GetStaticField(0x2594);
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
		// static const ::System::Int32 HAPI_POSITION_VECTOR_SIZE = 0x3; // 0x0
		// static const ::System::Int32 HAPI_SCALE_VECTOR_SIZE = 0x3; // 0x0
		// static const ::System::Int32 HAPI_SHEAR_VECTOR_SIZE = 0x3; // 0x0
		// static const ::System::Int32 HAPI_NORMAL_VECTOR_SIZE = 0x3; // 0x0
		// static const ::System::Int32 HAPI_QUATERNION_VECTOR_SIZE = 0x4; // 0x0
		// static const ::System::Int32 HAPI_EULER_VECTOR_SIZE = 0x3; // 0x0
		// static const ::System::Int32 HAPI_COLOR_VECTOR_SIZE = 0x4; // 0x0
		// static const ::System::Int32 HAPI_CV_VECTOR_SIZE = 0x4; // 0x0
		// static const ::System::Int32 HAPI_PRIM_MIN_VERTEX_COUNT = 0x1; // 0x0
		// static const ::System::Int32 HAPI_PRIM_MAX_VERTEX_COUNT = 0x10; // 0x0
		// static const ::System::Int32 HAPI_INVALID_PARM_ID = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 HAPI_MAX_UVS = 0x8; // 0x0
		// static const ::System::String* HAPI_ATTRIB_POSITION; // 0x0
		// static const ::System::String* HAPI_ATTRIB_UV; // 0x0
		// static const ::System::String* HAPI_ATTRIB_NORMAL; // 0x0
		// static const ::System::String* HAPI_ATTRIB_TANGENT; // 0x0
		// static const ::System::String* HAPI_ATTRIB_COLOR; // 0x0
		// static const ::System::String* HAPI_ATTRIB_ALPHA; // 0x0
		// static const ::System::String* HAPI_ATTRIB_NAME; // 0x0
		// static const ::System::String* HAPI_ATTRIB_INSTANCE; // 0x0
		// static const ::System::String* HAPI_ATTRIB_ORIENT; // 0x0
		// static const ::System::String* HAPI_UNGROUPED_GROUP_NAME; // 0x0
		// static const ::System::String* HAPI_HANDLE_TRANSFORM; // 0x0
		// static const ::System::String* HAPI_RAW_FORMAT_NAME; // 0x0
		// static const ::System::String* HAPI_PNG_FORMAT_NAME; // 0x0
		// static const ::System::String* HAPI_JPEG_FORMAT_NAME; // 0x0
		// static const ::System::String* HAPI_BMP_FORMAT_NAME; // 0x0
		// static const ::System::String* HAPI_TIFF_FORMAT_NAME; // 0x0
		// static const ::System::String* HAPI_TGA_FORMAT_NAME; // 0x0
		// static const ::System::String* HAPI_DEFAULT_IMAGE_FORMAT_NAME; // 0x0
		// static const ::System::String* HAPI_GLOBAL_NODES_NODE_NAME; // 0x0
		// static const ::System::String* HAPI_ENV_HIP; // 0x0
		// static const ::System::String* HAPI_ENV_JOB; // 0x0
		// static const ::System::String* HAPI_ENV_CLIENT_NAME; // 0x0
		// static const ::System::String* HAPI_CACHE_COP_COOK; // 0x0
		// static const ::System::String* HAPI_CACHE_COP_FLIPBOOK; // 0x0
		// static const ::System::String* HAPI_CACHE_IMAGE; // 0x0
		// static const ::System::String* HAPI_CACHE_OBJ; // 0x0
		// static const ::System::String* HAPI_CACHE_GL_TEXTURE; // 0x0
		// static const ::System::String* HAPI_CACHE_GL_VERTEX; // 0x0
		// static const ::System::String* HAPI_CACHE_SOP; // 0x0
		// static const ::System::String* HAPI_CACHE_VEX; // 0x0
		// static const ::System::String* HAPI_OBJMERGE_TRANSFORM_PARAM; // 0x0
		// static const ::System::String* HAPI_OBJMERGE_PACK_GEOMETRY; // 0x0
		// static const ::System::String* NO_EXISTING_SESSION; // 0x0
		// static const ::System::String* HEU_ERROR_TITLE; // 0x0
		// static const ::System::String* HEU_INSTALL_INFO; // 0x0
		// static const ::System::String* PLUGIN_STORE_KEYS; // 0x0
		// static const ::System::String* PLUGIN_STORE_DATA; // 0x0
		// static const ::System::String* PLUGIN_SESSION_DATA; // 0x0
		// static const ::System::String* PLUGIN_SETTINGS_FILE; // 0x0
		// static const ::System::String* PLUGIN_SESSION_FILE; // 0x0
		// static const ::System::String* DEFAULT_COLLISION_GEO; // 0x0
		// static const ::System::String* DEFAULT_RENDERED_COLLISION_GEO; // 0x0
		// static const ::System::String* DEFAULT_CONVEX_COLLISION_GEO; // 0x0
		// static const ::System::String* DEFAULT_SIMPLE_COLLISION_GEO; // 0x0
		// static const ::System::String* DEFAULT_SIMPLE_RENDERED_COLLISION_GEO; // 0x0
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
		// static const ::System::String* MAT_OGL_ALPHA_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_NORMAL_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_TEX1_ATTR; // 0x0
		// static const ::System::String* MAT_BASECOLOR_ATTR; // 0x0
		// static const ::System::String* MAT_MAP_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_ROUGH_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_DIFF_ATTR; // 0x0
		// static const ::System::String* MAT_OGL_SPEC_ATTR; // 0x0
		// static const ::System::String* CURVE_COORDS_PARAM; // 0x0
		// static const ::System::String* HENGINE_STORE_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_TAG_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_SCRIPT_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_INSTANCE_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_INPUT_MESH_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_STATIC_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_LAYER_ATTR; // 0x0
		// static const ::System::String* DEFAULT_UNITY_MESH_READABLE; // 0x0
		// static const ::System::String* DEFAULT_INSTANCE_PREFIX_ATTR; // 0x0
		// static const ::System::String* UNITY_SHADER_BUMP_MAP; // 0x0
		// static const ::System::String* UNITY_SHADER_SHININESS; // 0x0
		// static const ::System::String* UNITY_SHADER_COLOR; // 0x0
		// static const ::System::String* UNITY_SHADER_SPECCOLOR; // 0x0
		// static const ::System::String* UNITY_EDITORONLY_TAG; // 0x0
		// static const ::System::String* UNITY_HDADATA_NAME; // 0x0
		// static const ::System::String* HOUDINI_SHADER_PREFIX; // 0x0
		// static const ::System::String* DEFAULT_STANDARD_SHADER; // 0x0
		// static const ::System::String* DEFAULT_VERTEXCOLOR_SHADER; // 0x0
		// static const ::System::String* DEFAULT_TRANSPARENT_SHADER; // 0x0
		// static const ::System::String* DEFAULT_CURVE_SHADER; // 0x0
		// static const ::System::String* DEFAULT_UNITY_BUILTIN_RESOURCES; // 0x0
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
