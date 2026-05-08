#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSource.h"
#include "unitysdk/UnityEngine/AI/NavMeshDataInstance.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshData; }

#define LOCALNAVMESHBUILDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12C10360)
#define LOCALNAVMESHBUILDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12C0FF60)
#define LOCALNAVMESHBUILDER_QUANTIZEDBOUNDS_OFFSET UNITYSDK_OFFSET(0x12C103B0)
#define LOCALNAVMESHBUILDER_QUANTIZE_OFFSET UNITYSDK_OFFSET(0x12C10700)
#define LOCALNAVMESHBUILDER_START_OFFSET UNITYSDK_OFFSET(0x12C0FEE0)
#define LOCALNAVMESHBUILDER_UPDATENAVMESH_OFFSET UNITYSDK_OFFSET(0x12C10150)
#define LOCALNAVMESHBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C10810)

inline static constexpr unsigned int LocalNavMeshBuilder_TypeDefinitionIndex = 57423;

class LocalNavMeshBuilder : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* m_Tracked; // 0x18
	::UnityEngine::Vector3 m_Size; // 0x20
	::UnityEngine::AI::NavMeshData* m_NavMesh; // 0x30
	::UnityEngine::AsyncOperation* m_Operation; // 0x38
	::UnityEngine::AI::NavMeshDataInstance m_Instance; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* m_Sources; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Start()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER_START_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER_ONDISABLE_OFFSET))(this);
	}

	::System::Void UpdateNavMesh(::System::Boolean asyncUpdate)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER_UPDATENAVMESH_OFFSET))(this, asyncUpdate);
	}

	static ::UnityEngine::Vector3 Quantize(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 quant)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER_QUANTIZE_OFFSET))(v, quant);
	}

	::UnityEngine::Bounds QuantizedBounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALNAVMESHBUILDER_QUANTIZEDBOUNDS_OFFSET))(this);
	}
};
