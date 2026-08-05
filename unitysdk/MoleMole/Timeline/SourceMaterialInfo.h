#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnitType.h"
#include "unitysdk/System/Object.h"
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

#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_ADDCHANGKEY_1_OFFSET UNITYSDK_OFFSET(0x1EF71F90)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_ADDCHANGKEY_2_OFFSET UNITYSDK_OFFSET(0x1EF71690)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_ADDCHANGKEY_3_OFFSET UNITYSDK_OFFSET(0x1EF721E0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_ADDCHANGKEY_OFFSET UNITYSDK_OFFSET(0x1EF711F0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_CHECKFRAMEKEYTYPE_OFFSET UNITYSDK_OFFSET(0x1EF6F950)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_CHECKINITVALUEISCHANGE_1_OFFSET UNITYSDK_OFFSET(0x1EF6EBF0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_CHECKINITVALUEISCHANGE_2_OFFSET UNITYSDK_OFFSET(0x1EF6EEB0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_CHECKINITVALUEISCHANGE_3_OFFSET UNITYSDK_OFFSET(0x1EF6F150)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_CHECKINITVALUEISCHANGE_OFFSET UNITYSDK_OFFSET(0x1EF6EAE0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_FINDPROPERTYALTERS_OFFSET UNITYSDK_OFFSET(0x1EF6FD10)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GETCOLORRECORDERCONFIG_OFFSET UNITYSDK_OFFSET(0x1EF6CC90)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GETREALATTRKEYNAME_OFFSET UNITYSDK_OFFSET(0x1EF74130)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GETRECORDERCONFIG_OFFSET UNITYSDK_OFFSET(0x1EF6CE20)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GETSUBATTRNAME_OFFSET UNITYSDK_OFFSET(0x1EF74280)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GET_COLORKEYLIST_OFFSET UNITYSDK_OFFSET(0x1EF6EFD0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GET_FLOATKEYLIST_OFFSET UNITYSDK_OFFSET(0x1EF6ED30)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GET_SHADERNAME_OFFSET UNITYSDK_OFFSET(0x1EF73DF0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GET_TEXTKEYLIST_OFFSET UNITYSDK_OFFSET(0x1EF6E960)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_INITDATA_OFFSET UNITYSDK_OFFSET(0x1EF73EF0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_INITKEYSLIST_OFFSET UNITYSDK_OFFSET(0x1EF6E950)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RECORDERALTER_OFFSET UNITYSDK_OFFSET(0x1EF6F290)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RECORDERINIT_OFFSET UNITYSDK_OFFSET(0x1EF68920)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RECORDER_OFFSET UNITYSDK_OFFSET(0x1EF6CFB0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RECOVERSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1EF72C80)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RECOVERTARGETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1EF72C90)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RECOVER_OFFSET UNITYSDK_OFFSET(0x1EF6ADC0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_REFRESHINITKEYSLIST_OFFSET UNITYSDK_OFFSET(0x1EF74120)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RELOADMATERIAL_OFFSET UNITYSDK_OFFSET(0x1EF69900)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_REMOVEMATCAPPROPERTYADDITIONALMPB_OFFSET UNITYSDK_OFFSET(0x1EF6A330)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_REVERTATTR_OFFSET UNITYSDK_OFFSET(0x1EF69910)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_SETKEYWORDITEM_OFFSET UNITYSDK_OFFSET(0x1EF6C3E0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_SETKEYWORDS_1_OFFSET UNITYSDK_OFFSET(0x1EF6C9B0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_SETKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1EF6BF30)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_SETMATCAPPROPERTYADDITIONALMPB_OFFSET UNITYSDK_OFFSET(0x1EF6A790)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_SOURCEMATERIALUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF74100)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_UNENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1EF69D30)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_UPDATEALTERKEYS_OFFSET UNITYSDK_OFFSET(0x1EF72AD0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF742F0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF68580)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF681F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SourceMaterialInfo_TypeDefinitionIndex = 32821;

	class SourceMaterialInfo : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_colorKeysCacheDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28240);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_textKeysCacheDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28248);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_avatar_keywords_enable()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28250);
		}
		static ::System::Reflection::MethodInfo** StaticGet_removeMatcapPropertyAdditionalMPB()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28258);
		}
		static ::System::Reflection::MethodInfo** StaticGet_setMatcapPropertyAdditionalMPBMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28260);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_avatar_shader_pass()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28268);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_SkipFloatKeys()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28270);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_properties()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28278);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_AoParamPropertyList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28280);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_floatKeysCacheDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28288);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28290);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters5()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x28298);
		}
		static ::System::Reflection::MethodInfo** StaticGet_addInstanceMaterialPathMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x282A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_skipPropertyKeys()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x282A8);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_SpShaderPassList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x282B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_colorSubKey()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x282B8);
		}
		static ::System::Int32* StaticGet_Outline()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x7FA0);
		}
		static ::System::Int32* StaticGet_Glitch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x7FA4);
		}
		// static const ::System::String* MaterialPropertyHeaderStr; // 0x0
		// static const ::System::String* TextureInfoSuffix; // 0x0
		::System::Boolean showDetail; // 0x10
		::UnityEngine::Material* sourceMaterial; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TextureRecorderUnit*>* textureConfigs; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Timeline::Vector4RecorderUnit*>* textureInfoConfigs; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Timeline::FloatRecorderUnit*>* floatValConfigs; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Timeline::ColorRecorderUnit*>* ColorValConfigs; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* recorderKeyList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture*>* init_textureConfigs; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector4>* init_textureInfoConfigs; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* init_floatValConfigs; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* init_ColorValConfigs; // 0x60
		::System::String* _shaderName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO__CTOR_1_OFFSET))(this, material);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO__CCTOR_OFFSET))();
		}

		::System::Void ReloadMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RELOADMATERIAL_OFFSET))(this, material);
		}

		::System::Void RevertAttr(::System::String* attrName, ::UnityEngine::Timeline::KFrameFieldType fieldType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_REVERTATTR_OFFSET))(this, attrName, fieldType);
		}

		::System::Void UnEnableKeyword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_UNENABLEKEYWORD_OFFSET))(this);
		}

		static ::System::Void RemoveMatcapPropertyAdditionalMPB(::UnityEngine::Renderer* renderer, ::System::Int32 index)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_REMOVEMATCAPPROPERTYADDITIONALMPB_OFFSET))(renderer, index);
		}

		static ::System::Void SetMatcapPropertyAdditionalMPB(::UnityEngine::Renderer* renderer, ::System::Int32 index, ::UnityEngine::Shader* shader, ::System::Collections::Generic::List_1<::System::Int32>* properties, ::UnityEngine::MaterialPropertyBlock* mpb)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::Shader*, ::System::Collections::Generic::List_1<::System::Int32>*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_SETMATCAPPROPERTYADDITIONALMPB_OFFSET))(renderer, index, shader, properties, mpb);
		}

		::System::Void Recover()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RECOVER_OFFSET))(this);
		}

		::System::Void SetKeyWords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_SETKEYWORDS_OFFSET))(this);
		}

		::System::Void SetKeyWords_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* keyframes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_SETKEYWORDS_1_OFFSET))(this, keyframes);
		}

		::System::Void SetKeyWordItem(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* floatConfigDic, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_SETKEYWORDITEM_OFFSET))(this, floatConfigDic, material);
		}

		::MoleMole::Timeline::ColorRecorderUnit* GetColorRecorderConfig(::System::String* configStr)
		{
			return ((::MoleMole::Timeline::ColorRecorderUnit*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GETCOLORRECORDERCONFIG_OFFSET))(this, configStr);
		}

		::MoleMole::Timeline::FloatRecorderUnit* GetRecorderConfig(::System::String* configStr)
		{
			return ((::MoleMole::Timeline::FloatRecorderUnit*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GETRECORDERCONFIG_OFFSET))(this, configStr);
		}

		::System::Boolean Recorder(::UnityEngine::Material* instanceMaterial)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RECORDER_OFFSET))(this, instanceMaterial);
		}

		::System::Boolean RecorderAlter(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* materialPropertyAlterDic)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RECORDERALTER_OFFSET))(this, materialPropertyAlterDic);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FindPropertyAlters(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* keyFrames, ::UnityEngine::Material* inspectorMaterial)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_FINDPROPERTYALTERS_OFFSET))(this, keyFrames, inspectorMaterial);
		}

		::System::Void UpdateAlterKeys(::System::Collections::Generic::List_1<::System::String*>* alterKeyList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_UPDATEALTERKEYS_OFFSET))(this, alterKeyList);
		}

		::System::Void RecorderInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RECORDERINIT_OFFSET))(this);
		}

		::System::Void RecoverSourceMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RECOVERSOURCEMATERIAL_OFFSET))(this);
		}

		::System::Void RecoverTargetMaterial(::UnityEngine::Material* instanceMaterial, ::System::Boolean skipClipChange)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_RECOVERTARGETMATERIAL_OFFSET))(this, instanceMaterial, skipClipChange);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_textKeyList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GET_TEXTKEYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_floatKeyList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GET_FLOATKEYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_colorKeyList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GET_COLORKEYLIST_OFFSET))(this);
		}

		::System::String* get_shaderName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GET_SHADERNAME_OFFSET))(this);
		}

		::MoleMole::Timeline::RecorderUnitType CheckFrameKeyType(::System::String* key)
		{
			return ((::MoleMole::Timeline::RecorderUnitType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_CHECKFRAMEKEYTYPE_OFFSET))(this, key);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_INITDATA_OFFSET))(this);
		}

		::System::Void SourceMaterialUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_SOURCEMATERIALUPDATE_OFFSET))(this);
		}

		::System::Void RefreshInitKeysList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_REFRESHINITKEYSLIST_OFFSET))(this);
		}

		::System::Void InitKeysList(::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_INITKEYSLIST_OFFSET))(this, forceRefresh);
		}

		::System::Void AddChangKey(::System::String* configKey, ::UnityEngine::Texture* value, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* recorderPropertyNames)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_ADDCHANGKEY_OFFSET))(this, configKey, value, recorderPropertyNames);
		}

		::System::Void AddChangKey_1(::System::String* configKey, ::System::Single value, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* recorderPropertyNames, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* keyFrames)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_ADDCHANGKEY_1_OFFSET))(this, configKey, value, recorderPropertyNames, keyFrames);
		}

		static ::System::String* GetRealAttrKeyName(::System::String* propertyName, ::UnityEngine::Timeline::KFrameFieldType fieldType)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GETREALATTRKEYNAME_OFFSET))(propertyName, fieldType);
		}

		static ::System::String* GetSubAttrName(::System::String* propertyName, ::UnityEngine::Timeline::KFrameFieldType fieldType)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_GETSUBATTRNAME_OFFSET))(propertyName, fieldType);
		}

		::System::Void AddChangKey_2(::System::String* configKey, ::UnityEngine::Vector4 value, ::UnityEngine::Vector4 priValue, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* recorderPropertyNames, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* keyFrames)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_ADDCHANGKEY_2_OFFSET))(this, configKey, value, priValue, recorderPropertyNames, keyFrames);
		}

		::System::Void AddChangKey_3(::System::String* configKey, ::UnityEngine::Color value, ::UnityEngine::Color priColor, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* recorderPropertyNames, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* keyFrames)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_ADDCHANGKEY_3_OFFSET))(this, configKey, value, priColor, recorderPropertyNames, keyFrames);
		}

		::System::Boolean CheckInitValueIsChange(::System::String* configKey, ::UnityEngine::Texture* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_CHECKINITVALUEISCHANGE_OFFSET))(this, configKey, value);
		}

		::System::Boolean CheckInitValueIsChange_1(::System::String* configKey, ::UnityEngine::Vector4 value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_CHECKINITVALUEISCHANGE_1_OFFSET))(this, configKey, value);
		}

		::System::Boolean CheckInitValueIsChange_2(::System::String* configKey, ::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_CHECKINITVALUEISCHANGE_2_OFFSET))(this, configKey, value);
		}

		::System::Boolean CheckInitValueIsChange_3(::System::String* configKey, ::UnityEngine::Color value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO_CHECKINITVALUEISCHANGE_3_OFFSET))(this, configKey, value);
		}
	};
}
