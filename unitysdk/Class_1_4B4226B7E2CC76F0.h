#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_4B4226B7E2CC76F0_METHOD_1_32399C82791CAD1F_OFFSET UNITYSDK_OFFSET(0x16EE79E0)
#define CLASS_1_4B4226B7E2CC76F0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16EE82A0)
#define CLASS_1_4B4226B7E2CC76F0_METHOD_1_49559FFD8B7FEB23_OFFSET UNITYSDK_OFFSET(0x16EE7920)
#define CLASS_1_4B4226B7E2CC76F0_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x16EE74E0)
#define CLASS_1_4B4226B7E2CC76F0_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16EE81E0)
#define CLASS_1_4B4226B7E2CC76F0_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x16EE76F0)
#define CLASS_1_4B4226B7E2CC76F0_METHOD_1_BEF66C62729AE5AC_OFFSET UNITYSDK_OFFSET(0x16EE7850)
#define CLASS_1_4B4226B7E2CC76F0_METHOD_1_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x16EE7F80)
#define CLASS_1_4B4226B7E2CC76F0_METHOD_1_D9F540258BBD3958_OFFSET UNITYSDK_OFFSET(0x16EE8170)
#define CLASS_1_4B4226B7E2CC76F0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE73E0)
#define CLASS_1_4B4226B7E2CC76F0___TRYSHOWINVITATIONDIALOG_B__7_0_OFFSET UNITYSDK_OFFSET(0x16EE82F0)

inline static constexpr unsigned int Class_1_4B4226B7E2CC76F0_TypeDefinitionIndex = 74593;

class Class_1_4B4226B7E2CC76F0 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::RPG::Client::ChatMessageData*>* NOPONMHIMMM; // 0x10
	::RPG::Client::UIController* CJIMJEIJLHL; // 0x18
	::System::Boolean OFACCHOIIEF; // 0x20
	::System::Boolean HDJOGGDMCIO; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4226B7E2CC76F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4226B7E2CC76F0_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4226B7E2CC76F0_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Boolean Method_1_BEF66C62729AE5AC(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_4B4226B7E2CC76F0_METHOD_1_BEF66C62729AE5AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_49559FFD8B7FEB23(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4B4226B7E2CC76F0_METHOD_1_49559FFD8B7FEB23_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4B4226B7E2CC76F0_METHOD_1_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D9F540258BBD3958(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_4B4226B7E2CC76F0_METHOD_1_D9F540258BBD3958_OFFSET))(this, a1);
	}

	::System::Void Method_1_32399C82791CAD1F(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_4B4226B7E2CC76F0_METHOD_1_32399C82791CAD1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4226B7E2CC76F0_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4226B7E2CC76F0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void __TryShowInvitationDialog_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4226B7E2CC76F0___TRYSHOWINVITATIONDIALOG_B__7_0_OFFSET))(this);
	}
};
