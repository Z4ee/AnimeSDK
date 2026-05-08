#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7898AD955658DC56.h"

namespace System { class Action; }

#define CLASS_2_636B2F59931721BC_1_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x10475AC0)
#define CLASS_2_636B2F59931721BC_1_METHOD_2_2C08B775DE26069F_OFFSET UNITYSDK_OFFSET(0x104757D0)
#define CLASS_2_636B2F59931721BC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10475AB0)

inline static constexpr unsigned int Class_2_636B2F59931721BC_1_TypeDefinitionIndex = 72441;

class Class_2_636B2F59931721BC_1 : public ::Class_1_7898AD955658DC56
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2C08B775DE26069F(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_1_METHOD_2_2C08B775DE26069F_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_1_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
