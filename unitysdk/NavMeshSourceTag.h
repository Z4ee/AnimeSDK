#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSource.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Terrain; }

#define NAVMESHSOURCETAG_COLLECT_OFFSET UNITYSDK_OFFSET(0xE03B7F0)
#define NAVMESHSOURCETAG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE03B430)
#define NAVMESHSOURCETAG_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE03B070)
#define NAVMESHSOURCETAG__CCTOR_OFFSET UNITYSDK_OFFSET(0xE03C090)
#define NAVMESHSOURCETAG__CTOR_OFFSET UNITYSDK_OFFSET(0xE03C040)

inline static constexpr unsigned int NavMeshSourceTag_TypeDefinitionIndex = 55909;

class NavMeshSourceTag : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>** StaticGet_m_Meshes()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSourceTag_TypeDefinitionIndex)->GetStaticField(0x4A310);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Terrain*>** StaticGet_m_Terrains()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Terrain*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSourceTag_TypeDefinitionIndex)->GetStaticField(0x4A318);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHSOURCETAG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAVMESHSOURCETAG__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHSOURCETAG_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHSOURCETAG_ONDISABLE_OFFSET))(this);
	}

	static ::System::Void Collect(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*& sources)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*&))((::PBYTE)hIl2Cpp + NAVMESHSOURCETAG_COLLECT_OFFSET))(sources);
	}
};
