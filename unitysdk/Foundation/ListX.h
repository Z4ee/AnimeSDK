#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define FOUNDATION_LISTX_ILISTTORMTEXT_OFFSET UNITYSDK_OFFSET(0x1BE56E40)

namespace Foundation
{
	inline static constexpr unsigned int ListX_TypeDefinitionIndex = 8299;

	class ListX : public ::System::Object
	{
	public:
		static ::System::String* IListToRmText(::System::Collections::IList* list)
		{
			return ((::System::String*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + FOUNDATION_LISTX_ILISTTORMTEXT_OFFSET))(list);
		}
	};
}
