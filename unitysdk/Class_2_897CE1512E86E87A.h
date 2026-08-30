#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B8FB38F0526A59B0.h"

namespace RPG::GameCore { class ICharacterRowData; }

#define CLASS_2_897CE1512E86E87A__CTOR_OFFSET UNITYSDK_OFFSET(0xC7BFCC0)

inline static constexpr unsigned int Class_2_897CE1512E86E87A_TypeDefinitionIndex = 57816;

class Class_2_897CE1512E86E87A : public ::Class_1_B8FB38F0526A59B0
{
public:
	::RPG::GameCore::ICharacterRowData* MLEMJHLPFJM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_897CE1512E86E87A__CTOR_OFFSET))(this);
	}
};
