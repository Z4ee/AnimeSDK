#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/CPropertyObject.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace QWER { class CPropertyModule; }
namespace QWER { class CPropertyObjectModule; }
namespace QWER { class DOnPropertyModuleChanged; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace QWER
{
	inline static constexpr unsigned int CPDictionary_2_TypeDefinitionIndex = 9659;

	template <typename TKey, typename TValue>
	class CPDictionary_2 : public ::QWER::CPropertyObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* m_oItems; // 0x0
		static ::System::Boolean* StaticGet_m_bIsPropertyModule()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CPDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
