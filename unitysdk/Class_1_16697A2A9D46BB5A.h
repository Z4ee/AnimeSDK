#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }

#define CLASS_1_16697A2A9D46BB5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A025D50)

inline static constexpr unsigned int Class_1_16697A2A9D46BB5A_TypeDefinitionIndex = 40716;

class Class_1_16697A2A9D46BB5A : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimTriggerEventEmitterConfig* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16697A2A9D46BB5A__CTOR_OFFSET))(this);
	}
};
