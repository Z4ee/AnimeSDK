#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class InteriorMapping_RoomParams;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Shader; }

#define INTERIORMAPPING_APPLYLOD_OFFSET UNITYSDK_OFFSET(0x1E810BF0)
#define INTERIORMAPPING_APPLYMATERIALPROPS_OFFSET UNITYSDK_OFFSET(0x1E811470)
#define INTERIORMAPPING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E8106C0)
#define INTERIORMAPPING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E812940)
#define INTERIORMAPPING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E810AB0)
#define INTERIORMAPPING_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E812A60)
#define INTERIORMAPPING_START_OFFSET UNITYSDK_OFFSET(0x1E80F9F0)
#define INTERIORMAPPING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8133B0)
#define INTERIORMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E813110)

inline static constexpr unsigned int InteriorMapping_TypeDefinitionIndex = 34643;

class InteriorMapping : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_s_RoomMetallicGlossMap()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InteriorMapping_TypeDefinitionIndex)->GetStaticField(0x8490);
	}
	static ::System::Int32* StaticGet_s_RoomTextures()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InteriorMapping_TypeDefinitionIndex)->GetStaticField(0x8494);
	}
	static ::System::Int32* StaticGet_s_RoomParams()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InteriorMapping_TypeDefinitionIndex)->GetStaticField(0x8498);
	}
	static ::System::Int32* StaticGet_s_LODFadeFromDistance()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InteriorMapping_TypeDefinitionIndex)->GetStaticField(0x849C);
	}
	static ::System::Int32* StaticGet_s_RoomNightTextures()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InteriorMapping_TypeDefinitionIndex)->GetStaticField(0x84A0);
	}
	static ::System::Int32* StaticGet_s_LODFadeDistance()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InteriorMapping_TypeDefinitionIndex)->GetStaticField(0x84A4);
	}
	static ::System::Int32* StaticGet_s_RoomBumpMap()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InteriorMapping_TypeDefinitionIndex)->GetStaticField(0x84A8);
	}
	::System::Int32 level; // 0x18
	::System::Single LOD0FadeFromDistance; // 0x1C
	::System::Single LOD0FadeDistance; // 0x20
	::System::Single LOD1FadeFromDistance; // 0x24
	::System::Single LOD1FadeDistance; // 0x28
	::System::Int32 RoomAtlasRows; // 0x2C
	::Il2CppArray<::InteriorMapping_RoomParams*>* roomParams; // 0x30
	::UnityEngine::Shader* interiorLOD1Shader; // 0x38
	::UnityEngine::Shader* interiorLOD2Shader; // 0x40
	::UnityEngine::MeshRenderer* meshRenderer; // 0x48
	::System::Boolean previewLODChange; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* interiorMats; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* interiorMatsBackUp; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* interiorMats_LOD0; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* interiorMats_LOD1; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* interiorMats_LOD2; // 0x78
	::Il2CppArray<::UnityEngine::Vector4>* cachedRoomParams; // 0x80
	::System::String* interiorShaderName; // 0x88
	::UnityEngine::Vector3 lastCameraPositionWS; // 0x90
	::System::Int32 lastLastLevel; // 0x9C
	::System::Single updateTime; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERIORMAPPING__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INTERIORMAPPING__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERIORMAPPING_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERIORMAPPING_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERIORMAPPING_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERIORMAPPING_ONDISABLE_OFFSET))(this);
	}

	::System::Void ApplyLOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERIORMAPPING_APPLYLOD_OFFSET))(this);
	}

	::System::Void ApplyMaterialProps()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERIORMAPPING_APPLYMATERIALPROPS_OFFSET))(this);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERIORMAPPING_ONUPDATE_OFFSET))(this);
	}
};
