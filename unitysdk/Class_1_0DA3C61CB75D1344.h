#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_0DA3C61CB75D1344_METHOD_1_3160EACC8F1729F2_OFFSET UNITYSDK_OFFSET(0xF39CBC0)
#define CLASS_1_0DA3C61CB75D1344_METHOD_1_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0xF39C930)
#define CLASS_1_0DA3C61CB75D1344_METHOD_1_5B67B578CA4D708E_OFFSET UNITYSDK_OFFSET(0xF39CCE0)
#define CLASS_1_0DA3C61CB75D1344_METHOD_1_7A6818D24D36DCBD_OFFSET UNITYSDK_OFFSET(0xF39D150)
#define CLASS_1_0DA3C61CB75D1344_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xF39D350)
#define CLASS_1_0DA3C61CB75D1344_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xF39C840)
#define CLASS_1_0DA3C61CB75D1344_METHOD_1_D3F2D27CAB4DD1DF_OFFSET UNITYSDK_OFFSET(0xF39CA70)
#define CLASS_1_0DA3C61CB75D1344_METHOD_1_D9F540258BBD3958_OFFSET UNITYSDK_OFFSET(0xF39D2E0)
#define CLASS_1_0DA3C61CB75D1344_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xF39D3F0)
#define CLASS_1_0DA3C61CB75D1344__CTOR_OFFSET UNITYSDK_OFFSET(0xF39D400)
#define CLASS_1_0DA3C61CB75D1344___TRYSHOWINVITATIONDIALOG_B__6_0_OFFSET UNITYSDK_OFFSET(0xF39D410)

inline static constexpr unsigned int Class_1_0DA3C61CB75D1344_TypeDefinitionIndex = 61968;

class Class_1_0DA3C61CB75D1344 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_1; // 0x10
	::System::Collections::Generic::Queue_1<::RPG::Client::ChatMessageData*>* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DA3C61CB75D1344__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DA3C61CB75D1344_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DA3C61CB75D1344_METHOD_1_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Boolean Method_1_D3F2D27CAB4DD1DF(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_0DA3C61CB75D1344_METHOD_1_D3F2D27CAB4DD1DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_3160EACC8F1729F2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0DA3C61CB75D1344_METHOD_1_3160EACC8F1729F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A6818D24D36DCBD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0DA3C61CB75D1344_METHOD_1_7A6818D24D36DCBD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D9F540258BBD3958(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_0DA3C61CB75D1344_METHOD_1_D9F540258BBD3958_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B67B578CA4D708E(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_0DA3C61CB75D1344_METHOD_1_5B67B578CA4D708E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DA3C61CB75D1344_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DA3C61CB75D1344_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void __TryShowInvitationDialog_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DA3C61CB75D1344___TRYSHOWINVITATIONDIALOG_B__6_0_OFFSET))(this);
	}
};
