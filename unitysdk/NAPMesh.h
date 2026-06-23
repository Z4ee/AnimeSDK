#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPMESH_AWAKE_OFFSET UNITYSDK_OFFSET(0x139EAF50)
#define NAPMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x139EB0E0)

inline static constexpr unsigned int NAPMesh_TypeDefinitionIndex = 66140;

class NAPMesh : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertexsData; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* normalsData; // 0x20
	::System::Single extrusionNum; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMESH__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPMESH_AWAKE_OFFSET))(this);
	}
};
