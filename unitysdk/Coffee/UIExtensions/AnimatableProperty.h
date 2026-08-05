#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UIExtensions/AnimatableProperty_ShaderPropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E2E3390)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E2E33B0)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_SET_ID_OFFSET UNITYSDK_OFFSET(0x1E2E33A0)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E2E35B0)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E2E33C0)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UPDATEMATERIALPROPERTIESTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1E2E3600)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UPDATEMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2E3A70)
#define COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E4010)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int AnimatableProperty_TypeDefinitionIndex = 34852;

	class AnimatableProperty : public ::System::Object
	{
	public:
		::System::String* m_Name; // 0x10
		::Coffee::UIExtensions::AnimatableProperty_ShaderPropertyType m_Type; // 0x18
		::System::Boolean m_IsHDRColor; // 0x1C
		::System::Int32 _id_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_SET_ID_OFFSET))(this, value);
		}

		::Coffee::UIExtensions::AnimatableProperty_ShaderPropertyType get_type()
		{
			return ((::Coffee::UIExtensions::AnimatableProperty_ShaderPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_GET_TYPE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void UpdateMaterialPropertiesThreadSafe(::System::Int32 materialInstanceId, ::System::Int32 rendererInstanceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UPDATEMATERIALPROPERTIESTHREADSAFE_OFFSET))(this, materialInstanceId, rendererInstanceId);
		}

		::System::Void UpdateMaterialProperties(::UnityEngine::Material* material, ::UnityEngine::MaterialPropertyBlock* mpb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_ANIMATABLEPROPERTY_UPDATEMATERIALPROPERTIES_OFFSET))(this, material, mpb);
		}
	};
}
