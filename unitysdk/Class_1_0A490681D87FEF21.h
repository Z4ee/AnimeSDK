#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceCatAIConfig; }

#define CLASS_1_0A490681D87FEF21__CTOR_OFFSET UNITYSDK_OFFSET(0x1C086800)

inline static constexpr unsigned int Class_1_0A490681D87FEF21_TypeDefinitionIndex = 36560;

class Class_1_0A490681D87FEF21 : public ::System::Object
{
public:
	::RPG::GameCore::CakeRaceCatAIConfig* EGJAHHPMEGL; // 0x10
	::System::Int32 MBCACNKDMFG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A490681D87FEF21__CTOR_OFFSET))(this);
	}
};
