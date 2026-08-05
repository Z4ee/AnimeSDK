#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F88C4A0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshBakerGrouperCluster___c__DisplayClass1_0_TypeDefinitionIndex = 94506;

	class MB3_MeshBakerGrouperCluster___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}
	};
}
