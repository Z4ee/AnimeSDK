#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A280D225275881D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_2C132862F84E7A25;
template <typename T> class Class_0_16E4307DCC41950C_16;

inline static constexpr unsigned int Class_1_2C132862F84E7A25_TypeDefinitionIndex = 40583;

template <typename TItemType, typename TSort>
class Class_1_2C132862F84E7A25 : public ::System::Object
{
public:
	static ::Class_1_2C132862F84E7A25<TItemType, TSort>** StaticGet_Field_1_0()
	{
		return (::Class_1_2C132862F84E7A25<TItemType, TSort>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C132862F84E7A25_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC41950C_16<TSort>*>* Field_1_1; // 0x0
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::Enum_3_3A280D225275881D, ::System::Boolean>>* Field_1_2; // 0x0
};
