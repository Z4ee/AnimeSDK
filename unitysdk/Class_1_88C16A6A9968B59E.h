#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdvEffectConfig; }

#define CLASS_1_88C16A6A9968B59E_METHOD_1_FA4F6DEC8952059A_OFFSET UNITYSDK_OFFSET(0x10C6C110)

inline static constexpr unsigned int Class_1_88C16A6A9968B59E_TypeDefinitionIndex = 46178;

class Class_1_88C16A6A9968B59E : public ::System::Object
{
public:
	static ::RPG::GameCore::AdvEffectConfig* Method_1_FA4F6DEC8952059A(::RPG::GameCore::AdvEffectConfig* a1)
	{
		return ((::RPG::GameCore::AdvEffectConfig*(*)(::RPG::GameCore::AdvEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_88C16A6A9968B59E_METHOD_1_FA4F6DEC8952059A_OFFSET))(a1);
	}
};
