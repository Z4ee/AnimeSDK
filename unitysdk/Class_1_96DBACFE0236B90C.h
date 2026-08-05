#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_96DBACFE0236B90C_Struct_2_E757704EB9697B3B.h"
#include "unitysdk/Class_1_96DBACFE0236B90C_Struct_2_E757704EB9697B3B_1.h"
#include "unitysdk/Struct_2_D7A853B9C26BE028.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_978967D122AE9143;
template <typename T> class Class_2_EFB393BC3A98673F;

inline static constexpr unsigned int Class_1_96DBACFE0236B90C_TypeDefinitionIndex = 29448;

template <typename TEvent>
class Class_1_96DBACFE0236B90C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_978967D122AE9143<TEvent>*>* Field_1_1; // 0x0
	::System::Collections::Generic::List_1<::Class_2_EFB393BC3A98673F<TEvent>*>* Field_1_0; // 0x0
	::Struct_2_D7A853B9C26BE028 Field_1_7; // 0x0
};
