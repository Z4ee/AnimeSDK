#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
namespace RPG::Client { class LongPressEvent; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_AEB3E117F167A0A5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18727DC0)
#define CLASS_1_AEB3E117F167A0A5_METHOD_1_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x18727BA0)
#define CLASS_1_AEB3E117F167A0A5__CTOR_OFFSET UNITYSDK_OFFSET(0x18727AF0)

inline static constexpr unsigned int Class_1_AEB3E117F167A0A5_TypeDefinitionIndex = 50241;

class Class_1_AEB3E117F167A0A5 : public ::System::Object
{
public:
	::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>* GBMLHDDJMJM; // 0x10
	::RPG::Client::LongPressEvent* KANADECCJMH; // 0x18
	::UnityEngine::Events::UnityAction* MBOEDFCNCJF; // 0x20
	::Class_0_16E4307DCC419505_318* MKKLHFCCCNF; // 0x28

	::System::Void _ctor(::RPG::Client::LongPressEvent* a1, ::Class_0_16E4307DCC419505_318* a2, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>* a3, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LongPressEvent*, ::Class_0_16E4307DCC419505_318*, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>*, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>*))((::PBYTE)hIl2Cpp + CLASS_1_AEB3E117F167A0A5__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_98CD66A7F3C102A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB3E117F167A0A5_METHOD_1_98CD66A7F3C102A5_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB3E117F167A0A5_DISPOSE_OFFSET))(this);
	}
};
