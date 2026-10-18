#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
namespace RPG::Client { class LongPressEvent; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_AEB3E117F167A0A5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB289A00)
#define CLASS_1_AEB3E117F167A0A5_METHOD_1_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0xB2897C0)
#define CLASS_1_AEB3E117F167A0A5__CTOR_OFFSET UNITYSDK_OFFSET(0xB289710)

inline static constexpr unsigned int Class_1_AEB3E117F167A0A5_TypeDefinitionIndex = 49904;

class Class_1_AEB3E117F167A0A5 : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* MBOEDFCNCJF; // 0x10
	::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>* GBMLHDDJMJM; // 0x18
	::Class_0_16E4307DCC419505_397* MKKLHFCCCNF; // 0x20
	::RPG::Client::LongPressEvent* KANADECCJMH; // 0x28

	::System::Void _ctor(::RPG::Client::LongPressEvent* a1, ::Class_0_16E4307DCC419505_397* a2, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>* a3, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LongPressEvent*, ::Class_0_16E4307DCC419505_397*, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>*, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>*))((::PBYTE)hIl2Cpp + CLASS_1_AEB3E117F167A0A5__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB3E117F167A0A5_METHOD_1_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB3E117F167A0A5_DISPOSE_OFFSET))(this);
	}
};
