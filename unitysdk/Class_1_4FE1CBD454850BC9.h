#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B87448D5E720C3DE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4FE1CBD454850BC9_METHOD_1_C6A6CBEA51BC74EE_OFFSET UNITYSDK_OFFSET(0xDAD0C80)

inline static constexpr unsigned int Class_1_4FE1CBD454850BC9_TypeDefinitionIndex = 59137;

class Class_1_4FE1CBD454850BC9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>* Method_1_C6A6CBEA51BC74EE(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_B87448D5E720C3DE>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4FE1CBD454850BC9_METHOD_1_C6A6CBEA51BC74EE_OFFSET))(a1);
	}
};
