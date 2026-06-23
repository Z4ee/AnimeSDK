#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_1_A03C9A14CD8D41B5_2;
class Class_3_5F93B9EE9043C5B6_3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_B8DA246CE054E60A_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x10FB3C80)
#define CLASS_2_B8DA246CE054E60A_METHOD_2_CB17EEE86A7BEFD9_OFFSET UNITYSDK_OFFSET(0x10FB3F90)
#define CLASS_2_B8DA246CE054E60A_METHOD_2_E8F40979B3DD5EA5_OFFSET UNITYSDK_OFFSET(0x10FB4150)
#define CLASS_2_B8DA246CE054E60A_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x10FB3B10)
#define CLASS_2_B8DA246CE054E60A__CTOR_OFFSET UNITYSDK_OFFSET(0x10FB3B90)

inline static constexpr unsigned int Class_2_B8DA246CE054E60A_TypeDefinitionIndex = 58036;

class Class_2_B8DA246CE054E60A : public ::Class_1_C331A5DC726F030A
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A03C9A14CD8D41B5_2*>* Field_2_0; // 0x60
	::Class_2_000597E145D7A42A<::System::Int32>* Field_2_2; // 0x68
	::System::Int32 Field_2_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8DA246CE054E60A__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8DA246CE054E60A_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8DA246CE054E60A_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_A03C9A14CD8D41B5_2*>* Method_2_CB17EEE86A7BEFD9()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A03C9A14CD8D41B5_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8DA246CE054E60A_METHOD_2_CB17EEE86A7BEFD9_OFFSET))(this);
	}

	::System::Void Method_2_E8F40979B3DD5EA5(::Class_3_5F93B9EE9043C5B6_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5F93B9EE9043C5B6_3*))((::PBYTE)hIl2Cpp + CLASS_2_B8DA246CE054E60A_METHOD_2_E8F40979B3DD5EA5_OFFSET))(this, a1);
	}
};
