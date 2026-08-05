#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_B5C470FD42C63551_METHOD_1_4FD935F03940FBA9_OFFSET UNITYSDK_OFFSET(0x15C21180)

inline static constexpr unsigned int Class_1_B5C470FD42C63551_TypeDefinitionIndex = 64013;

class Class_1_B5C470FD42C63551 : public ::System::Object
{
public:
	static ::System::Void Method_1_4FD935F03940FBA9(::UnityEngine::UI::Text* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B5C470FD42C63551_METHOD_1_4FD935F03940FBA9_OFFSET))(a1, a2);
	}
};
