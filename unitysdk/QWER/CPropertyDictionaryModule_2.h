#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/CPropertyModule.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace QWER { class CPropertyObjectModule; }
namespace QWER { class DOnPropertyModuleChanged; }
namespace QWER { template <typename T1, typename T2> class DOnDictionaryItemChanged_2; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace QWER
{
	inline static constexpr unsigned int CPropertyDictionaryModule_2_TypeDefinitionIndex = 9663;

	template <typename TKey, typename TValue>
	class CPropertyDictionaryModule_2 : public ::QWER::CPropertyModule
	{
	public:
		static ::System::Boolean* StaticGet_m_bIsPropertyModule()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CPropertyDictionaryModule_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::QWER::DOnDictionaryItemChanged_2<TKey, TValue>* OnItemChanged; // 0x0
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* m_oItems; // 0x0
	};
}
