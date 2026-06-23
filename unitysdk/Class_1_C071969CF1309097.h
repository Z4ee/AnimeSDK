#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowChessPieceParticle; }
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace System { class String; }

#define CLASS_1_C071969CF1309097_SPAWN_OFFSET UNITYSDK_OFFSET(0x19076BD0)
#define CLASS_1_C071969CF1309097__CTOR_OFFSET UNITYSDK_OFFSET(0x19076CA0)

inline static constexpr unsigned int Class_1_C071969CF1309097_TypeDefinitionIndex = 61360;

class Class_1_C071969CF1309097 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C071969CF1309097__CTOR_OFFSET))(this);
	}

	::MoleMole::UIHollowChessPieceParticle* Spawn(::System::String* a1, ::MoleMole::Config::HollowChessboardParticleConfig* a2)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C071969CF1309097_SPAWN_OFFSET))(this, a1, a2);
	}
};
