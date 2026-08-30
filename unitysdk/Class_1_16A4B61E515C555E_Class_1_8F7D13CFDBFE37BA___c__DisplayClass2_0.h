#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarVoiceArchiveEntry; }

#define CLASS_1_16A4B61E515C555E_CLASS_1_8F7D13CFDBFE37BA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8AA3C0)
#define CLASS_1_16A4B61E515C555E_CLASS_1_8F7D13CFDBFE37BA___C__DISPLAYCLASS2_0___TRYFINDUNLOCKEDVOICEARCHIVEENTRY_B__0_OFFSET UNITYSDK_OFFSET(0xB8AA420)

inline static constexpr unsigned int Class_1_16A4B61E515C555E_Class_1_8F7D13CFDBFE37BA___c__DisplayClass2_0_TypeDefinitionIndex = 68109;

class Class_1_16A4B61E515C555E_Class_1_8F7D13CFDBFE37BA___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::UInt32 targetVoiceID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16A4B61E515C555E_CLASS_1_8F7D13CFDBFE37BA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryFindUnlockedVoiceArchiveEntry_b__0(::RPG::Client::AvatarVoiceArchiveEntry* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarVoiceArchiveEntry*))((::PBYTE)hIl2Cpp + CLASS_1_16A4B61E515C555E_CLASS_1_8F7D13CFDBFE37BA___C__DISPLAYCLASS2_0___TRYFINDUNLOCKEDVOICEARCHIVEENTRY_B__0_OFFSET))(this, a1);
	}
};
