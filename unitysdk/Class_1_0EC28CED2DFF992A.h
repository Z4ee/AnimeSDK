#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3EB2168D97754EAD;
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_0EC28CED2DFF992A_SPAWN_OFFSET UNITYSDK_OFFSET(0x1292B960)
#define CLASS_1_0EC28CED2DFF992A__CTOR_OFFSET UNITYSDK_OFFSET(0x1292B9C0)

inline static constexpr unsigned int Class_1_0EC28CED2DFF992A_TypeDefinitionIndex = 43070;

class Class_1_0EC28CED2DFF992A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EC28CED2DFF992A__CTOR_OFFSET))(this);
	}

	::Class_3_3EB2168D97754EAD* Spawn(::UnityEngine::GameObject* a1, ::MoleMole::Config::HollowChessboardParticleConfig* a2)
	{
		return ((::Class_3_3EB2168D97754EAD*(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::HollowChessboardParticleConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0EC28CED2DFF992A_SPAWN_OFFSET))(this, a1, a2);
	}
};
