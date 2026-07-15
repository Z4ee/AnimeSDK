#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/ExposedList_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace Spine { template <typename T> class ExposedList_1; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Spine
{
	inline static constexpr unsigned int ExposedList_1_TypeDefinitionIndex = 37514;

	template <typename T>
	class ExposedList_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* Items; // 0x0
		::System::Int32 Count; // 0x0
		// static const ::System::Int32 DefaultCapacity = 0x4; // 0x0
		static ::Il2CppArray<T>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(ExposedList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 version; // 0x0
	};
}
