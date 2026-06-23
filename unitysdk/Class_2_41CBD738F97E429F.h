#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E49938F4BFE74407.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_41CBD738F97E429F__CTOR_OFFSET UNITYSDK_OFFSET(0x11D33210)

inline static constexpr unsigned int Class_2_41CBD738F97E429F_TypeDefinitionIndex = 57636;

class Class_2_41CBD738F97E429F : public ::Class_1_E49938F4BFE74407
{
public:
	::System::Collections::Generic::List_1<::Class_1_E49938F4BFE74407*>* Field_2_0; // 0x30

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_41CBD738F97E429F__CTOR_OFFSET))(this, a1, a2);
	}
};
