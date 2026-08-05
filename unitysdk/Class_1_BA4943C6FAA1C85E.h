#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

inline static constexpr unsigned int Class_1_BA4943C6FAA1C85E_TypeDefinitionIndex = 76015;

template <typename TTemplate, typename TTemplateTb, typename Key>
class Class_1_BA4943C6FAA1C85E : public ::System::Object
{
public:
	TTemplateTb Field_1_3; // 0x0
	::Il2CppArray<TTemplate>* Field_1_2; // 0x0
	::System::Collections::Generic::Dictionary_2<Key, ::System::Int32>* Field_1_1; // 0x0
	::System::Collections::Generic::HashSet_1<::System::Int64>* Field_1_0; // 0x0
	::System::Int32 Field_1_7; // 0x0
	::System::Boolean Field_1_6; // 0x0
};
