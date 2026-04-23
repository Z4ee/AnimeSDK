#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyMapCell; }

#define CLASS_1_3ED4315C5B8029B7__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5E540)

inline static constexpr unsigned int Class_1_3ED4315C5B8029B7_TypeDefinitionIndex = 38808;

class Class_1_3ED4315C5B8029B7 : public ::System::Object
{
public:
	::RPG::GameCore::MonopolyMapCell* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ED4315C5B8029B7__CTOR_OFFSET))(this);
	}
};
