#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
template <typename T1, typename T2> class Class_1_2C132862F84E7A25;
template <typename T1, typename T2> class Class_1_2C132862F84E7A25_Class_1_C1622A834AB980C4;

inline static constexpr unsigned int Class_1_2C132862F84E7A25_Class_1_C1622A834AB980C4_TypeDefinitionIndex = 49330;

template <typename TItemType, typename TSort>
class Class_1_2C132862F84E7A25_Class_1_C1622A834AB980C4 : public ::System::Object
{
public:
	static ::Class_1_2C132862F84E7A25_Class_1_C1622A834AB980C4<TItemType, TSort>** StaticGet_Field_1_0()
	{
		return (::Class_1_2C132862F84E7A25_Class_1_C1622A834AB980C4<TItemType, TSort>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C132862F84E7A25_Class_1_C1622A834AB980C4_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Func_2<TItemType, TSort>* Field_1_1; // 0x0
	::Class_1_2C132862F84E7A25<TItemType, TSort>* Field_1_2; // 0x0
};
