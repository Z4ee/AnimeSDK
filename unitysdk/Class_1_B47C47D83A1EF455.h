#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33A7AE9308D51C5;
namespace MoleMole { class MonoSteer; }

#define CLASS_1_B47C47D83A1EF455__CTOR_OFFSET UNITYSDK_OFFSET(0x149352C0)

inline static constexpr unsigned int Class_1_B47C47D83A1EF455_TypeDefinitionIndex = 63869;

class Class_1_B47C47D83A1EF455 : public ::System::Object
{
public:
	::Class_1_D33A7AE9308D51C5* Field_1_1; // 0x10
	::MoleMole::MonoSteer* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_D33A7AE9308D51C5* a1, ::MoleMole::MonoSteer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33A7AE9308D51C5*, ::MoleMole::MonoSteer*))((::PBYTE)hIl2Cpp + CLASS_1_B47C47D83A1EF455__CTOR_OFFSET))(this, a1, a2);
	}
};
