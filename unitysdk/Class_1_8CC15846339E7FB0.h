#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8CC15846339E7FB0_Struct_2_B744C92E4C2834FF.h"
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
template <typename T> class Class_1_8CC15846339E7FB0;
template <typename T> class Class_1_F903D5E6F6659E39;

inline static constexpr unsigned int Class_1_8CC15846339E7FB0_TypeDefinitionIndex = 18619;

template <typename T>
class Class_1_8CC15846339E7FB0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::EqualityComparer_1<T>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::EqualityComparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CC15846339E7FB0_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<T>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CC15846339E7FB0_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Il2CppArray<T>* Field_1_2; // 0x0
	::System::Int32 Field_1_3; // 0x0
};
