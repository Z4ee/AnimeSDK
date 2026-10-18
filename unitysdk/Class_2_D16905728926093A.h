#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_0_16E4307DCC419505_650;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_D16905728926093A_METHOD_2_760703E126812810_OFFSET UNITYSDK_OFFSET(0x1640A1F0)
#define CLASS_2_D16905728926093A_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x1640A4F0)
#define CLASS_2_D16905728926093A__CTOR_OFFSET UNITYSDK_OFFSET(0x1640A550)
#define CLASS_2_D16905728926093A__ONBIND_OFFSET UNITYSDK_OFFSET(0x1640A150)

inline static constexpr unsigned int Class_2_D16905728926093A_TypeDefinitionIndex = 71368;

class Class_2_D16905728926093A : public ::Class_1_34917908B7833130
{
public:
	::System::String* ONMIFAAODML; // 0x60
	::UnityEngine::UI::Image* OJKPNKKJADJ; // 0x68
	::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x70
	::UnityEngine::Animation* KCOAILOHDND; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D16905728926093A__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D16905728926093A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_760703E126812810(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_2_D16905728926093A_METHOD_2_760703E126812810_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D16905728926093A_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}
};
