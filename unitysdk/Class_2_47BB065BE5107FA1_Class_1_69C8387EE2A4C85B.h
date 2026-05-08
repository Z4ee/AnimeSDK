#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_90F2E0A39C190236.h"
#include "unitysdk/System/Object.h"

class Class_2_47BB065BE5107FA1_Class_1_ADF5EC089BB8F559;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_47BB065BE5107FA1_CLASS_1_69C8387EE2A4C85B_METHOD_1_ED1B895C4E005D90_OFFSET UNITYSDK_OFFSET(0x12DD66D0)
#define CLASS_2_47BB065BE5107FA1_CLASS_1_69C8387EE2A4C85B__CTOR_OFFSET UNITYSDK_OFFSET(0x12DD66C0)

inline static constexpr unsigned int Class_2_47BB065BE5107FA1_Class_1_69C8387EE2A4C85B_TypeDefinitionIndex = 72845;

class Class_2_47BB065BE5107FA1_Class_1_69C8387EE2A4C85B : public ::System::Object
{
public:
	::Struct_2_90F2E0A39C190236 Field_1_0; // 0x10
	::Class_2_47BB065BE5107FA1_Class_1_ADF5EC089BB8F559* Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_69C8387EE2A4C85B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_ED1B895C4E005D90(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1_CLASS_1_69C8387EE2A4C85B_METHOD_1_ED1B895C4E005D90_OFFSET))(this, a1, a2);
	}
};
