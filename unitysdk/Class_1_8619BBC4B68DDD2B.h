#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RebuildPipeConfig; }

#define CLASS_1_8619BBC4B68DDD2B__CTOR_OFFSET UNITYSDK_OFFSET(0x18D40000)

inline static constexpr unsigned int Class_1_8619BBC4B68DDD2B_TypeDefinitionIndex = 40092;

class Class_1_8619BBC4B68DDD2B : public ::System::Object
{
public:
	::RPG::GameCore::RebuildPipeConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8619BBC4B68DDD2B__CTOR_OFFSET))(this);
	}
};
