#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F496B70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCECOLLECTION_GET_ITEMSARRAY_OFFSET UNITYSDK_OFFSET(0x1F496B90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F496C40)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGGameObjectResourceCollection_TypeDefinitionIndex = 39543;

	class CGGameObjectResourceCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Items; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* PoolNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCECOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Component*>* get_ItemsArray()
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCECOLLECTION_GET_ITEMSARRAY_OFFSET))(this);
		}
	};
}
