#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarVoiceArchiveEntry; }

#define CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9901350)
#define CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040___C__DISPLAYCLASS2_0___TRYFINDUNLOCKEDVOICEARCHIVEENTRY_B__0_OFFSET UNITYSDK_OFFSET(0x99013B0)

inline static constexpr unsigned int Class_1_A860CF37A3952C81_Class_1_BDB3C8B407BCD040___c__DisplayClass2_0_TypeDefinitionIndex = 62798;

class Class_1_A860CF37A3952C81_Class_1_BDB3C8B407BCD040___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::UInt32 targetVoiceID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryFindUnlockedVoiceArchiveEntry_b__0(::RPG::Client::AvatarVoiceArchiveEntry* entry)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarVoiceArchiveEntry*))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_CLASS_1_BDB3C8B407BCD040___C__DISPLAYCLASS2_0___TRYFINDUNLOCKEDVOICEARCHIVEENTRY_B__0_OFFSET))(this, entry);
	}
};
