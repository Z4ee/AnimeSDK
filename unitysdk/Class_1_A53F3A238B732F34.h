#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdvEffectParamSource.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A53F3A238B732F34__CTOR_OFFSET UNITYSDK_OFFSET(0x1093A320)

inline static constexpr unsigned int Class_1_A53F3A238B732F34_TypeDefinitionIndex = 57194;

class Class_1_A53F3A238B732F34 : public ::System::Object
{
public:
	::System::UInt32 Field_1_2; // 0x10
	::RPG::Client::AdvEffectParamSource Field_1_0; // 0x14
	::System::Boolean Field_1_3; // 0x18
	::System::UInt32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A53F3A238B732F34__CTOR_OFFSET))(this);
	}
};
