#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_380A0A33E87BA1F8_METHOD_2_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0xA3C0260)
#define CLASS_2_380A0A33E87BA1F8__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C03A0)
#define CLASS_2_380A0A33E87BA1F8__ONBIND_OFFSET UNITYSDK_OFFSET(0xA3C01C0)
#define CLASS_2_380A0A33E87BA1F8___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA3C03D0)

inline static constexpr unsigned int Class_2_380A0A33E87BA1F8_TypeDefinitionIndex = 66768;

class Class_2_380A0A33E87BA1F8 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Image* Field_2_1; // 0x60
	::System::String* Field_2_2; // 0x68
	::UnityEngine::UI::Image* Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380A0A33E87BA1F8__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380A0A33E87BA1F8__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B6BF2A1BCE9B9659(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_380A0A33E87BA1F8_METHOD_2_B6BF2A1BCE9B9659_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_380A0A33E87BA1F8___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
