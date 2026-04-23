#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5D9FADE393C1BEBA;
class Class_1_FAF142297ACBE062;

#define CLASS_1_46C4AD3834C1EA18_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAAF430)
#define CLASS_1_46C4AD3834C1EA18_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xBAAF610)
#define CLASS_1_46C4AD3834C1EA18_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xBAAF1E0)
#define CLASS_1_46C4AD3834C1EA18_METHOD_1_741837A0FB99F394_OFFSET UNITYSDK_OFFSET(0xBAAF4D0)
#define CLASS_1_46C4AD3834C1EA18_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0xBAAF390)
#define CLASS_1_46C4AD3834C1EA18_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBAAF600)
#define CLASS_1_46C4AD3834C1EA18__CTOR_OFFSET UNITYSDK_OFFSET(0xBAAF670)

inline static constexpr unsigned int Class_1_46C4AD3834C1EA18_TypeDefinitionIndex = 55214;

class Class_1_46C4AD3834C1EA18 : public ::System::Object
{
public:
	::Class_1_FAF142297ACBE062* Field_1_2; // 0x10
	::Class_1_5D9FADE393C1BEBA* Field_1_1; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::Boolean Field_1_0; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46C4AD3834C1EA18__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46C4AD3834C1EA18_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46C4AD3834C1EA18_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_741837A0FB99F394(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_46C4AD3834C1EA18_METHOD_1_741837A0FB99F394_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46C4AD3834C1EA18_METHOD_1_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46C4AD3834C1EA18_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_46C4AD3834C1EA18_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}
};
