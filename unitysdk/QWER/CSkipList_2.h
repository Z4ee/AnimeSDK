#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace QWER { template <typename T1, typename T2> class CSkipListNode_2; }
namespace System { class Random; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace QWER
{
	inline static constexpr unsigned int CSkipList_2_TypeDefinitionIndex = 8817;

	template <typename T, typename U>
	class CSkipList_2 : public ::System::Object
	{
	public:
		static ::System::Random** StaticGet_m_oRandom()
		{
			return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(CSkipList_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::QWER::CSkipListNode_2<T, U>* m_oHeader; // 0x0
		::QWER::CSkipListNode_2<T, U>* m_oTail; // 0x0
		::System::Int32 m_dwHeight; // 0x0
		::System::Collections::Generic::ICollection_1<T>* m_oKeys; // 0x0
		::System::Collections::Generic::ICollection_1<U>* m_oValues; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
		::System::Collections::Generic::IComparer_1<T>* _Comparer_k__BackingField; // 0x0
	};
}
