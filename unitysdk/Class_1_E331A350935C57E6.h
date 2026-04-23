#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_E331A350935C57E6_METHOD_1_9E76D36FFF4CD324_OFFSET UNITYSDK_OFFSET(0xB79D450)

inline static constexpr unsigned int Class_1_E331A350935C57E6_TypeDefinitionIndex = 52890;

class Class_1_E331A350935C57E6 : public ::System::Object
{
public:
	static ::System::String* Method_1_9E76D36FFF4CD324(::RPG::GameCore::EffectConfig* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::EffectConfig*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E331A350935C57E6_METHOD_1_9E76D36FFF4CD324_OFFSET))(a1, a2);
	}
};
