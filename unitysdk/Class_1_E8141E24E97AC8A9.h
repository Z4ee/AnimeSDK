#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimPropMoveConfig; }

#define CLASS_1_E8141E24E97AC8A9__CTOR_OFFSET UNITYSDK_OFFSET(0x16795B90)

inline static constexpr unsigned int Class_1_E8141E24E97AC8A9_TypeDefinitionIndex = 33540;

class Class_1_E8141E24E97AC8A9 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimPropMoveConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8141E24E97AC8A9__CTOR_OFFSET))(this);
	}
};
