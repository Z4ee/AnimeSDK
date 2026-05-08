#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigHollowChessboardEntityBehavior; }
namespace System { class Action; }

#define CLASS_1_DABBB9C83801AADE_CLASS_1_BE9699143040BF01_METHOD_1_24EDB311231EE943_OFFSET UNITYSDK_OFFSET(0xE905A10)
#define CLASS_1_DABBB9C83801AADE_CLASS_1_BE9699143040BF01__CTOR_OFFSET UNITYSDK_OFFSET(0xE905A00)

inline static constexpr unsigned int Class_1_DABBB9C83801AADE_Class_1_BE9699143040BF01_TypeDefinitionIndex = 72631;

class Class_1_DABBB9C83801AADE_Class_1_BE9699143040BF01 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DABBB9C83801AADE_CLASS_1_BE9699143040BF01__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_24EDB311231EE943(::MoleMole::ConfigHollowChessboardEntityBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigHollowChessboardEntityBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_DABBB9C83801AADE_CLASS_1_BE9699143040BF01_METHOD_1_24EDB311231EE943_OFFSET))(this, a1);
	}
};
