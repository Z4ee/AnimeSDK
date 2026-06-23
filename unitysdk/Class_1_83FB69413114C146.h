#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
template <typename T> class Class_1_D3E9DE860A70D99F;

inline static constexpr unsigned int Class_1_83FB69413114C146_TypeDefinitionIndex = 28746;

template <typename TParam>
class Class_1_83FB69413114C146 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x0
	::Il2CppArray<TParam>* Field_1_1; // 0x0
	::System::Int32 Field_1_2; // 0x0
	::System::Collections::Generic::Dictionary_2<TParam, ::System::UInt32>* Field_1_3; // 0x0
	::System::Collections::Generic::IEqualityComparer_1<TParam>* Field_1_4; // 0x0
};
