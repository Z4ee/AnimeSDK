#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_ECA7FAC583838122__CTOR_OFFSET UNITYSDK_OFFSET(0x1357B6A0)

inline static constexpr unsigned int Class_1_ECA7FAC583838122_TypeDefinitionIndex = 77948;

class Class_1_ECA7FAC583838122 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECA7FAC583838122__CTOR_OFFSET))(this);
	}
};
