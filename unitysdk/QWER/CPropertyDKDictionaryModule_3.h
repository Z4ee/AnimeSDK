#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/CPropertyModule.h"
#include "unitysdk/QWER/SDoubleKeyValue_3.h"

namespace QWER { class CPropertyObjectModule; }
namespace QWER { class DOnPropertyModuleChanged; }
namespace QWER { template <typename T1, typename T2, typename T3> class DOnDKDictionaryItemChanged_3; }
namespace QWER { template <typename T1, typename T2> class CSubDictionary_2; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace QWER
{
	inline static constexpr unsigned int CPropertyDKDictionaryModule_3_TypeDefinitionIndex = 9668;

	template <typename TKey, typename TSubKey, typename TValue>
	class CPropertyDKDictionaryModule_3 : public ::QWER::CPropertyModule
	{
	public:
		static ::System::Boolean* StaticGet_m_bIsPropertyModule()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CPropertyDKDictionaryModule_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::QWER::DOnDKDictionaryItemChanged_3<TKey, TSubKey, TValue>* OnItemChanged; // 0x0
		::System::Collections::Generic::Dictionary_2<TKey, ::QWER::CSubDictionary_2<TSubKey, TValue>*>* m_oItems; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
	};
}
