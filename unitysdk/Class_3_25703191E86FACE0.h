#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_73E5271104319C89.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace System { class String; }

#define CLASS_3_25703191E86FACE0_GET_REQUIRESTANDONGROUND_OFFSET UNITYSDK_OFFSET(0x11969AE0)
#define CLASS_3_25703191E86FACE0_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x11969A90)
#define CLASS_3_25703191E86FACE0_METHOD_3_51C5D69F3BFF1AE1_OFFSET UNITYSDK_OFFSET(0x11969AF0)
#define CLASS_3_25703191E86FACE0_METHOD_3_A17CE7E04BB973BE_OFFSET UNITYSDK_OFFSET(0x119695E0)
#define CLASS_3_25703191E86FACE0__CTOR_OFFSET UNITYSDK_OFFSET(0x11969590)

inline static constexpr unsigned int Class_3_25703191E86FACE0_TypeDefinitionIndex = 52622;

class Class_3_25703191E86FACE0 : public ::Class_2_73E5271104319C89
{
public:
	::System::Boolean Field_3_0; // 0x198

	::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_25703191E86FACE0__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_3_A17CE7E04BB973BE(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_25703191E86FACE0_METHOD_3_A17CE7E04BB973BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_25703191E86FACE0_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean get_RequireStandOnGround()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25703191E86FACE0_GET_REQUIRESTANDONGROUND_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_51C5D69F3BFF1AE1(::RPG::GameCore::CharacterInputData* P0, ::UnityEngine::Vector3 P1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_25703191E86FACE0_METHOD_3_51C5D69F3BFF1AE1_OFFSET))(this, P0, P1);
	}
};
