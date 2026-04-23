#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/System/Exception.h"

class Class_0_16E4307DCC419505_557;
class Class_0_16E4307DCC419505_559;
class Class_1_AA4BCBC1E3A957A3;
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_2_2690241A4D35989E_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0xB7BDD50)
#define CLASS_2_2690241A4D35989E_METHOD_2_333EBEF2DE915430_OFFSET UNITYSDK_OFFSET(0xB7BDC30)
#define CLASS_2_2690241A4D35989E_METHOD_2_4551506FAB148036_OFFSET UNITYSDK_OFFSET(0xB7BE5B0)
#define CLASS_2_2690241A4D35989E_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xB7BD100)
#define CLASS_2_2690241A4D35989E_METHOD_2_5B21C1B7BB128D37_OFFSET UNITYSDK_OFFSET(0xB7BFA70)
#define CLASS_2_2690241A4D35989E_METHOD_2_6D6CF28F8C13C88E_OFFSET UNITYSDK_OFFSET(0xB7BF5D0)
#define CLASS_2_2690241A4D35989E_METHOD_2_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0xB7BFBA0)
#define CLASS_2_2690241A4D35989E_METHOD_2_6FD24F93512FB72C_OFFSET UNITYSDK_OFFSET(0xB7BF9C0)
#define CLASS_2_2690241A4D35989E_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB7BDDB0)
#define CLASS_2_2690241A4D35989E_METHOD_2_8C7A0EBC62BF4B6D_OFFSET UNITYSDK_OFFSET(0xB7BE670)
#define CLASS_2_2690241A4D35989E_METHOD_2_92C07CED672667CD_OFFSET UNITYSDK_OFFSET(0xB7BF1A0)
#define CLASS_2_2690241A4D35989E_METHOD_2_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0xB7BEFF0)
#define CLASS_2_2690241A4D35989E_METHOD_2_E74700D489A193BA_OFFSET UNITYSDK_OFFSET(0xB7BDE40)
#define CLASS_2_2690241A4D35989E__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB7BD280)
#define CLASS_2_2690241A4D35989E__CTOR_OFFSET UNITYSDK_OFFSET(0xB7BD1F0)
#define CLASS_2_2690241A4D35989E___IFIXBASEPROXY_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0xB7BFCB0)

inline static constexpr unsigned int Class_2_2690241A4D35989E_TypeDefinitionIndex = 54995;

class Class_2_2690241A4D35989E : public ::System::Exception
{
public:
	::System::Object* Field_2_3; // 0x88
	::Il2CppArray<::System::Object*>* Field_2_4; // 0x90
	::Class_0_16E4307DCC419505_557* Field_2_1; // 0x98
	::System::Text::StringBuilder* Field_2_5; // 0xA0
	::Class_0_16E4307DCC419505_559* Field_2_2; // 0xA8
	::RPG::Client::ExeCode Field_2_0; // 0xB0

	::System::Void _ctor(::RPG::Client::ExeCode a1, ::Class_0_16E4307DCC419505_557* a2, ::Class_0_16E4307DCC419505_559* a3, ::System::Object* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ExeCode, ::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::RPG::Client::ExeCode a1, ::System::Exception* a2, ::Class_0_16E4307DCC419505_557* a3, ::Class_0_16E4307DCC419505_559* a4, ::System::Object* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ExeCode, ::System::Exception*, ::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::System::String* get_Message()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E_GET_MESSAGE_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_E74700D489A193BA(::RPG::LogTag a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E_METHOD_2_E74700D489A193BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8C7A0EBC62BF4B6D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E_METHOD_2_8C7A0EBC62BF4B6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_4551506FAB148036(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E_METHOD_2_4551506FAB148036_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_333EBEF2DE915430(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E_METHOD_2_333EBEF2DE915430_OFFSET))(a1);
	}

	::System::String* Method_2_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E_METHOD_2_C101CD8C5CF89A5A_OFFSET))(this);
	}

	::Class_1_AA4BCBC1E3A957A3* Method_2_92C07CED672667CD()
	{
		return ((::Class_1_AA4BCBC1E3A957A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E_METHOD_2_92C07CED672667CD_OFFSET))(this);
	}

	::System::Void Method_2_6D6CF28F8C13C88E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E_METHOD_2_6D6CF28F8C13C88E_OFFSET))(this);
	}

	::System::Void Method_2_6FD24F93512FB72C(::System::String* a1, ::Class_1_AA4BCBC1E3A957A3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_AA4BCBC1E3A957A3*))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E_METHOD_2_6FD24F93512FB72C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E_METHOD_2_6F73A40265D5B980_OFFSET))(this);
	}

	::System::String* Method_2_5B21C1B7BB128D37()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E_METHOD_2_5B21C1B7BB128D37_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_get_Message()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2690241A4D35989E___IFIXBASEPROXY_GET_MESSAGE_OFFSET))(this);
	}
};
