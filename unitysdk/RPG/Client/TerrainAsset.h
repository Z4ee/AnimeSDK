#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TERRAINASSET_ADDBYKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1AC9EE20)
#define RPG_CLIENT_TERRAINASSET_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AC9DEC0)
#define RPG_CLIENT_TERRAINASSET_GETPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1AC9ED90)
#define RPG_CLIENT_TERRAINASSET_LOAD_OFFSET UNITYSDK_OFFSET(0x1AC9DF10)
#define RPG_CLIENT_TERRAINASSET_METHOD_5_2A83FA3713ACC6E3_OFFSET UNITYSDK_OFFSET(0x1AC9E2E0)
#define RPG_CLIENT_TERRAINASSET_METHOD_5_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x1AC9E450)
#define RPG_CLIENT_TERRAINASSET_SETBLOCKPROPERTY_OFFSET UNITYSDK_OFFSET(0x1AC9EDE0)
#define RPG_CLIENT_TERRAINASSET_START_OFFSET UNITYSDK_OFFSET(0x1AC9E290)
#define RPG_CLIENT_TERRAINASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC9F1A0)
#define RPG_CLIENT_TERRAINASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC9F0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TerrainAsset_TypeDefinitionIndex = 68852;

	class TerrainAsset : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_ADMDNEPNFII()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainAsset_TypeDefinitionIndex)->GetStaticField(0x11560);
		}
		::Il2CppArray<::UnityEngine::MeshRenderer*>* TerrainRenders; // 0x18
		::Il2CppArray<::UnityEngine::Texture2D*>* TerrainMaskTexs; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* TexDic; // 0x28
		::System::Single _ES_TerrainAlbedoScale; // 0x30
		::System::Single _ES_TerrainCoverageScale; // 0x34
		::System::Single _TerrainControlMode; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* BlendObjRenders; // 0x40
		::System::String* Key; // 0x48
		::UnityEngine::Texture* HeightBlendTex; // 0x50
		::UnityEngine::Texture* HeightBlendDetailTex; // 0x58
		::Il2CppArray<::UnityEngine::Renderer*>* TargetTerrainRenderer; // 0x60
		::UnityEngine::Vector2 BlendBaseRange; // 0x68
		::UnityEngine::Bounds HeightBlendBounds; // 0x70
		::UnityEngine::MaterialPropertyBlock* KLLOONOEFDO; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINASSET__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINASSET_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINASSET_START_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINASSET_LOAD_OFFSET))(this);
		}

		::System::Void SetBlockProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINASSET_SETBLOCKPROPERTY_OFFSET))(this);
		}

		static ::System::String* GetPrefabName(::UnityEngine::Transform* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINASSET_GETPREFABNAME_OFFSET))(a1);
		}

		::System::Void Method_5_7F29568EA964E563()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINASSET_METHOD_5_7F29568EA964E563_OFFSET))(this);
		}

		::System::Void Method_5_2A83FA3713ACC6E3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINASSET_METHOD_5_2A83FA3713ACC6E3_OFFSET))(this);
		}

		::System::Void AddByKeywords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINASSET_ADDBYKEYWORDS_OFFSET))(this);
		}
	};
}
