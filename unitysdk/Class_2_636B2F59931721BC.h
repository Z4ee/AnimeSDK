#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7898AD955658DC56.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_636B2F59931721BC_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x13AEDC00)
#define CLASS_2_636B2F59931721BC_METHOD_2_06E7280E6598782E_OFFSET UNITYSDK_OFFSET(0x13AED880)
#define CLASS_2_636B2F59931721BC_METHOD_2_5C2158E850B02732_OFFSET UNITYSDK_OFFSET(0x13AEDAC0)
#define CLASS_2_636B2F59931721BC_METHOD_2_80DA6C046DEC42AA_OFFSET UNITYSDK_OFFSET(0x13AEDBA0)
#define CLASS_2_636B2F59931721BC__CTOR_OFFSET UNITYSDK_OFFSET(0x13AEDB90)

inline static constexpr unsigned int Class_2_636B2F59931721BC_TypeDefinitionIndex = 44524;

class Class_2_636B2F59931721BC : public ::Class_1_7898AD955658DC56
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_06E7280E6598782E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_METHOD_2_06E7280E6598782E_OFFSET))(this, a1);
	}

	::System::Void Method_2_80DA6C046DEC42AA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_METHOD_2_80DA6C046DEC42AA_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5C2158E850B02732()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_METHOD_2_5C2158E850B02732_OFFSET))(this);
	}
};
