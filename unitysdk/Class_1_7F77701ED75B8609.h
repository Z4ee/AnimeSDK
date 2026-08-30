#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_7F77701ED75B8609_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE13230)
#define CLASS_1_7F77701ED75B8609_METHOD_1_D9C3E402C00F5385_OFFSET UNITYSDK_OFFSET(0xBE12DF0)
#define CLASS_1_7F77701ED75B8609__CTOR_OFFSET UNITYSDK_OFFSET(0xBE12DA0)

inline static constexpr unsigned int Class_1_7F77701ED75B8609_TypeDefinitionIndex = 78037;

class Class_1_7F77701ED75B8609 : public ::System::Object
{
public:
	::RPG::GameCore::AdventureCharacterController* CACEADPJLPB; // 0x10
	::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7F77701ED75B8609__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D9C3E402C00F5385(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_1_7F77701ED75B8609_METHOD_1_D9C3E402C00F5385_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F77701ED75B8609_DISPOSE_OFFSET))(this);
	}
};
