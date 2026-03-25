#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_399;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_D16905728926093A_METHOD_2_760703E126812810_OFFSET UNITYSDK_OFFSET(0xD1719B0)
#define CLASS_2_D16905728926093A_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0xD171C60)
#define CLASS_2_D16905728926093A__CTOR_OFFSET UNITYSDK_OFFSET(0xD171CC0)
#define CLASS_2_D16905728926093A__ONBIND_OFFSET UNITYSDK_OFFSET(0xD1717F0)
#define CLASS_2_D16905728926093A___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xD171CF0)

inline static constexpr unsigned int Class_2_D16905728926093A_TypeDefinitionIndex = 58486;

class Class_2_D16905728926093A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_1; // 0x60
	::UnityEngine::UI::Image* Field_2_0; // 0x68
	::System::String* Field_2_3; // 0x70
	::UnityEngine::Animation* Field_2_2; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D16905728926093A__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D16905728926093A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_760703E126812810(::Class_0_16E4307DCC419505_399* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_399*))((::PBYTE)hIl2Cpp + CLASS_2_D16905728926093A_METHOD_2_760703E126812810_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D16905728926093A_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D16905728926093A___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
