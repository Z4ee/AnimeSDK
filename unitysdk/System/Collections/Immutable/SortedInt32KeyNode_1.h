#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Immutable/SortedInt32KeyNode_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int SortedInt32KeyNode_1_TypeDefinitionIndex = 7047;

	template <typename TValue>
	class SortedInt32KeyNode_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Immutable::SortedInt32KeyNode_1<TValue>** StaticGet_EmptyNode()
		{
			return (::System::Collections::Immutable::SortedInt32KeyNode_1<TValue>**)Il2CppClass::FromTypeDefinitionIndex(SortedInt32KeyNode_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 _key; // 0x0
		TValue _value; // 0x0
		::System::Boolean _frozen; // 0x0
		::System::Byte _height; // 0x0
		::System::Collections::Immutable::SortedInt32KeyNode_1<TValue>* _left; // 0x0
		::System::Collections::Immutable::SortedInt32KeyNode_1<TValue>* _right; // 0x0
	};
}
