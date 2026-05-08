#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGMeshResource; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BE8C440)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCECOLLECTION_GET_ITEMSARRAY_OFFSET UNITYSDK_OFFSET(0x1BE8C460)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8C510)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGMeshResourceCollection_TypeDefinitionIndex = 37313;

	class CGMeshResourceCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGMeshResource*>* Items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCECOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Component*>* get_ItemsArray()
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCECOLLECTION_GET_ITEMSARRAY_OFFSET))(this);
		}
	};
}
