#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_27F786FF2A30778C_Struct_2_B744C92E4C2834FF.h"
#include "unitysdk/Struct_2_5A49B4EE89301F2D.h"
#include "unitysdk/Struct_2_784439AEF4F0C5A6.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_27B2F23D9FC8231C;
template <typename T> class Class_1_27F786FF2A30778C;

inline static constexpr unsigned int Class_1_27F786FF2A30778C_TypeDefinitionIndex = 18900;

template <typename T>
class Class_1_27F786FF2A30778C : public ::System::Object
{
public:
	static ::System::Collections::Generic::EqualityComparer_1<T>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::EqualityComparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27F786FF2A30778C_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<T>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27F786FF2A30778C_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Il2CppArray<T>* Field_1_7; // 0x0
	::System::Int32 Field_1_6; // 0x0
};
