#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_C42E6B3B5FED49EF_CLASS_1_B5EB263A50097CCA__CTOR_OFFSET UNITYSDK_OFFSET(0x179CE090)

inline static constexpr unsigned int Class_1_C42E6B3B5FED49EF_Class_1_B5EB263A50097CCA_TypeDefinitionIndex = 40276;

class Class_1_C42E6B3B5FED49EF_Class_1_B5EB263A50097CCA : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C42E6B3B5FED49EF_CLASS_1_B5EB263A50097CCA__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
