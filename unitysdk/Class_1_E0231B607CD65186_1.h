#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4AD88BFF83D12C6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0231B607CD65186_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18C13F30)

inline static constexpr unsigned int Class_1_E0231B607CD65186_1_TypeDefinitionIndex = 49418;

class Class_1_E0231B607CD65186_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C4AD88BFF83D12C6*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0231B607CD65186_1__CTOR_OFFSET))(this);
	}
};
