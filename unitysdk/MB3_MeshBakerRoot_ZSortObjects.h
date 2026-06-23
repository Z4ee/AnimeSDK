#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MB3_MESHBAKERROOT_ZSORTOBJECTS_SORTBYDISTANCEALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1E7A3AA0)
#define MB3_MESHBAKERROOT_ZSORTOBJECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A4080)

inline static constexpr unsigned int MB3_MeshBakerRoot_ZSortObjects_TypeDefinitionIndex = 90545;

class MB3_MeshBakerRoot_ZSortObjects : public ::System::Object
{
public:
	::UnityEngine::Vector3 sortAxis; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERROOT_ZSORTOBJECTS__CTOR_OFFSET))(this);
	}

	::System::Void SortByDistanceAlongAxis(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gos)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MB3_MESHBAKERROOT_ZSORTOBJECTS_SORTBYDISTANCEALONGAXIS_OFFSET))(this, gos);
	}
};
