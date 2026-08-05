#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_EDF67A74A9B92E18;

inline static constexpr unsigned int Class_1_A72BFC623106BA9B_1_TypeDefinitionIndex = 29262;

template <typename T>
class Class_1_A72BFC623106BA9B_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x20; // 0x0
	static ::Class_1_EDF67A74A9B92E18<T>** StaticGet_Field_1_0()
	{
		return (::Class_1_EDF67A74A9B92E18<T>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A72BFC623106BA9B_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
