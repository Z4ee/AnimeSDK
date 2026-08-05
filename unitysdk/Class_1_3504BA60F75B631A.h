#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5FBB235457C1293C;
namespace MoleMole { class MonoGamepadNavigatableList; }

#define CLASS_1_3504BA60F75B631A__CTOR_OFFSET UNITYSDK_OFFSET(0x12C8C610)

inline static constexpr unsigned int Class_1_3504BA60F75B631A_TypeDefinitionIndex = 51059;

class Class_1_3504BA60F75B631A : public ::System::Object
{
public:
	::MoleMole::MonoGamepadNavigatableList* Field_1_1; // 0x10
	::Class_1_5FBB235457C1293C* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3504BA60F75B631A__CTOR_OFFSET))(this);
	}
};
