#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_380A0A33E87BA1F8_METHOD_2_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0xB471B70)
#define CLASS_2_380A0A33E87BA1F8__CTOR_OFFSET UNITYSDK_OFFSET(0xB471CB0)
#define CLASS_2_380A0A33E87BA1F8__ONBIND_OFFSET UNITYSDK_OFFSET(0xB471AD0)

inline static constexpr unsigned int Class_2_380A0A33E87BA1F8_TypeDefinitionIndex = 71387;

class Class_2_380A0A33E87BA1F8 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::System::String* GJNLHFPAKAD; // 0x60
	::UnityEngine::UI::Image* OBKJKJMPJLC; // 0x68
	::UnityEngine::UI::Image* BNCKJHCAOEA; // 0x70

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
};
