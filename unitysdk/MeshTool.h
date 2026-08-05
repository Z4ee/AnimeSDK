#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MeshTool_ExtrudeMethod.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshFilter; }

#define MESHTOOL_GAUSSIAN_OFFSET UNITYSDK_OFFSET(0x150D5140)
#define MESHTOOL_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x150D49C0)
#define MESHTOOL_START_OFFSET UNITYSDK_OFFSET(0x150D4230)
#define MESHTOOL_UPDATE_OFFSET UNITYSDK_OFFSET(0x150D4280)
#define MESHTOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x150D5240)

inline static constexpr unsigned int MeshTool_TypeDefinitionIndex = 90870;

class MeshTool : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* m_Filters; // 0x18
	::System::Single m_Radius; // 0x20
	::System::Single m_Power; // 0x24
	::MeshTool_ExtrudeMethod m_Method; // 0x28
	::UnityEngine::RaycastHit m_HitInfo; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHTOOL__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHTOOL_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHTOOL_UPDATE_OFFSET))(this);
	}

	::System::Void ModifyMesh(::UnityEngine::Vector3 displacement, ::UnityEngine::Vector3 center)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MESHTOOL_MODIFYMESH_OFFSET))(this, displacement, center);
	}

	static ::System::Single Gaussian(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 mean, ::System::Single dev)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MESHTOOL_GAUSSIAN_OFFSET))(pos, mean, dev);
	}
};
