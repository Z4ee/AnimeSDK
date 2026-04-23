#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_E4A29C0B8839D083_METHOD_1_456340ECF6C69525_OFFSET UNITYSDK_OFFSET(0x962A2D0)
#define CLASS_1_E4A29C0B8839D083_METHOD_1_4D1BD6A830FC80C4_OFFSET UNITYSDK_OFFSET(0x962A0E0)
#define CLASS_1_E4A29C0B8839D083_METHOD_1_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x9629FA0)
#define CLASS_1_E4A29C0B8839D083_METHOD_1_68E1ED295509CE71_OFFSET UNITYSDK_OFFSET(0x962A210)
#define CLASS_1_E4A29C0B8839D083_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x962A990)
#define CLASS_1_E4A29C0B8839D083_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9629DB0)
#define CLASS_1_E4A29C0B8839D083_METHOD_1_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x962A7B0)
#define CLASS_1_E4A29C0B8839D083_METHOD_1_D9F540258BBD3958_OFFSET UNITYSDK_OFFSET(0x962A920)
#define CLASS_1_E4A29C0B8839D083_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x962AA30)
#define CLASS_1_E4A29C0B8839D083__CTOR_OFFSET UNITYSDK_OFFSET(0x9629CB0)
#define CLASS_1_E4A29C0B8839D083___TRYSHOWINVITATIONDIALOG_B__7_0_OFFSET UNITYSDK_OFFSET(0x962AA40)

inline static constexpr unsigned int Class_1_E4A29C0B8839D083_TypeDefinitionIndex = 68952;

class Class_1_E4A29C0B8839D083 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_2; // 0x10
	::System::Collections::Generic::Queue_1<::RPG::Client::ChatMessageData*>* Field_1_3; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::System::Boolean Field_1_0; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4A29C0B8839D083__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4A29C0B8839D083_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4A29C0B8839D083_METHOD_1_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Boolean Method_1_4D1BD6A830FC80C4(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_E4A29C0B8839D083_METHOD_1_4D1BD6A830FC80C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_68E1ED295509CE71(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E4A29C0B8839D083_METHOD_1_68E1ED295509CE71_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E4A29C0B8839D083_METHOD_1_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D9F540258BBD3958(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_E4A29C0B8839D083_METHOD_1_D9F540258BBD3958_OFFSET))(this, a1);
	}

	::System::Void Method_1_456340ECF6C69525(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_E4A29C0B8839D083_METHOD_1_456340ECF6C69525_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4A29C0B8839D083_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4A29C0B8839D083_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void __TryShowInvitationDialog_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4A29C0B8839D083___TRYSHOWINVITATIONDIALOG_B__7_0_OFFSET))(this);
	}
};
