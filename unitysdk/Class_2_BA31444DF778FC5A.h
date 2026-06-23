#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_BA31444DF778FC5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1590E190)

inline static constexpr unsigned int Class_2_BA31444DF778FC5A_TypeDefinitionIndex = 63976;

class Class_2_BA31444DF778FC5A : public ::System::Attribute
{
public:
	::Il2CppArray<::System::Type*>* Field_2_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::System::Type*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_2_BA31444DF778FC5A__CTOR_OFFSET))(this, a1);
	}
};
