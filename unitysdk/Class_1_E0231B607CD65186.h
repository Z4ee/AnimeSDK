#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_764BA606FA6BC86E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0231B607CD65186__CTOR_OFFSET UNITYSDK_OFFSET(0x138CEB10)

inline static constexpr unsigned int Class_1_E0231B607CD65186_TypeDefinitionIndex = 58002;

class Class_1_E0231B607CD65186 : public ::System::Object
{
public:
	::Class_1_764BA606FA6BC86E* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_764BA606FA6BC86E*>* Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0231B607CD65186__CTOR_OFFSET))(this);
	}
};
