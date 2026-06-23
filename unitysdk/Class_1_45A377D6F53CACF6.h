#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A280D225275881D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_393067F66831E081;
class Class_1_D975FF20C5F752FF;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC41950C_16;
template <typename T> class Class_1_534AF681CC2BD5FD_285;

inline static constexpr unsigned int Class_1_45A377D6F53CACF6_TypeDefinitionIndex = 61999;

template <typename TSort, typename TItemType>
class Class_1_45A377D6F53CACF6 : public ::System::Object
{
public:
	static ::Class_1_D975FF20C5F752FF** StaticGet_Field_1_0()
	{
		return (::Class_1_D975FF20C5F752FF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45A377D6F53CACF6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Class_1_534AF681CC2BD5FD_285<TSort>** StaticGet_Field_1_1()
	{
		return (::Class_1_534AF681CC2BD5FD_285<TSort>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45A377D6F53CACF6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Enum_3_3A280D225275881D, ::System::Boolean>>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::Enum_3_3A280D225275881D, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45A377D6F53CACF6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Func_2<TItemType, TSort>* Field_1_3; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC41950C_16<TSort>*>* Field_1_4; // 0x0
	::Class_1_D975FF20C5F752FF* Field_1_5; // 0x0
	::Class_1_393067F66831E081* Field_1_6; // 0x0
};
