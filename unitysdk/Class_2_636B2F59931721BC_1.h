#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7898AD955658DC56.h"

namespace System { class Action; }

#define CLASS_2_636B2F59931721BC_1_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x159A3A00)
#define CLASS_2_636B2F59931721BC_1_METHOD_2_2E4B2DB414949954_OFFSET UNITYSDK_OFFSET(0x159A3820)
#define CLASS_2_636B2F59931721BC_1_METHOD_2_BF3A97FF800F0C24_OFFSET UNITYSDK_OFFSET(0x159A37B0)
#define CLASS_2_636B2F59931721BC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x159A3810)

inline static constexpr unsigned int Class_2_636B2F59931721BC_1_TypeDefinitionIndex = 68872;

class Class_2_636B2F59931721BC_1 : public ::Class_1_7898AD955658DC56
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BF3A97FF800F0C24(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_1_METHOD_2_BF3A97FF800F0C24_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2E4B2DB414949954()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_1_METHOD_2_2E4B2DB414949954_OFFSET))(this);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_1_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
