#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EA9E20FC4353C624.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_239DF6D5C9F343E1_TypeDefinitionIndex = 32382;

template <typename TObject>
class Class_1_239DF6D5C9F343E1 : public ::System::Object
{
public:
	::System::Nullable_1<::System::Int64> Field_1_0; // 0x0
	::System::Boolean Field_1_1; // 0x0
	::Enum_3_EA9E20FC4353C624 Field_1_2; // 0x0
	TObject Field_1_3; // 0x0
	::System::Action_2<::Enum_3_EA9E20FC4353C624, TObject>* Field_1_4; // 0x0
	static ::System::Collections::Generic::List_1<::System::Int64>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::List_1<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_239DF6D5C9F343E1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
