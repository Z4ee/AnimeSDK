#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B37365D9009BA07B_METHOD_1_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0xECA6010)
#define CLASS_1_B37365D9009BA07B__CTOR_OFFSET UNITYSDK_OFFSET(0xECA6000)

inline static constexpr unsigned int Class_1_B37365D9009BA07B_TypeDefinitionIndex = 77893;

class Class_1_B37365D9009BA07B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_B37365D9009BA07B__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B37365D9009BA07B_METHOD_1_43535ED8A0DF5FF8_OFFSET))(this);
	}
};
