#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2670985A37556FEA_METHOD_1_521FF42A136F3888_1_OFFSET UNITYSDK_OFFSET(0x8D05A40)
#define CLASS_1_2670985A37556FEA_METHOD_1_521FF42A136F3888_OFFSET UNITYSDK_OFFSET(0x8D059B0)
#define CLASS_1_2670985A37556FEA__CTOR_OFFSET UNITYSDK_OFFSET(0x8D05A30)

inline static constexpr unsigned int Class_1_2670985A37556FEA_TypeDefinitionIndex = 53040;

class Class_1_2670985A37556FEA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>* Field_1_3; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2670985A37556FEA__CTOR_OFFSET))(this);
	}

	static ::Class_1_2670985A37556FEA* Method_1_521FF42A136F3888(::System::String* a1)
	{
		return ((::Class_1_2670985A37556FEA*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2670985A37556FEA_METHOD_1_521FF42A136F3888_OFFSET))(a1);
	}

	static ::Class_1_2670985A37556FEA* Method_1_521FF42A136F3888_1(::System::String* a1)
	{
		return ((::Class_1_2670985A37556FEA*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2670985A37556FEA_METHOD_1_521FF42A136F3888_1_OFFSET))(a1);
	}
};
