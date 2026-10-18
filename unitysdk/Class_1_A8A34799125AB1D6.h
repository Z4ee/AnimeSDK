#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_A8A34799125AB1D6_METHOD_1_0D160D470B0C4F30_OFFSET UNITYSDK_OFFSET(0xB5BFF50)
#define CLASS_1_A8A34799125AB1D6_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB5BFE80)
#define CLASS_1_A8A34799125AB1D6_METHOD_1_AE1B00BCE5694115_OFFSET UNITYSDK_OFFSET(0xB5C0030)
#define CLASS_1_A8A34799125AB1D6_METHOD_1_E3F4358710371929_1_OFFSET UNITYSDK_OFFSET(0xB5BFFC0)
#define CLASS_1_A8A34799125AB1D6_METHOD_1_E3F4358710371929_OFFSET UNITYSDK_OFFSET(0xB5BFEE0)
#define CLASS_1_A8A34799125AB1D6__CTOR_OFFSET UNITYSDK_OFFSET(0xB5BFD40)

inline static constexpr unsigned int Class_1_A8A34799125AB1D6_TypeDefinitionIndex = 80257;

class Class_1_A8A34799125AB1D6 : public ::System::Object
{
public:
	::System::Func_2<::RPG::Client::ChatMessageData*, ::System::Boolean>* MGLMHNHKMMK; // 0x10
	::System::Func_2<::RPG::Client::ChatMessageData*, ::System::Boolean>* GDHIBCFIAHF; // 0x18
	::System::Func_2<::RPG::Client::ChatMessageInviteData*, ::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* KOIMPMDAGBO; // 0x20
	::System::Action_1<::RPG::Client::ChatMessageData*>* BIICKOAFFPJ; // 0x28
	::System::Func_1<::System::String*>* POAOHGHIHBL; // 0x30

	::System::Void _ctor(::System::Func_1<::System::String*>* a1, ::System::Func_2<::RPG::Client::ChatMessageData*, ::System::Boolean>* a2, ::System::Action_1<::RPG::Client::ChatMessageData*>* a3, ::System::Func_2<::RPG::Client::ChatMessageData*, ::System::Boolean>* a4, ::System::Func_2<::RPG::Client::ChatMessageInviteData*, ::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*, ::System::Func_2<::RPG::Client::ChatMessageData*, ::System::Boolean>*, ::System::Action_1<::RPG::Client::ChatMessageData*>*, ::System::Func_2<::RPG::Client::ChatMessageData*, ::System::Boolean>*, ::System::Func_2<::RPG::Client::ChatMessageInviteData*, ::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_A8A34799125AB1D6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8A34799125AB1D6_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Boolean Method_1_E3F4358710371929(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_A8A34799125AB1D6_METHOD_1_E3F4358710371929_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D160D470B0C4F30(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_A8A34799125AB1D6_METHOD_1_0D160D470B0C4F30_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E3F4358710371929_1(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_A8A34799125AB1D6_METHOD_1_E3F4358710371929_1_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* Method_1_AE1B00BCE5694115(::RPG::Client::ChatMessageInviteData* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + CLASS_1_A8A34799125AB1D6_METHOD_1_AE1B00BCE5694115_OFFSET))(this, a1);
	}
};
