#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/CPropertyModule.h"

namespace QWER { class CPropertyObjectModule; }
namespace QWER { class DOnPropertyModuleChanged; }
namespace QWER { template <typename T> class DOnSetItemChanged_1; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace QWER
{
	inline static constexpr unsigned int CPropertyHashSetModule_1_TypeDefinitionIndex = 9675;

	template <typename T>
	class CPropertyHashSetModule_1 : public ::QWER::CPropertyModule
	{
	public:
		static ::System::Boolean* StaticGet_m_bIsPropertyModule()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CPropertyHashSetModule_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::QWER::DOnSetItemChanged_1<T>* OnItemChanged; // 0x0
		::System::Collections::Generic::HashSet_1<T>* m_oItems; // 0x0
	};
}
