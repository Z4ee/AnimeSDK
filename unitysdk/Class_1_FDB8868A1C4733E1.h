#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_FDB8868A1C4733E1_METHOD_1_7FF6F715AD6E6D96_OFFSET UNITYSDK_OFFSET(0x176C3E40)
#define CLASS_1_FDB8868A1C4733E1_METHOD_1_BB76C93883C22D37_OFFSET UNITYSDK_OFFSET(0x176C4170)
#define CLASS_1_FDB8868A1C4733E1__CTOR_OFFSET UNITYSDK_OFFSET(0x176C4380)

inline static constexpr unsigned int Class_1_FDB8868A1C4733E1_TypeDefinitionIndex = 51652;

class Class_1_FDB8868A1C4733E1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDB8868A1C4733E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7FF6F715AD6E6D96(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FDB8868A1C4733E1_METHOD_1_7FF6F715AD6E6D96_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB76C93883C22D37(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FDB8868A1C4733E1_METHOD_1_BB76C93883C22D37_OFFSET))(this, a1, a2);
	}
};
