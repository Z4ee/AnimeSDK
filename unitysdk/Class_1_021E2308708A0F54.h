#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FlappyScrollAgentConfig; }

#define CLASS_1_021E2308708A0F54__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC52B0)

inline static constexpr unsigned int Class_1_021E2308708A0F54_TypeDefinitionIndex = 39189;

class Class_1_021E2308708A0F54 : public ::System::Object
{
public:
	::RPG::GameCore::FlappyScrollAgentConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_021E2308708A0F54__CTOR_OFFSET))(this);
	}
};
