#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_077E85A9730F7611_METHOD_1_39E1A4161274CB61_OFFSET UNITYSDK_OFFSET(0xA487DE0)
#define CLASS_1_077E85A9730F7611_METHOD_1_5B67B578CA4D708E_OFFSET UNITYSDK_OFFSET(0xA488030)
#define CLASS_1_077E85A9730F7611_METHOD_1_72B3E460CA018AAC_OFFSET UNITYSDK_OFFSET(0xA487F10)
#define CLASS_1_077E85A9730F7611_METHOD_1_7A6818D24D36DCBD_OFFSET UNITYSDK_OFFSET(0xA4884B0)
#define CLASS_1_077E85A9730F7611_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA4886B0)
#define CLASS_1_077E85A9730F7611_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xA487B70)
#define CLASS_1_077E85A9730F7611_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0xA487C80)
#define CLASS_1_077E85A9730F7611_METHOD_1_D9F540258BBD3958_OFFSET UNITYSDK_OFFSET(0xA488640)
#define CLASS_1_077E85A9730F7611_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA488750)
#define CLASS_1_077E85A9730F7611__CTOR_OFFSET UNITYSDK_OFFSET(0xA488760)
#define CLASS_1_077E85A9730F7611___TRYSHOWINVITATIONDIALOG_B__6_0_OFFSET UNITYSDK_OFFSET(0xA488770)

inline static constexpr unsigned int Class_1_077E85A9730F7611_TypeDefinitionIndex = 70705;

class Class_1_077E85A9730F7611 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::RPG::Client::ChatMessageData*>* Field_1_0; // 0x10
	::RPG::Client::UIController* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_077E85A9730F7611__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_077E85A9730F7611_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_077E85A9730F7611_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Boolean Method_1_39E1A4161274CB61(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_077E85A9730F7611_METHOD_1_39E1A4161274CB61_OFFSET))(this, a1);
	}

	::System::Void Method_1_72B3E460CA018AAC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_077E85A9730F7611_METHOD_1_72B3E460CA018AAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A6818D24D36DCBD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_077E85A9730F7611_METHOD_1_7A6818D24D36DCBD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D9F540258BBD3958(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_077E85A9730F7611_METHOD_1_D9F540258BBD3958_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B67B578CA4D708E(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_077E85A9730F7611_METHOD_1_5B67B578CA4D708E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_077E85A9730F7611_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_077E85A9730F7611_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void __TryShowInvitationDialog_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_077E85A9730F7611___TRYSHOWINVITATIONDIALOG_B__6_0_OFFSET))(this);
	}
};
