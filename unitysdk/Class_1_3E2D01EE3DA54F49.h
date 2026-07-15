#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }

#define CLASS_1_3E2D01EE3DA54F49__CTOR_OFFSET UNITYSDK_OFFSET(0x18B919C0)

inline static constexpr unsigned int Class_1_3E2D01EE3DA54F49_TypeDefinitionIndex = 55190;

class Class_1_3E2D01EE3DA54F49 : public ::System::Object
{
public:
	::RPG::GameCore::JsonEnum* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E2D01EE3DA54F49__CTOR_OFFSET))(this);
	}
};
