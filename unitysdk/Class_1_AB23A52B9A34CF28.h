#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_AB23A52B9A34CF28_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x13BAB570)
#define CLASS_1_AB23A52B9A34CF28_METHOD_1_3AE0903B42435E60_OFFSET UNITYSDK_OFFSET(0x13BAB6B0)
#define CLASS_1_AB23A52B9A34CF28_METHOD_1_8249CBC66AA43E88_OFFSET UNITYSDK_OFFSET(0x13BAB370)
#define CLASS_1_AB23A52B9A34CF28_METHOD_1_8C68E2CDEEC884A6_OFFSET UNITYSDK_OFFSET(0x13BABAE0)
#define CLASS_1_AB23A52B9A34CF28__CTOR_OFFSET UNITYSDK_OFFSET(0x13BABCF0)

inline static constexpr unsigned int Class_1_AB23A52B9A34CF28_TypeDefinitionIndex = 68488;

class Class_1_AB23A52B9A34CF28 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8249CBC66AA43E88(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28_METHOD_1_8249CBC66AA43E88_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_3AE0903B42435E60(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28_METHOD_1_3AE0903B42435E60_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C68E2CDEEC884A6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB23A52B9A34CF28_METHOD_1_8C68E2CDEEC884A6_OFFSET))(this, a1);
	}
};
