#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NameValueSortedArray_1.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace System::Collections::Generic { template <typename T> class Comparer_1; }

#define CLASS_1_19A417E49B62529B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1038D430)

inline static constexpr unsigned int Class_1_19A417E49B62529B_TypeDefinitionIndex = 39451;

class Class_1_19A417E49B62529B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_19A417E49B62529B_TypeDefinitionIndex)->GetStaticField(0x302B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_19A417E49B62529B__CCTOR_OFFSET))();
	}
};
