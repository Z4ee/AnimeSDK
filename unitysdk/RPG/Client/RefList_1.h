#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RefList_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int RefList_1_TypeDefinitionIndex = 33821;

	template <typename T>
	class RefList_1 : public ::System::Object
	{
	public:
		// static const ::System::Int32 _defaultCapacity = 0x4; // 0x0
		::Il2CppArray<T>* _items; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		static ::Il2CppArray<T>** StaticGet__emptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(RefList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
