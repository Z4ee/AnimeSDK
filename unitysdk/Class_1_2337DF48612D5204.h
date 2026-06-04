#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimScrollAgentConfig; }

#define CLASS_1_2337DF48612D5204__CTOR_OFFSET UNITYSDK_OFFSET(0x18E59EB0)

inline static constexpr unsigned int Class_1_2337DF48612D5204_TypeDefinitionIndex = 39957;

class Class_1_2337DF48612D5204 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimScrollAgentConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2337DF48612D5204__CTOR_OFFSET))(this);
	}
};
