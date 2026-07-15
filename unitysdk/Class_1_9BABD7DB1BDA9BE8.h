#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AE183AB1ABCC95C3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimLeverSwitchConfig; }

#define CLASS_1_9BABD7DB1BDA9BE8_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A8EBF40)
#define CLASS_1_9BABD7DB1BDA9BE8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8EBFC0)

inline static constexpr unsigned int Class_1_9BABD7DB1BDA9BE8_TypeDefinitionIndex = 40863;

class Class_1_9BABD7DB1BDA9BE8 : public ::System::Object
{
public:
	::Struct_2_AE183AB1ABCC95C3 Field_1_0; // 0x10
	::RPG::GameCore::FiveDimLeverSwitchConfig* Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BABD7DB1BDA9BE8__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BABD7DB1BDA9BE8_CLEAR_OFFSET))(this);
	}
};
