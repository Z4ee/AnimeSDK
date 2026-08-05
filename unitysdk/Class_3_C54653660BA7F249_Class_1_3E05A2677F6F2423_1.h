#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_C54653660BA7F249_CLASS_1_3E05A2677F6F2423_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19F6C9E0)

inline static constexpr unsigned int Class_3_C54653660BA7F249_Class_1_3E05A2677F6F2423_1_TypeDefinitionIndex = 45986;

class Class_3_C54653660BA7F249_Class_1_3E05A2677F6F2423_1 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C54653660BA7F249_CLASS_1_3E05A2677F6F2423_1__CTOR_OFFSET))(this);
	}
};
