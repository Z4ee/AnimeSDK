#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarVoiceArchiveEntry; }

#define CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A1D90)
#define CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA___C__DISPLAYCLASS2_0___TRYFINDUNLOCKEDVOICEARCHIVEENTRY_B__0_OFFSET UNITYSDK_OFFSET(0xA5A1DF0)

inline static constexpr unsigned int Class_1_1573D818832F8AAB_Class_1_8F7D13CFDBFE37BA___c__DisplayClass2_0_TypeDefinitionIndex = 63732;

class Class_1_1573D818832F8AAB_Class_1_8F7D13CFDBFE37BA___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::UInt32 targetVoiceID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryFindUnlockedVoiceArchiveEntry_b__0(::RPG::Client::AvatarVoiceArchiveEntry* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarVoiceArchiveEntry*))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_CLASS_1_8F7D13CFDBFE37BA___C__DISPLAYCLASS2_0___TRYFINDUNLOCKEDVOICEARCHIVEENTRY_B__0_OFFSET))(this, a1);
	}
};
