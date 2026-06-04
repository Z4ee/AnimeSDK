#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_4AB539146B9E6FAC_METHOD_1_0EB2CD34D2D5AB0D_OFFSET UNITYSDK_OFFSET(0x1375AB00)
#define CLASS_1_4AB539146B9E6FAC_METHOD_1_39E1A4161274CB61_OFFSET UNITYSDK_OFFSET(0x1375A9C0)
#define CLASS_1_4AB539146B9E6FAC_METHOD_1_456340ECF6C69525_OFFSET UNITYSDK_OFFSET(0x1375ABC0)
#define CLASS_1_4AB539146B9E6FAC_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1375B290)
#define CLASS_1_4AB539146B9E6FAC_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1375A650)
#define CLASS_1_4AB539146B9E6FAC_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x1375A860)
#define CLASS_1_4AB539146B9E6FAC_METHOD_1_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x1375B0B0)
#define CLASS_1_4AB539146B9E6FAC_METHOD_1_D9F540258BBD3958_OFFSET UNITYSDK_OFFSET(0x1375B220)
#define CLASS_1_4AB539146B9E6FAC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1375B330)
#define CLASS_1_4AB539146B9E6FAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1375A550)
#define CLASS_1_4AB539146B9E6FAC___TRYSHOWINVITATIONDIALOG_B__7_0_OFFSET UNITYSDK_OFFSET(0x1375B340)

inline static constexpr unsigned int Class_1_4AB539146B9E6FAC_TypeDefinitionIndex = 69764;

class Class_1_4AB539146B9E6FAC : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::RPG::Client::ChatMessageData*>* Field_1_0; // 0x10
	::RPG::Client::UIController* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB539146B9E6FAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB539146B9E6FAC_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB539146B9E6FAC_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Boolean Method_1_39E1A4161274CB61(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_4AB539146B9E6FAC_METHOD_1_39E1A4161274CB61_OFFSET))(this, a1);
	}

	::System::Void Method_1_0EB2CD34D2D5AB0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4AB539146B9E6FAC_METHOD_1_0EB2CD34D2D5AB0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4AB539146B9E6FAC_METHOD_1_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D9F540258BBD3958(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_4AB539146B9E6FAC_METHOD_1_D9F540258BBD3958_OFFSET))(this, a1);
	}

	::System::Void Method_1_456340ECF6C69525(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_4AB539146B9E6FAC_METHOD_1_456340ECF6C69525_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB539146B9E6FAC_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB539146B9E6FAC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void __TryShowInvitationDialog_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB539146B9E6FAC___TRYSHOWINVITATIONDIALOG_B__7_0_OFFSET))(this);
	}
};
