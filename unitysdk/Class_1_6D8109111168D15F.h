#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_0471857D35382E2E;

#define CLASS_1_6D8109111168D15F__CTOR_OFFSET UNITYSDK_OFFSET(0x1568EC00)

inline static constexpr unsigned int Class_1_6D8109111168D15F_TypeDefinitionIndex = 79242;

class Class_1_6D8109111168D15F : public ::System::Object
{
public:
	::Class_1_0471857D35382E2E* HNEOOKPBCNK; // 0x10
	::System::UInt32 JGEBKHNJHNJ; // 0x18
	::RPG::GameCore::FixPoint DDFGEIEMAJK; // 0x20

	::System::Void _ctor(::Class_1_0471857D35382E2E* a1, ::System::UInt32 a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0471857D35382E2E*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6D8109111168D15F__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
