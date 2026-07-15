#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_4328469CF76AE02A_TypeDefinitionIndex = 55217;

struct alignas(8) Struct_2_4328469CF76AE02A
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Bounds Field_2_1; // 0x1C
	::System::Boolean Field_2_2; // 0x34
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_3; // 0x38
	::System::Boolean Field_2_4; // 0x40
};
