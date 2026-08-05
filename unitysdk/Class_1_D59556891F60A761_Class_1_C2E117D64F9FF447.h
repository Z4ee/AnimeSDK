#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_KeyCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_1_A72BFC623106BA9B;
template <typename T> class Class_1_B40FB169D1647C91;
template <typename T> class Class_1_D59556891F60A761;

inline static constexpr unsigned int Class_1_D59556891F60A761_Class_1_C2E117D64F9FF447_TypeDefinitionIndex = 28818;

template <typename TVertex>
class Class_1_D59556891F60A761_Class_1_C2E117D64F9FF447 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x0
	::Class_1_B40FB169D1647C91<TVertex>* Field_1_0; // 0x0
	::System::Int32 Field_1_7; // 0x0
	::Class_1_D59556891F60A761<TVertex>* Field_1_6; // 0x0
	TVertex Field_1_5; // 0x0
	TVertex Field_1_4; // 0x0
	::System::Collections::Generic::Dictionary_2_KeyCollection_Enumerator<TVertex, ::Class_1_A72BFC623106BA9B<TVertex>*> Field_1_11; // 0x0
};
