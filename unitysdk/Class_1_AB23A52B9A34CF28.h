#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_AB23A52B9A34CF28_METHOD_1_1AD51778485AD495_OFFSET UNITYSDK_OFFSET(0x15A45120)
#define CLASS_1_AB23A52B9A34CF28_METHOD_1_3AE0903B42435E60_OFFSET UNITYSDK_OFFSET(0x15A45420)
#define CLASS_1_AB23A52B9A34CF28_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x15A452C0)
#define CLASS_1_AB23A52B9A34CF28_METHOD_1_66E24502C9FA6732_OFFSET UNITYSDK_OFFSET(0x15A45850)
#define CLASS_1_AB23A52B9A34CF28__CTOR_OFFSET UNITYSDK_OFFSET(0x15A45A30)

inline static constexpr unsigned int Class_1_AB23A52B9A34CF28_TypeDefinitionIndex = 73240;

class Class_1_AB23A52B9A34CF28 : public ::System::Object
{
public:
	::UnityEngine::Transform* OIGGFCOBKCG; // 0x10
	::RPG::GameCore::GameEntity* KNMIMHIBENA; // 0x18
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x20
	::System::Boolean MHEAIOMEGCA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1AD51778485AD495(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28_METHOD_1_1AD51778485AD495_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_3AE0903B42435E60(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28_METHOD_1_3AE0903B42435E60_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_66E24502C9FA6732(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28_METHOD_1_66E24502C9FA6732_OFFSET))(this, a1);
	}
};
