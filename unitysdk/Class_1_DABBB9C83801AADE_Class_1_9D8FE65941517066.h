#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigHollowChessboardEntityBehavior; }
namespace System { class Action; }

#define CLASS_1_DABBB9C83801AADE_CLASS_1_9D8FE65941517066_METHOD_1_DE435D356107FABE_OFFSET UNITYSDK_OFFSET(0x17EB5B50)
#define CLASS_1_DABBB9C83801AADE_CLASS_1_9D8FE65941517066__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB5B40)

inline static constexpr unsigned int Class_1_DABBB9C83801AADE_Class_1_9D8FE65941517066_TypeDefinitionIndex = 58480;

class Class_1_DABBB9C83801AADE_Class_1_9D8FE65941517066 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DABBB9C83801AADE_CLASS_1_9D8FE65941517066__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DE435D356107FABE(::MoleMole::ConfigHollowChessboardEntityBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigHollowChessboardEntityBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_DABBB9C83801AADE_CLASS_1_9D8FE65941517066_METHOD_1_DE435D356107FABE_OFFSET))(this, a1);
	}
};
