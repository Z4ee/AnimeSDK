#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelCurveInstance; }

#define CLASS_1_695BA9A73779D495__CTOR_OFFSET UNITYSDK_OFFSET(0x15B06F90)

inline static constexpr unsigned int Class_1_695BA9A73779D495_TypeDefinitionIndex = 61320;

class Class_1_695BA9A73779D495 : public ::System::Object
{
public:
	::RPG::GameCore::LevelCurveInstance* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_695BA9A73779D495__CTOR_OFFSET))(this);
	}
};
