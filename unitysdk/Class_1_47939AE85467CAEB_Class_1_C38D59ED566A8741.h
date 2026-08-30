#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_1170;
namespace InControl { class PlayerAction; }

#define CLASS_1_47939AE85467CAEB_CLASS_1_C38D59ED566A8741_METHOD_1_3DE39D0B7183A6A4_OFFSET UNITYSDK_OFFSET(0x1784D950)
#define CLASS_1_47939AE85467CAEB_CLASS_1_C38D59ED566A8741_METHOD_1_7EC693EFA0B59E75_OFFSET UNITYSDK_OFFSET(0x1784DEF0)
#define CLASS_1_47939AE85467CAEB_CLASS_1_C38D59ED566A8741__CTOR_OFFSET UNITYSDK_OFFSET(0x1784CB60)

inline static constexpr unsigned int Class_1_47939AE85467CAEB_Class_1_C38D59ED566A8741_TypeDefinitionIndex = 75279;

class Class_1_47939AE85467CAEB_Class_1_C38D59ED566A8741 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1170* BINIJNJNDEE; // 0x10
	::InControl::PlayerAction* MEDILGIIOLJ; // 0x18
	::InControl::PlayerAction* GCBFKBOLFIG; // 0x20
	::InControl::PlayerAction* MBBJOMKNFKC; // 0x28
	::InControl::PlayerAction* HGJBOEJPOJE; // 0x30
	::System::Single HPCHCEFOKJB; // 0x38
	::UnityEngine::Vector2 MIFKHBDOGLN; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47939AE85467CAEB_CLASS_1_C38D59ED566A8741__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7EC693EFA0B59E75(::UnityEngine::Vector2 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_47939AE85467CAEB_CLASS_1_C38D59ED566A8741_METHOD_1_7EC693EFA0B59E75_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_3DE39D0B7183A6A4()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47939AE85467CAEB_CLASS_1_C38D59ED566A8741_METHOD_1_3DE39D0B7183A6A4_OFFSET))(this);
	}
};
