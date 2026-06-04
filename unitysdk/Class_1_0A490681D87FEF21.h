#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceCatAIConfig; }

#define CLASS_1_0A490681D87FEF21__CTOR_OFFSET UNITYSDK_OFFSET(0x189BD490)

inline static constexpr unsigned int Class_1_0A490681D87FEF21_TypeDefinitionIndex = 34917;

class Class_1_0A490681D87FEF21 : public ::System::Object
{
public:
	::RPG::GameCore::CakeRaceCatAIConfig* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A490681D87FEF21__CTOR_OFFSET))(this);
	}
};
