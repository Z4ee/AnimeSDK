#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_A12205C602394C2F_METHOD_2_4D92CAACEA159BBF_OFFSET UNITYSDK_OFFSET(0x1119CD30)
#define CLASS_2_A12205C602394C2F__CTOR_OFFSET UNITYSDK_OFFSET(0x1119CE00)
#define CLASS_2_A12205C602394C2F__ONBIND_OFFSET UNITYSDK_OFFSET(0x1119CC60)
#define CLASS_2_A12205C602394C2F___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1119CE30)

inline static constexpr unsigned int Class_2_A12205C602394C2F_TypeDefinitionIndex = 58449;

class Class_2_A12205C602394C2F : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_0; // 0x60

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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A12205C602394C2F___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
