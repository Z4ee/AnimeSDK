#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Share { class CChangedPropertyInfo; }
namespace Share { class CToChangeInfoOfProperty; }
namespace Share { template <typename T> class IPropertyOperatorHelper_1; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_0_16E4307DCC41950C;

namespace Share
{
	inline static constexpr unsigned int CPropertyOperator_1_TypeDefinitionIndex = 16867;

	template <typename T>
	class CPropertyOperator_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T, ::Share::CChangedPropertyInfo*>* m_oChangedPropertys; // 0x0
		::Share::IPropertyOperatorHelper_1<T>* m_oHelper; // 0x0
		::System::Collections::Generic::IDictionary_2<::System::UInt16, ::System::Int32>* m_oPropertys; // 0x0
		::System::Collections::Generic::IDictionary_2<::System::UInt16, ::System::Int32>* m_oPersistenceProperties; // 0x0
		::System::Action_1<::Share::CToChangeInfoOfProperty*>* OnBeforePropertyModify; // 0x0
		::System::Action_3<::System::UInt16, ::System::Int32, ::System::Int32>* OnAfterPropertySet; // 0x0
		::System::Action_1<::System::Collections::Generic::Dictionary_2<T, ::Share::CChangedPropertyInfo*>*>* OnPropertyChanged; // 0x0
	};
}
