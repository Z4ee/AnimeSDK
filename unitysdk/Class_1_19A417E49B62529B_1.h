#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NameValueArray_1.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace System::Collections::Generic { template <typename T> class Comparer_1; }

#define CLASS_1_19A417E49B62529B_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x153A8770)

inline static constexpr unsigned int Class_1_19A417E49B62529B_1_TypeDefinitionIndex = 51982;

class Class_1_19A417E49B62529B_1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Comparer_1<::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_19A417E49B62529B_1_TypeDefinitionIndex)->GetStaticField(0x2BA10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_19A417E49B62529B_1__CCTOR_OFFSET))();
	}
};
