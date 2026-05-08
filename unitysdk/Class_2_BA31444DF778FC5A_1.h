#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_BA31444DF778FC5A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16539E90)

inline static constexpr unsigned int Class_2_BA31444DF778FC5A_1_TypeDefinitionIndex = 60407;

class Class_2_BA31444DF778FC5A_1 : public ::System::Attribute
{
public:
	::Il2CppArray<::System::Type*>* Field_2_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::System::Type*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_2_BA31444DF778FC5A_1__CTOR_OFFSET))(this, a1);
	}
};
