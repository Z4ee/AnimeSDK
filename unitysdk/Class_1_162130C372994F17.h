#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_162130C372994F17_METHOD_1_B3F4255CB814F583_OFFSET UNITYSDK_OFFSET(0x16233FB0)

inline static constexpr unsigned int Class_1_162130C372994F17_TypeDefinitionIndex = 35708;

class Class_1_162130C372994F17 : public ::System::Object
{
public:
	static ::System::String* Method_1_B3F4255CB814F583(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::String*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_162130C372994F17_METHOD_1_B3F4255CB814F583_OFFSET))(a1);
	}
};
