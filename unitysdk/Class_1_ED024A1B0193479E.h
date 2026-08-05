#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_C8DD384065D32AEE.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ED024A1B0193479E_METHOD_1_7917BA5F2BA2FB43_OFFSET UNITYSDK_OFFSET(0x137ACD00)

inline static constexpr unsigned int Class_1_ED024A1B0193479E_TypeDefinitionIndex = 81983;

class Class_1_ED024A1B0193479E : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Struct_2_C8DD384065D32AEE>* Method_1_7917BA5F2BA2FB43(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_C8DD384065D32AEE>*(*)(::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_1_ED024A1B0193479E_METHOD_1_7917BA5F2BA2FB43_OFFSET))(a1);
	}
};
