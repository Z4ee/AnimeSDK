#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VoiceType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CEA2E70031CA3BF__CTOR_OFFSET UNITYSDK_OFFSET(0x17E15D70)

inline static constexpr unsigned int Class_1_6CEA2E70031CA3BF_TypeDefinitionIndex = 61468;

class Class_1_6CEA2E70031CA3BF : public ::System::Object
{
public:
	::RPG::Client::VoiceType KJMPDIHMBGO; // 0x10
	::System::UInt32 CDAMNNDDJAN; // 0x14
	::System::UInt32 LJMHECKCBKH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEA2E70031CA3BF__CTOR_OFFSET))(this);
	}
};
