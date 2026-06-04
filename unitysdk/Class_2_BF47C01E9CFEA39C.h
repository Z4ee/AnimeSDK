#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/System/Exception.h"

class Class_0_16E4307DCC419505_579;
class Class_0_16E4307DCC419505_581;
class Class_1_AA4BCBC1E3A957A3;
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_2_BF47C01E9CFEA39C_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x13B4C200)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_333EBEF2DE915430_OFFSET UNITYSDK_OFFSET(0x13B4C0E0)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_4551506FAB148036_OFFSET UNITYSDK_OFFSET(0x13B4CA80)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_4723044876E0ADFD_OFFSET UNITYSDK_OFFSET(0x13B4DEB0)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_47CA4C4E40ED7186_OFFSET UNITYSDK_OFFSET(0x13B4D6A0)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x13B4B420)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_5B21C1B7BB128D37_OFFSET UNITYSDK_OFFSET(0x13B4DF80)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_6D6CF28F8C13C88E_OFFSET UNITYSDK_OFFSET(0x13B4DAD0)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x13B4E0B0)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x13B4C260)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_8C7A0EBC62BF4B6D_OFFSET UNITYSDK_OFFSET(0x13B4CB40)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0x13B4D4F0)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_E74700D489A193BA_OFFSET UNITYSDK_OFFSET(0x13B4C2F0)
#define CLASS_2_BF47C01E9CFEA39C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13B4B580)
#define CLASS_2_BF47C01E9CFEA39C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4B4F0)
#define CLASS_2_BF47C01E9CFEA39C___IFIXBASEPROXY_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x13B4E1C0)

inline static constexpr unsigned int Class_2_BF47C01E9CFEA39C_TypeDefinitionIndex = 55729;

class Class_2_BF47C01E9CFEA39C : public ::System::Exception
{
public:
	::Il2CppArray<::System::Object*>* Field_2_0; // 0x88
	::Class_0_16E4307DCC419505_579* Field_2_1; // 0x90
	::System::Object* Field_2_2; // 0x98
	::Class_0_16E4307DCC419505_581* Field_2_3; // 0xA0
	::System::Text::StringBuilder* Field_2_4; // 0xA8
	::RPG::Client::ExeCode Field_2_5; // 0xB0

	::System::Void _ctor(::RPG::Client::ExeCode a1, ::Class_0_16E4307DCC419505_579* a2, ::Class_0_16E4307DCC419505_581* a3, ::System::Object* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ExeCode, ::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::RPG::Client::ExeCode a1, ::System::Exception* a2, ::Class_0_16E4307DCC419505_579* a3, ::Class_0_16E4307DCC419505_581* a4, ::System::Object* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ExeCode, ::System::Exception*, ::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::System::String* get_Message()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_GET_MESSAGE_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_E74700D489A193BA(::RPG::LogTag a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_E74700D489A193BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8C7A0EBC62BF4B6D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_8C7A0EBC62BF4B6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_4551506FAB148036(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_4551506FAB148036_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_333EBEF2DE915430(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_333EBEF2DE915430_OFFSET))(a1);
	}

	::System::String* Method_2_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_C101CD8C5CF89A5A_OFFSET))(this);
	}

	::Class_1_AA4BCBC1E3A957A3* Method_2_47CA4C4E40ED7186()
	{
		return ((::Class_1_AA4BCBC1E3A957A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_47CA4C4E40ED7186_OFFSET))(this);
	}

	::System::Void Method_2_6D6CF28F8C13C88E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_6D6CF28F8C13C88E_OFFSET))(this);
	}

	::System::Void Method_2_4723044876E0ADFD(::System::String* a1, ::Class_1_AA4BCBC1E3A957A3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_AA4BCBC1E3A957A3*))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_4723044876E0ADFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_6F73A40265D5B980_OFFSET))(this);
	}

	::System::String* Method_2_5B21C1B7BB128D37()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_5B21C1B7BB128D37_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_get_Message()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C___IFIXBASEPROXY_GET_MESSAGE_OFFSET))(this);
	}
};
