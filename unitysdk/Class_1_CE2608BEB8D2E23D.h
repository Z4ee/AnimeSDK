#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A280D225275881D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_393067F66831E081;
class Class_1_58E0C8D7517A7AB0;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC41950C_23;
template <typename T> class Class_1_534AF681CC2BD5F4;

inline static constexpr unsigned int Class_1_CE2608BEB8D2E23D_TypeDefinitionIndex = 49273;

template <typename TSort, typename TItemType>
class Class_1_CE2608BEB8D2E23D : public ::System::Object
{
public:
	static ::Class_1_58E0C8D7517A7AB0** StaticGet_Field_1_0()
	{
		return (::Class_1_58E0C8D7517A7AB0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE2608BEB8D2E23D_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Class_1_534AF681CC2BD5F4<TSort>** StaticGet_Field_1_7()
	{
		return (::Class_1_534AF681CC2BD5F4<TSort>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE2608BEB8D2E23D_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Enum_3_3A280D225275881D, ::System::Boolean>>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::Enum_3_3A280D225275881D, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE2608BEB8D2E23D_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Func_2<TItemType, TSort>* Field_1_5; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC41950C_23<TSort>*>* Field_1_4; // 0x0
	::Class_1_58E0C8D7517A7AB0* Field_1_11; // 0x0
	::Class_1_393067F66831E081* Field_1_10; // 0x0
};
