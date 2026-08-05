#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
namespace MoleMole { class BubbleGroupPlayGraphContent; }
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_6B3927E10D2FA186_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16F6E8A0)
#define CLASS_4_6B3927E10D2FA186_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x16F6F170)
#define CLASS_4_6B3927E10D2FA186_METHOD_4_A32C34C28EBFFA29_OFFSET UNITYSDK_OFFSET(0x16F6E9F0)
#define CLASS_4_6B3927E10D2FA186__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6F020)

inline static constexpr unsigned int Class_4_6B3927E10D2FA186_TypeDefinitionIndex = 47620;

class Class_4_6B3927E10D2FA186 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::BubbleGroupPlayGraphContent*>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_2; // 0x30
	::Class_3_B537A0AA78803363* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6B3927E10D2FA186__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6B3927E10D2FA186_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_A32C34C28EBFFA29(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_6B3927E10D2FA186_METHOD_4_A32C34C28EBFFA29_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6B3927E10D2FA186_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
