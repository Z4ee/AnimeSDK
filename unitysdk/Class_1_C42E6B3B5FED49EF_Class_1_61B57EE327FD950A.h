#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C42E6B3B5FED49EF_CLASS_1_61B57EE327FD950A__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD0140)

inline static constexpr unsigned int Class_1_C42E6B3B5FED49EF_Class_1_61B57EE327FD950A_TypeDefinitionIndex = 55437;

class Class_1_C42E6B3B5FED49EF_Class_1_61B57EE327FD950A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_C42E6B3B5FED49EF_CLASS_1_61B57EE327FD950A__CTOR_OFFSET))(this, a1);
	}
};
