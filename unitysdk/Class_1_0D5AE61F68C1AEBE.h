#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimPropMoveConfig; }

#define CLASS_1_0D5AE61F68C1AEBE__CTOR_OFFSET UNITYSDK_OFFSET(0x18056990)

inline static constexpr unsigned int Class_1_0D5AE61F68C1AEBE_TypeDefinitionIndex = 39337;

class Class_1_0D5AE61F68C1AEBE : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimPropMoveConfig* Field_1_0; // 0x10
	::Struct_2_A725E4562D03EA4E_1 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D5AE61F68C1AEBE__CTOR_OFFSET))(this);
	}
};
