#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A9AFDB69D1CFE244__CTOR_OFFSET UNITYSDK_OFFSET(0x180CB830)

inline static constexpr unsigned int Class_1_A9AFDB69D1CFE244_TypeDefinitionIndex = 41105;

class Class_1_A9AFDB69D1CFE244 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9AFDB69D1CFE244__CTOR_OFFSET))(this);
	}
};
