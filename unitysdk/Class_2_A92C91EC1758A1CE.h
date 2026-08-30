#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client { class MonoAnimationTrigger; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_2_A92C91EC1758A1CE_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x1610FCA0)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1610FF50)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x1610FB40)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1610FFB0)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x1610FEC0)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_C274475308736EB1_OFFSET UNITYSDK_OFFSET(0x1610F9B0)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1610FCF0)
#define CLASS_2_A92C91EC1758A1CE_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x16110010)
#define CLASS_2_A92C91EC1758A1CE_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1610FE60)
#define CLASS_2_A92C91EC1758A1CE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1610FA50)
#define CLASS_2_A92C91EC1758A1CE__CTOR_OFFSET UNITYSDK_OFFSET(0x161100F0)

inline static constexpr unsigned int Class_2_A92C91EC1758A1CE_TypeDefinitionIndex = 79532;

class Class_2_A92C91EC1758A1CE : public ::Class_1_3713064DEE761936
{
public:
	// static const ::System::Single GAANFPLAEEC; // 0x0
	::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x20
	::System::String* FGMKCOANOOK; // 0x28
	::System::Action_1<::System::String*>* MBOEDFCNCJF; // 0x30
	::RPG::Client::MonoAnimationTrigger* GALAHGAJODG; // 0x38
	::System::Single FILPDDOEEPD; // 0x40
	::System::Boolean BEMMCKLJICI; // 0x44

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

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_METHOD_2_078D85152011B919_OFFSET))(this);
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

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A92C91EC1758A1CE_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
