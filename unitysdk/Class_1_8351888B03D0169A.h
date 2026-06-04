#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_8351888B03D0169A_METHOD_1_49D606E8AA3833AD_OFFSET UNITYSDK_OFFSET(0x1420D910)

inline static constexpr unsigned int Class_1_8351888B03D0169A_TypeDefinitionIndex = 53599;

class Class_1_8351888B03D0169A : public ::System::Object
{
public:
	static ::System::String* Method_1_49D606E8AA3833AD(::RPG::GameCore::EffectConfig* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::EffectConfig*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8351888B03D0169A_METHOD_1_49D606E8AA3833AD_OFFSET))(a1, a2);
	}
};
