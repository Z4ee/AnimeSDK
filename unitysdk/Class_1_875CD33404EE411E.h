#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimContactEventEmitterConfig; }

#define CLASS_1_875CD33404EE411E__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7CFB0)

inline static constexpr unsigned int Class_1_875CD33404EE411E_TypeDefinitionIndex = 39144;

class Class_1_875CD33404EE411E : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimContactEventEmitterConfig* Field_1_0; // 0x10
	::Struct_2_B6A3FA7992F9F37E Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_875CD33404EE411E__CTOR_OFFSET))(this);
	}
};
