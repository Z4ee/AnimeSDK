#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_68C34B5C1C40C2FF.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_5B54F8E97EAA9CC8_METHOD_3_481800E2ED22AD35_OFFSET UNITYSDK_OFFSET(0x1CF1ACC0)
#define CLASS_3_5B54F8E97EAA9CC8_METHOD_3_6F57C0C4237B910A_OFFSET UNITYSDK_OFFSET(0x1CF1AD00)
#define CLASS_3_5B54F8E97EAA9CC8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1ACF0)

inline static constexpr unsigned int Class_3_5B54F8E97EAA9CC8_TypeDefinitionIndex = 18255;

class Class_3_5B54F8E97EAA9CC8 : public ::Class_2_68C34B5C1C40C2FF
{
public:
	::RPG::GameCore::DynamicFloat* HOCMHABKLGJ; // 0x10
	::Enum_3_0A3761FE34514D6C_2 GMPGDEINODK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B54F8E97EAA9CC8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_481800E2ED22AD35(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5B54F8E97EAA9CC8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5B54F8E97EAA9CC8*&))((::PBYTE)hIl2Cpp + CLASS_3_5B54F8E97EAA9CC8_METHOD_3_481800E2ED22AD35_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6F57C0C4237B910A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5B54F8E97EAA9CC8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5B54F8E97EAA9CC8*))((::PBYTE)hIl2Cpp + CLASS_3_5B54F8E97EAA9CC8_METHOD_3_6F57C0C4237B910A_OFFSET))(a1, a2);
	}
};
