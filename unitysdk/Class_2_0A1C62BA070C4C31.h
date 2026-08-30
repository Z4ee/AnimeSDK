#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class RPGFadeAnimation; }
namespace UnityEngine { class Animation; }

#define CLASS_2_0A1C62BA070C4C31_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x17A42CC0)
#define CLASS_2_0A1C62BA070C4C31_METHOD_2_508D4DD02D3DB74E_1_OFFSET UNITYSDK_OFFSET(0x17A42D10)
#define CLASS_2_0A1C62BA070C4C31_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x17A42EA0)
#define CLASS_2_0A1C62BA070C4C31_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x17A43030)
#define CLASS_2_0A1C62BA070C4C31__CTOR_OFFSET UNITYSDK_OFFSET(0x17A430A0)
#define CLASS_2_0A1C62BA070C4C31__ONBIND_OFFSET UNITYSDK_OFFSET(0x17A42C40)

inline static constexpr unsigned int Class_2_0A1C62BA070C4C31_TypeDefinitionIndex = 72115;

class Class_2_0A1C62BA070C4C31 : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::RPGFadeAnimation* BFOLJLOAOCF; // 0x60
	::UnityEngine::Animation* KCOAILOHDND; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A1C62BA070C4C31__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A1C62BA070C4C31__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A1C62BA070C4C31_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A1C62BA070C4C31_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A1C62BA070C4C31_METHOD_2_508D4DD02D3DB74E_1_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A1C62BA070C4C31_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}
};
