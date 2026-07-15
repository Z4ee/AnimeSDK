#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client { class MonoAnimationTrigger; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_2_A92C91EC1758A1CE_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x15F2A990)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15F2AC00)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x15F2A9E0)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x15F2A830)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15F2AC60)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x15F2ACC0)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x15F2AB70)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_C274475308736EB1_OFFSET UNITYSDK_OFFSET(0x15F2A6A0)
#define CLASS_2_A92C91EC1758A1CE_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15F2AB10)
#define CLASS_2_A92C91EC1758A1CE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15F2A740)
#define CLASS_2_A92C91EC1758A1CE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2AD80)

inline static constexpr unsigned int Class_2_A92C91EC1758A1CE_TypeDefinitionIndex = 75898;

class Class_2_A92C91EC1758A1CE : public ::Class_1_3713064DEE761936
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::UnityEngine::Coroutine* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::RPG::Client::MonoAnimationTrigger* Field_2_3; // 0x30
	::System::Action_1<::System::String*>* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40
	::System::Single Field_2_6; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE__CTOR_OFFSET))(this);
	}

	static ::Class_2_A92C91EC1758A1CE* Method_2_C274475308736EB1(::RPG::Client::MonoAnimationTrigger* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::Class_2_A92C91EC1758A1CE*(*)(::RPG::Client::MonoAnimationTrigger*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_METHOD_2_C274475308736EB1_OFFSET))(a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
