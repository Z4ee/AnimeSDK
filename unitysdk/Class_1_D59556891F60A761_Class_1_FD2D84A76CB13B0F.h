#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_1_A72BFC623106BA9B;
template <typename T> class Class_1_D59556891F60A761;

inline static constexpr unsigned int Class_1_D59556891F60A761_Class_1_FD2D84A76CB13B0F_TypeDefinitionIndex = 28305;

template <typename TVertex>
class Class_1_D59556891F60A761_Class_1_FD2D84A76CB13B0F : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x0
	TVertex Field_1_1; // 0x0
	::System::Int32 Field_1_2; // 0x0
	::Class_1_D59556891F60A761<TVertex>* Field_1_3; // 0x0
	::System::Collections::Generic::Dictionary_2_Enumerator<TVertex, ::Class_1_A72BFC623106BA9B<TVertex>*> Field_1_4; // 0x0
};
