#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_6AB820A2C4AF9024_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC0BF10)
#define CLASS_1_6AB820A2C4AF9024_METHOD_1_25BE83B43514A83F_OFFSET UNITYSDK_OFFSET(0xBC0BB70)
#define CLASS_1_6AB820A2C4AF9024_METHOD_1_28F8A5B372EC3496_OFFSET UNITYSDK_OFFSET(0xBC0B670)
#define CLASS_1_6AB820A2C4AF9024_METHOD_1_493B6E28B7089334_OFFSET UNITYSDK_OFFSET(0xBC0BAB0)
#define CLASS_1_6AB820A2C4AF9024_METHOD_1_9741AB9F4374EF64_OFFSET UNITYSDK_OFFSET(0xBC0B4E0)
#define CLASS_1_6AB820A2C4AF9024_METHOD_1_9959A5773098BCC2_OFFSET UNITYSDK_OFFSET(0xBC0B8E0)
#define CLASS_1_6AB820A2C4AF9024__CTOR_OFFSET UNITYSDK_OFFSET(0xBC0B460)
#define CLASS_1_6AB820A2C4AF9024___SENDSTARTNODEREQ_B__5_0_OFFSET UNITYSDK_OFFSET(0xBC0C050)

inline static constexpr unsigned int Class_1_6AB820A2C4AF9024_TypeDefinitionIndex = 75140;

class Class_1_6AB820A2C4AF9024 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::UInt32>* ODJPCGKBDHC; // 0x10
	::RPG::Client::ActivityIdleLive::StoryLine* GIOECPALNAC; // 0x18

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::StoryLine*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*&))((::PBYTE)hIl2Cpp + CLASS_1_6AB820A2C4AF9024__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::System::UInt32>* Method_1_9741AB9F4374EF64(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + CLASS_1_6AB820A2C4AF9024_METHOD_1_9741AB9F4374EF64_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_9959A5773098BCC2(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + CLASS_1_6AB820A2C4AF9024_METHOD_1_9959A5773098BCC2_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::System::UInt32>* Method_1_28F8A5B372EC3496(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6AB820A2C4AF9024_METHOD_1_28F8A5B372EC3496_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_25BE83B43514A83F(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6AB820A2C4AF9024_METHOD_1_25BE83B43514A83F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_493B6E28B7089334(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6AB820A2C4AF9024_METHOD_1_493B6E28B7089334_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AB820A2C4AF9024_DISPOSE_OFFSET))(this);
	}

	::System::Void __SendStartNodeReq_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AB820A2C4AF9024___SENDSTARTNODEREQ_B__5_0_OFFSET))(this);
	}
};
