#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7898AD955658DC56.h"

namespace System { class Action; }

#define CLASS_2_636B2F59931721BC_2_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x109D6720)
#define CLASS_2_636B2F59931721BC_2_METHOD_2_2C08B775DE26069F_OFFSET UNITYSDK_OFFSET(0x109D6430)
#define CLASS_2_636B2F59931721BC_2__CTOR_OFFSET UNITYSDK_OFFSET(0x109D6710)

inline static constexpr unsigned int Class_2_636B2F59931721BC_2_TypeDefinitionIndex = 61034;

class Class_2_636B2F59931721BC_2 : public ::Class_1_7898AD955658DC56
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2C08B775DE26069F(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_2_METHOD_2_2C08B775DE26069F_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_2_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
