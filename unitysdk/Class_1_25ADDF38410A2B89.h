#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_349;
class Class_0_16E4307DCC419505_351;
class Class_2_49B8518B8EA39010;

#define CLASS_1_25ADDF38410A2B89_METHOD_1_DC5AD9A28CD2F9A4_OFFSET UNITYSDK_OFFSET(0x1EFCCB10)
#define CLASS_1_25ADDF38410A2B89__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFCF470)
#define CLASS_1_25ADDF38410A2B89__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFCF460)

inline static constexpr unsigned int Class_1_25ADDF38410A2B89_TypeDefinitionIndex = 43997;

class Class_1_25ADDF38410A2B89 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_349** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_0_16E4307DCC419505_349**)Il2CppClass::FromTypeDefinitionIndex(Class_1_25ADDF38410A2B89_TypeDefinitionIndex)->GetStaticField(0x1400);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25ADDF38410A2B89__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_25ADDF38410A2B89__CCTOR_OFFSET))();
	}

	::Class_0_16E4307DCC419505_351* Method_1_DC5AD9A28CD2F9A4(::Class_2_49B8518B8EA39010* a1)
	{
		return ((::Class_0_16E4307DCC419505_351*(*)(::PVOID, ::Class_2_49B8518B8EA39010*))((::PBYTE)hIl2Cpp + CLASS_1_25ADDF38410A2B89_METHOD_1_DC5AD9A28CD2F9A4_OFFSET))(this, a1);
	}
};
