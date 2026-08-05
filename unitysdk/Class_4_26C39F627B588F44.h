#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_26C39F627B588F44_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x17621F00)
#define CLASS_4_26C39F627B588F44_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x176222B0)
#define CLASS_4_26C39F627B588F44_METHOD_4_98B0208DB3A6542F_OFFSET UNITYSDK_OFFSET(0x17622050)
#define CLASS_4_26C39F627B588F44__CTOR_OFFSET UNITYSDK_OFFSET(0x17622180)

inline static constexpr unsigned int Class_4_26C39F627B588F44_TypeDefinitionIndex = 86952;

class Class_4_26C39F627B588F44 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_1; // 0x30
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_26C39F627B588F44__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_26C39F627B588F44_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_98B0208DB3A6542F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_26C39F627B588F44_METHOD_4_98B0208DB3A6542F_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_26C39F627B588F44_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
