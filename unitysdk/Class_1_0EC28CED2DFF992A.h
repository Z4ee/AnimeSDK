#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7E6A0C4EA6BF05CC;
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_0EC28CED2DFF992A_SPAWN_OFFSET UNITYSDK_OFFSET(0xD45AD10)
#define CLASS_1_0EC28CED2DFF992A__CTOR_OFFSET UNITYSDK_OFFSET(0xD45AD70)

inline static constexpr unsigned int Class_1_0EC28CED2DFF992A_TypeDefinitionIndex = 65800;

class Class_1_0EC28CED2DFF992A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EC28CED2DFF992A__CTOR_OFFSET))(this);
	}

	::Class_3_7E6A0C4EA6BF05CC* Spawn(::UnityEngine::GameObject* a1, ::MoleMole::Config::HollowChessboardParticleConfig* a2)
	{
		return ((::Class_3_7E6A0C4EA6BF05CC*(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::HollowChessboardParticleConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0EC28CED2DFF992A_SPAWN_OFFSET))(this, a1, a2);
	}
};
