#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoTowerHolderObject_Enum_3_A194B73A82D9E1B3.h"
#include "unitysdk/System/Object.h"

class Class_2_AC9FD4BF1AF061DA;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_AC9FD4BF1AF061DA_CLASS_1_5815702A0F6B802E_METHOD_1_79B26FFCD26B6FE1_OFFSET UNITYSDK_OFFSET(0x13A1A600)
#define CLASS_2_AC9FD4BF1AF061DA_CLASS_1_5815702A0F6B802E__CTOR_OFFSET UNITYSDK_OFFSET(0x13A1A5F0)

inline static constexpr unsigned int Class_2_AC9FD4BF1AF061DA_Class_1_5815702A0F6B802E_TypeDefinitionIndex = 85649;

class Class_2_AC9FD4BF1AF061DA_Class_1_5815702A0F6B802E : public ::System::Object
{
public:
	::Class_2_AC9FD4BF1AF061DA* Field_1_0; // 0x10
	::MoleMole::MonoTowerHolderObject_Enum_3_A194B73A82D9E1B3 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_CLASS_1_5815702A0F6B802E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_79B26FFCD26B6FE1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_AC9FD4BF1AF061DA_CLASS_1_5815702A0F6B802E_METHOD_1_79B26FFCD26B6FE1_OFFSET))(this, a1);
	}
};
