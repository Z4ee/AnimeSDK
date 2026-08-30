#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_73E5271104319C89.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace System { class String; }

#define CLASS_3_129FC72B90ACBC5A_GET_REQUIRESTANDONGROUND_OFFSET UNITYSDK_OFFSET(0x1AF4B2B0)
#define CLASS_3_129FC72B90ACBC5A_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1AF4B260)
#define CLASS_3_129FC72B90ACBC5A_METHOD_3_CBCE742F89E53F47_OFFSET UNITYSDK_OFFSET(0x1AF4ADA0)
#define CLASS_3_129FC72B90ACBC5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF4AD50)

inline static constexpr unsigned int Class_3_129FC72B90ACBC5A_TypeDefinitionIndex = 57258;

class Class_3_129FC72B90ACBC5A : public ::Class_2_73E5271104319C89
{
public:
	::System::Boolean KCCKBLNMHMO; // 0x1A0

	::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_129FC72B90ACBC5A__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_3_CBCE742F89E53F47(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_129FC72B90ACBC5A_METHOD_3_CBCE742F89E53F47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_129FC72B90ACBC5A_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean get_RequireStandOnGround()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_129FC72B90ACBC5A_GET_REQUIRESTANDONGROUND_OFFSET))(this);
	}
};
