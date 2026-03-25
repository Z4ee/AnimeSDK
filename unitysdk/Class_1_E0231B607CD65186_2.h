#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5D59FA599856BA9B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0231B607CD65186_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1678A4C0)

inline static constexpr unsigned int Class_1_E0231B607CD65186_2_TypeDefinitionIndex = 32214;

class Class_1_E0231B607CD65186_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_5D59FA599856BA9B*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0231B607CD65186_2__CTOR_OFFSET))(this);
	}
};
