#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
template <typename T1, typename T2> class Class_1_CB49FF2F02541F08;

inline static constexpr unsigned int Class_1_CB49FF2F02541F08_TypeDefinitionIndex = 44594;

template <typename T, typename TTarget>
class Class_1_CB49FF2F02541F08 : public ::System::Object
{
public:
	static ::Class_1_CB49FF2F02541F08<T, TTarget>** StaticGet_Field_1_0()
	{
		return (::Class_1_CB49FF2F02541F08<T, TTarget>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB49FF2F02541F08_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::IList_1<T>* Field_1_1; // 0x0
	::System::Func_2<T, TTarget>* Field_1_2; // 0x0
};
