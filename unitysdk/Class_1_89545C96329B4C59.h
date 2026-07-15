#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SystemLanguage.h"

class Class_0_16E4307DCC419505_22;
namespace System { class String; }

#define CLASS_1_89545C96329B4C59_METHOD_1_245C58FC182E48C2_OFFSET UNITYSDK_OFFSET(0x1AC96050)
#define CLASS_1_89545C96329B4C59_METHOD_1_C1A90C69B32845B9_OFFSET UNITYSDK_OFFSET(0x1AC970C0)
#define CLASS_1_89545C96329B4C59_SET_OFFSET UNITYSDK_OFFSET(0x1AC970A0)
#define CLASS_1_89545C96329B4C59__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC96DF0)

inline static constexpr unsigned int Class_1_89545C96329B4C59_TypeDefinitionIndex = 33789;

class Class_1_89545C96329B4C59 : public ::System::Object
{
public:
	::UnityEngine::SystemLanguage Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89545C96329B4C59__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_89545C96329B4C59_SET_OFFSET))(this, a1);
	}

	static ::UnityEngine::SystemLanguage Method_1_245C58FC182E48C2(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::UnityEngine::SystemLanguage(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_89545C96329B4C59_METHOD_1_245C58FC182E48C2_OFFSET))(a1);
	}

	::UnityEngine::SystemLanguage Method_1_C1A90C69B32845B9(::System::String* a1)
	{
		return ((::UnityEngine::SystemLanguage(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_89545C96329B4C59_METHOD_1_C1A90C69B32845B9_OFFSET))(this, a1);
	}
};
