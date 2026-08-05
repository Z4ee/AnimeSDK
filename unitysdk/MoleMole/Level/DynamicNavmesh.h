#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_LEVEL_DYNAMICNAVMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x149F2410)

namespace MoleMole::Level
{
	inline static constexpr unsigned int DynamicNavmesh_TypeDefinitionIndex = 78893;

	class DynamicNavmesh : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_WalkablePoint; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_DYNAMICNAVMESH__CTOR_OFFSET))(this);
		}
	};
}
