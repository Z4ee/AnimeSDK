#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VoiceType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CEA2E70031CA3BF__CTOR_OFFSET UNITYSDK_OFFSET(0x10CAEDC0)

inline static constexpr unsigned int Class_1_6CEA2E70031CA3BF_TypeDefinitionIndex = 49776;

class Class_1_6CEA2E70031CA3BF : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::RPG::Client::VoiceType Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEA2E70031CA3BF__CTOR_OFFSET))(this);
	}
};
