#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderMaterialType.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace MoleMole::Timeline { class KeyframeMBP; }
namespace MoleMole::Timeline { class TextureRecorderUnit; }
namespace MoleMole::Timeline { class Vector4RecorderUnit; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_TIMELINE_MATERIALINFO_ADDCHANGKEY_1_OFFSET UNITYSDK_OFFSET(0x1F19D9C0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_ADDCHANGKEY_2_OFFSET UNITYSDK_OFFSET(0x1F19D0C0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_ADDCHANGKEY_3_OFFSET UNITYSDK_OFFSET(0x1F19DC10)
#define MOLEMOLE_TIMELINE_MATERIALINFO_ADDCHANGKEY_OFFSET UNITYSDK_OFFSET(0x1F19CC30)
#define MOLEMOLE_TIMELINE_MATERIALINFO_CHECKFRAMEKEYTYPE_OFFSET UNITYSDK_OFFSET(0x1F19B2A0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_CHECKINITVALUEISCHANGE_1_OFFSET UNITYSDK_OFFSET(0x1F19A540)
#define MOLEMOLE_TIMELINE_MATERIALINFO_CHECKINITVALUEISCHANGE_2_OFFSET UNITYSDK_OFFSET(0x1F19A800)
#define MOLEMOLE_TIMELINE_MATERIALINFO_CHECKINITVALUEISCHANGE_3_OFFSET UNITYSDK_OFFSET(0x1F19AAA0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_CHECKINITVALUEISCHANGE_OFFSET UNITYSDK_OFFSET(0x1F19A430)
#define MOLEMOLE_TIMELINE_MATERIALINFO_FINDPROPERTYALTERS_OFFSET UNITYSDK_OFFSET(0x1F19B650)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GETCOLORRECORDERCONFIG_OFFSET UNITYSDK_OFFSET(0x1F198620)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GETDEFAULTRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x1F1949A0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GETINSTANCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F191980)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GETREALATTRKEYNAME_OFFSET UNITYSDK_OFFSET(0x1F19FB70)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GETRECORDERCONFIG_OFFSET UNITYSDK_OFFSET(0x1F1987B0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GETRECOVERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F194180)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F1954B0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GETSUBATTRNAME_OFFSET UNITYSDK_OFFSET(0x1F19FCC0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GET_COLORKEYLIST_OFFSET UNITYSDK_OFFSET(0x1F19A920)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GET_FLOATKEYLIST_OFFSET UNITYSDK_OFFSET(0x1F19A680)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1F191530)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GET_SHADERNAME_OFFSET UNITYSDK_OFFSET(0x1F19F7E0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GET_TEXTKEYLIST_OFFSET UNITYSDK_OFFSET(0x1F19A2B0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_GET__MATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1F191540)
#define MOLEMOLE_TIMELINE_MATERIALINFO_INITDATA_OFFSET UNITYSDK_OFFSET(0x1F19F910)
#define MOLEMOLE_TIMELINE_MATERIALINFO_INITKEYSLIST_OFFSET UNITYSDK_OFFSET(0x1F19A2A0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_LOADMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F193750)
#define MOLEMOLE_TIMELINE_MATERIALINFO_POPREPLACEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F1912F0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_RECORDERALTER_OFFSET UNITYSDK_OFFSET(0x1F19ABE0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_RECORDERINIT_OFFSET UNITYSDK_OFFSET(0x1F192480)
#define MOLEMOLE_TIMELINE_MATERIALINFO_RECORDER_OFFSET UNITYSDK_OFFSET(0x1F198940)
#define MOLEMOLE_TIMELINE_MATERIALINFO_RECOVERINIT_OFFSET UNITYSDK_OFFSET(0x1F193B40)
#define MOLEMOLE_TIMELINE_MATERIALINFO_RECOVERINSTANCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F19E540)
#define MOLEMOLE_TIMELINE_MATERIALINFO_RECOVER_OFFSET UNITYSDK_OFFSET(0x1F195D50)
#define MOLEMOLE_TIMELINE_MATERIALINFO_REFRESHINITKEYSLIST_OFFSET UNITYSDK_OFFSET(0x1F19FB60)
#define MOLEMOLE_TIMELINE_MATERIALINFO_RELOADMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F1936C0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_RELOADMESHRENDERER_1_OFFSET UNITYSDK_OFFSET(0x1F191970)
#define MOLEMOLE_TIMELINE_MATERIALINFO_RELOADMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1F193B20)
#define MOLEMOLE_TIMELINE_MATERIALINFO_REMOVEMATCAPPROPERTYADDITIONALMPB_OFFSET UNITYSDK_OFFSET(0x1F193D20)
#define MOLEMOLE_TIMELINE_MATERIALINFO_REVERTATTR_OFFSET UNITYSDK_OFFSET(0x1F194580)
#define MOLEMOLE_TIMELINE_MATERIALINFO_SETKEYWORDITEM_OFFSET UNITYSDK_OFFSET(0x1F197D60)
#define MOLEMOLE_TIMELINE_MATERIALINFO_SETKEYWORDS_1_OFFSET UNITYSDK_OFFSET(0x1F198340)
#define MOLEMOLE_TIMELINE_MATERIALINFO_SETKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1F1978B0)
#define MOLEMOLE_TIMELINE_MATERIALINFO_SETMATCAPPROPERTYADDITIONALMPB_OFFSET UNITYSDK_OFFSET(0x1F195720)
#define MOLEMOLE_TIMELINE_MATERIALINFO_SOURCEMATERIALUPDATE_OFFSET UNITYSDK_OFFSET(0x1F19FB20)
#define MOLEMOLE_TIMELINE_MATERIALINFO_UNENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1F194B40)
#define MOLEMOLE_TIMELINE_MATERIALINFO_UPDATEALTERKEYS_OFFSET UNITYSDK_OFFSET(0x1F19E330)
#define MOLEMOLE_TIMELINE_MATERIALINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F19FD30)
#define MOLEMOLE_TIMELINE_MATERIALINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F193320)
#define MOLEMOLE_TIMELINE_MATERIALINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1915C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialInfo_TypeDefinitionIndex = 32807;

	class MaterialInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters5()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x280C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_skipPropertyKeys()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x280C8);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_properties()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x280D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_floatKeysCacheDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x280D8);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_AoParamPropertyList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x280E0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_addInstanceMaterialPathMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x280E8);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_AVATAR_SCRIPT_KEYWORDS()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x280F0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_PreZKeyWordList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x280F8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_removeMatcapPropertyAdditionalMPB()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28100);
		}
		static ::System::Reflection::MethodInfo** StaticGet_setMatcapPropertyAdditionalMPBMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28108);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_avatar_keywords_enable()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28110);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_colorKeysCacheDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28118);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_MatCapPropertyList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28120);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28128);
		}
		static ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::String*, ::System::String*, ::System::Boolean>>** StaticGet_SHADER_PASSS()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::String*, ::System::String*, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28130);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_colorSubKey()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28138);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_SpShaderPassList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28140);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_SkipFloatKeys()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28148);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_avatar_shader_pass()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28150);
		}
		static ::System::Collections::Generic::List_1<::System::ValueTuple_3<::Il2CppArray<::System::String*>*, ::System::String*, ::System::Boolean>>** StaticGet_ENABLED_KEYWORDS()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple_3<::Il2CppArray<::System::String*>*, ::System::String*, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28158);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_textKeysCacheDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28160);
		}
		static ::System::Int32* StaticGet_Glitch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x7F80);
		}
		static ::System::Int32* StaticGet_Outline()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialInfo_TypeDefinitionIndex)->GetStaticField(0x7F84);
		}
		// static const ::System::Int32 RenderType_Hair = 0x2; // 0x0
		// static const ::System::Int32 RenderType_EyeBrows = 0x1; // 0x0
		// static const ::System::String* MaterialPropertyHeaderStr; // 0x0
		// static const ::System::String* TextureInfoSuffix; // 0x0
		::System::Boolean showDetail; // 0x10
		::System::Boolean newMaterialInfo; // 0x11
		::UnityEngine::Material* sourceMaterial; // 0x18
		::UnityEngine::Material* instanceMaterial; // 0x20
		::MoleMole::Timeline::RecorderMaterialType MaterialType; // 0x28
		::System::Int32 index; // 0x2C
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TextureRecorderUnit*>* textureConfigs; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Timeline::Vector4RecorderUnit*>* textureInfoConfigs; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::Timeline::FloatRecorderUnit*>* floatValConfigs; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Timeline::ColorRecorderUnit*>* ColorValConfigs; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* recorderKeyList; // 0x50
		::UnityEngine::Renderer* meshRenderer; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture*>* init_textureConfigs; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector4>* init_textureInfoConfigs; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* init_floatValConfigs; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* init_ColorValConfigs; // 0x78
		::System::Boolean setMatCapRefract; // 0x80
		::System::Boolean setMatCapTex; // 0x81
		::System::Boolean setMatCapMat; // 0x82
		::System::Boolean setRefractDepth; // 0x83
		::System::String* _shaderName; // 0x88

		::System::Void _ctor(::UnityEngine::Renderer* MeshRenderer, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO__CTOR_OFFSET))(this, MeshRenderer, index);
		}

		::System::Void _ctor_1(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO__CTOR_1_OFFSET))(this, material);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO__CCTOR_OFFSET))();
		}

		::System::Void PopReplaceMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_POPREPLACEMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_MeshRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GET_MESHRENDERER_OFFSET))(this);
		}

		::UnityEngine::MaterialPropertyBlock* get__materialPropertyBlock()
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GET__MATERIALPROPERTYBLOCK_OFFSET))(this);
		}

		::System::Void ReloadMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_RELOADMATERIAL_OFFSET))(this, material);
		}

		::System::Void ReloadMeshRenderer(::UnityEngine::Renderer* MeshRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_RELOADMESHRENDERER_OFFSET))(this, MeshRenderer);
		}

		::System::Void ReloadMeshRenderer_1(::UnityEngine::Renderer* MeshRenderer, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_RELOADMESHRENDERER_1_OFFSET))(this, MeshRenderer, index);
		}

		::System::Void RecoverInit(::System::Boolean clearMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_RECOVERINIT_OFFSET))(this, clearMpb);
		}

		::Il2CppArray<::System::Int32>* GetRecoverProperties()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GETRECOVERPROPERTIES_OFFSET))(this);
		}

		::System::Void RevertAttr(::System::String* attrName, ::UnityEngine::Timeline::KFrameFieldType fieldType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_REVERTATTR_OFFSET))(this, attrName, fieldType);
		}

		static ::System::Int32 GetDefaultRenderQueue(::UnityEngine::Material* material)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GETDEFAULTRENDERQUEUE_OFFSET))(material);
		}

		::System::Void UnEnableKeyword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_UNENABLEKEYWORD_OFFSET))(this);
		}

		static ::System::Void RemoveMatcapPropertyAdditionalMPB(::UnityEngine::Renderer* renderer, ::System::Int32 index)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_REMOVEMATCAPPROPERTYADDITIONALMPB_OFFSET))(renderer, index);
		}

		static ::System::Void SetMatcapPropertyAdditionalMPB(::UnityEngine::Renderer* renderer, ::System::Int32 index, ::UnityEngine::Shader* shader, ::System::Collections::Generic::List_1<::System::Int32>* properties, ::UnityEngine::MaterialPropertyBlock* mpb)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::Shader*, ::System::Collections::Generic::List_1<::System::Int32>*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_SETMATCAPPROPERTYADDITIONALMPB_OFFSET))(renderer, index, shader, properties, mpb);
		}

		::System::Void Recover(::System::Boolean clearMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_RECOVER_OFFSET))(this, clearMpb);
		}

		::System::Void SetKeyWords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_SETKEYWORDS_OFFSET))(this);
		}

		::System::Void SetKeyWords_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* keyframes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_SETKEYWORDS_1_OFFSET))(this, keyframes);
		}

		::System::Void SetKeyWordItem(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* floatConfigDic, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_SETKEYWORDITEM_OFFSET))(this, floatConfigDic, material);
		}

		::MoleMole::Timeline::ColorRecorderUnit* GetColorRecorderConfig(::System::String* configStr)
		{
			return ((::MoleMole::Timeline::ColorRecorderUnit*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GETCOLORRECORDERCONFIG_OFFSET))(this, configStr);
		}

		::MoleMole::Timeline::FloatRecorderUnit* GetRecorderConfig(::System::String* configStr)
		{
			return ((::MoleMole::Timeline::FloatRecorderUnit*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GETRECORDERCONFIG_OFFSET))(this, configStr);
		}

		::UnityEngine::Material* GetInstanceMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GETINSTANCEMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* GetSharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GETSHAREDMATERIAL_OFFSET))(this);
		}

		::System::Boolean Recorder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_RECORDER_OFFSET))(this);
		}

		::System::Boolean RecorderAlter(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* materialPropertyAlterDic)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_RECORDERALTER_OFFSET))(this, materialPropertyAlterDic);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FindPropertyAlters(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* keyFrames, ::UnityEngine::Material* inspectorMaterial)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_FINDPROPERTYALTERS_OFFSET))(this, keyFrames, inspectorMaterial);
		}

		::System::Void UpdateAlterKeys(::System::Collections::Generic::List_1<::System::String*>* alterKeyList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_UPDATEALTERKEYS_OFFSET))(this, alterKeyList);
		}

		::System::Void RecorderInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_RECORDERINIT_OFFSET))(this);
		}

		::System::Void RecoverInstanceMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_RECOVERINSTANCEMATERIAL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_textKeyList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GET_TEXTKEYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_floatKeyList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GET_FLOATKEYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_colorKeyList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GET_COLORKEYLIST_OFFSET))(this);
		}

		::System::String* get_shaderName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GET_SHADERNAME_OFFSET))(this);
		}

		::MoleMole::Timeline::RecorderUnitType CheckFrameKeyType(::System::String* key)
		{
			return ((::MoleMole::Timeline::RecorderUnitType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_CHECKFRAMEKEYTYPE_OFFSET))(this, key);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_INITDATA_OFFSET))(this);
		}

		::System::Void SourceMaterialUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_SOURCEMATERIALUPDATE_OFFSET))(this);
		}

		::System::Void LoadMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_LOADMATERIAL_OFFSET))(this);
		}

		::System::Void RefreshInitKeysList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_REFRESHINITKEYSLIST_OFFSET))(this);
		}

		::System::Void InitKeysList(::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_INITKEYSLIST_OFFSET))(this, forceRefresh);
		}

		::System::Void AddChangKey(::System::String* configKey, ::UnityEngine::Texture* value, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* recorderPropertyNames)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_ADDCHANGKEY_OFFSET))(this, configKey, value, recorderPropertyNames);
		}

		::System::Void AddChangKey_1(::System::String* configKey, ::System::Single value, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* recorderPropertyNames, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* keyFrames)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_ADDCHANGKEY_1_OFFSET))(this, configKey, value, recorderPropertyNames, keyFrames);
		}

		static ::System::String* GetRealAttrKeyName(::System::String* propertyName, ::UnityEngine::Timeline::KFrameFieldType fieldType)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GETREALATTRKEYNAME_OFFSET))(propertyName, fieldType);
		}

		static ::System::String* GetSubAttrName(::System::String* propertyName, ::UnityEngine::Timeline::KFrameFieldType fieldType)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_GETSUBATTRNAME_OFFSET))(propertyName, fieldType);
		}

		::System::Void AddChangKey_2(::System::String* configKey, ::UnityEngine::Vector4 value, ::UnityEngine::Vector4 priValue, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* recorderPropertyNames, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* keyFrames)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_ADDCHANGKEY_2_OFFSET))(this, configKey, value, priValue, recorderPropertyNames, keyFrames);
		}

		::System::Void AddChangKey_3(::System::String* configKey, ::UnityEngine::Color value, ::UnityEngine::Color priColor, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* recorderPropertyNames, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* keyFrames)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_ADDCHANGKEY_3_OFFSET))(this, configKey, value, priColor, recorderPropertyNames, keyFrames);
		}

		::System::Boolean CheckInitValueIsChange(::System::String* configKey, ::UnityEngine::Texture* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_CHECKINITVALUEISCHANGE_OFFSET))(this, configKey, value);
		}

		::System::Boolean CheckInitValueIsChange_1(::System::String* configKey, ::UnityEngine::Vector4 value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_CHECKINITVALUEISCHANGE_1_OFFSET))(this, configKey, value);
		}

		::System::Boolean CheckInitValueIsChange_2(::System::String* configKey, ::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_CHECKINITVALUEISCHANGE_2_OFFSET))(this, configKey, value);
		}

		::System::Boolean CheckInitValueIsChange_3(::System::String* configKey, ::UnityEngine::Color value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALINFO_CHECKINITVALUEISCHANGE_3_OFFSET))(this, configKey, value);
		}
	};
}
