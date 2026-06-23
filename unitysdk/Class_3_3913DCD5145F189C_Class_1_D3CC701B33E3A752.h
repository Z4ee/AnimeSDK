#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_3913DCD5145F189C_CLASS_1_D3CC701B33E3A752_METHOD_1_B3E446386788F7A8_OFFSET UNITYSDK_OFFSET(0x115B34F0)
#define CLASS_3_3913DCD5145F189C_CLASS_1_D3CC701B33E3A752__CTOR_OFFSET UNITYSDK_OFFSET(0x115B34E0)

inline static constexpr unsigned int Class_3_3913DCD5145F189C_Class_1_D3CC701B33E3A752_TypeDefinitionIndex = 39550;

class Class_3_3913DCD5145F189C_Class_1_D3CC701B33E3A752 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3913DCD5145F189C_CLASS_1_D3CC701B33E3A752__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B3E446386788F7A8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3913DCD5145F189C_CLASS_1_D3CC701B33E3A752_METHOD_1_B3E446386788F7A8_OFFSET))(this, a1);
	}
};
