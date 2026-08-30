#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArtPrefabPreview_MeshPartLodInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_ARTPREFABPREVIEW_GET_MESHLOD_OFFSET UNITYSDK_OFFSET(0xC77BDA0)
#define RPG_CLIENT_ARTPREFABPREVIEW_LOADMESH_OFFSET UNITYSDK_OFFSET(0xC77C090)
#define RPG_CLIENT_ARTPREFABPREVIEW_METHOD_5_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0xC77BFD0)
#define RPG_CLIENT_ARTPREFABPREVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC77BDC0)
#define RPG_CLIENT_ARTPREFABPREVIEW_SET_MESHLOD_OFFSET UNITYSDK_OFFSET(0xC77BDB0)
#define RPG_CLIENT_ARTPREFABPREVIEW_UNLOADMESH_OFFSET UNITYSDK_OFFSET(0xC77BE10)
#define RPG_CLIENT_ARTPREFABPREVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xC77C380)

namespace RPG::Client
{
	inline static constexpr unsigned int ArtPrefabPreview_TypeDefinitionIndex = 68324;

	class ArtPrefabPreview : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::String*>* MaterialVariantKeys; // 0x18
		::Il2CppArray<::RPG::Client::ArtPrefabPreview_MeshPartLodInfo>* MeshParts; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* IGKKDEPNHIJ; // 0x28
		::System::Int32 _MeshLod_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MeshLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW_GET_MESHLOD_OFFSET))(this);
		}

		::System::Void set_MeshLod(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW_SET_MESHLOD_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void UnloadMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW_UNLOADMESH_OFFSET))(this);
		}

		::System::Void Method_5_45714050EDEF8291()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW_METHOD_5_45714050EDEF8291_OFFSET))(this);
		}

		::System::Boolean LoadMesh(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW_LOADMESH_OFFSET))(this, a1);
		}
	};
}
