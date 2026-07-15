#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_99687E8C8BA89056_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18B91450)

inline static constexpr unsigned int Class_1_99687E8C8BA89056_1_TypeDefinitionIndex = 47109;

class Class_1_99687E8C8BA89056_1 : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* HandleRight; // 0x10
	::Il2CppArray<::System::Single>* HandleLeft; // 0x18
	::Il2CppArray<::System::Single>* Pos; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99687E8C8BA89056_1__CTOR_OFFSET))(this);
	}
};
