#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_2_2F326B57B6445F8D_1_METHOD_2_E4EE4D98EE55C81B_OFFSET UNITYSDK_OFFSET(0x1CCAD5A0)
#define CLASS_2_2F326B57B6445F8D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCAD6D0)

inline static constexpr unsigned int Class_2_2F326B57B6445F8D_1_TypeDefinitionIndex = 22945;

class Class_2_2F326B57B6445F8D_1 : public ::RPG::GameCore::JsonConfig
{
public:
	::System::String* CMDBHDODLOE; // 0x10
	::System::String* OKOKOAFPJBM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F326B57B6445F8D_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_E4EE4D98EE55C81B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_2F326B57B6445F8D_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_2F326B57B6445F8D_1*&))((::PBYTE)hIl2Cpp + CLASS_2_2F326B57B6445F8D_1_METHOD_2_E4EE4D98EE55C81B_OFFSET))(a1, a2);
	}
};
