#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_8AE5F743C6E492E4_CLASS_1_F7AB7CD32E0D15A2_METHOD_1_8E95ABD9E68124A7_OFFSET UNITYSDK_OFFSET(0x175C2CF0)
#define CLASS_3_8AE5F743C6E492E4_CLASS_1_F7AB7CD32E0D15A2__CTOR_OFFSET UNITYSDK_OFFSET(0x175C2CE0)

inline static constexpr unsigned int Class_3_8AE5F743C6E492E4_Class_1_F7AB7CD32E0D15A2_TypeDefinitionIndex = 82163;

class Class_3_8AE5F743C6E492E4_Class_1_F7AB7CD32E0D15A2 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_CLASS_1_F7AB7CD32E0D15A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8E95ABD9E68124A7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_CLASS_1_F7AB7CD32E0D15A2_METHOD_1_8E95ABD9E68124A7_OFFSET))(this, a1);
	}
};
