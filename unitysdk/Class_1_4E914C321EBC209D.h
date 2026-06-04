#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CC63D4C97D4807F1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimMoveBakedConfig; }

#define CLASS_1_4E914C321EBC209D__CTOR_OFFSET UNITYSDK_OFFSET(0x18E58BA0)

inline static constexpr unsigned int Class_1_4E914C321EBC209D_TypeDefinitionIndex = 39867;

class Class_1_4E914C321EBC209D : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimMoveBakedConfig* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::Struct_2_CC63D4C97D4807F1 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E914C321EBC209D__CTOR_OFFSET))(this);
	}
};
