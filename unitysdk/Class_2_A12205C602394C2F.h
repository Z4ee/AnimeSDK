#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_A12205C602394C2F_METHOD_2_4D92CAACEA159BBF_OFFSET UNITYSDK_OFFSET(0x177C94E0)
#define CLASS_2_A12205C602394C2F__CTOR_OFFSET UNITYSDK_OFFSET(0x177C95B0)
#define CLASS_2_A12205C602394C2F__ONBIND_OFFSET UNITYSDK_OFFSET(0x177C9460)

inline static constexpr unsigned int Class_2_A12205C602394C2F_TypeDefinitionIndex = 71290;

class Class_2_A12205C602394C2F : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A12205C602394C2F__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A12205C602394C2F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4D92CAACEA159BBF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A12205C602394C2F_METHOD_2_4D92CAACEA159BBF_OFFSET))(this, a1);
	}
};
