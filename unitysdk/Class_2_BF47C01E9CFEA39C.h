#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/System/Exception.h"

class Class_0_16E4307DCC419505_614;
class Class_0_16E4307DCC419505_616;
class Class_1_AA4BCBC1E3A957A3;
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_2_BF47C01E9CFEA39C_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x161FE0E0)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_126A583579A55C0E_OFFSET UNITYSDK_OFFSET(0x161FFBB0)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_2D03B34424DEBC93_OFFSET UNITYSDK_OFFSET(0x161FEC90)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_333EBEF2DE915430_OFFSET UNITYSDK_OFFSET(0x161FDFC0)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_46F7B17180F18369_OFFSET UNITYSDK_OFFSET(0x162002D0)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_4723044876E0ADFD_OFFSET UNITYSDK_OFFSET(0x16200720)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x161FCFB0)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_5B21C1B7BB128D37_OFFSET UNITYSDK_OFFSET(0x162007F0)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_64E2D07FFAF1D7F3_OFFSET UNITYSDK_OFFSET(0x161FE2A0)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x16200920)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_8C7A0EBC62BF4B6D_OFFSET UNITYSDK_OFFSET(0x161FEE30)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_CFDB2DF757369D2B_OFFSET UNITYSDK_OFFSET(0x161FE140)
#define CLASS_2_BF47C01E9CFEA39C_METHOD_2_F66468C7AF0BD8F1_OFFSET UNITYSDK_OFFSET(0x161FFDC0)
#define CLASS_2_BF47C01E9CFEA39C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x161FD110)
#define CLASS_2_BF47C01E9CFEA39C__CTOR_OFFSET UNITYSDK_OFFSET(0x161FD080)

inline static constexpr unsigned int Class_2_BF47C01E9CFEA39C_TypeDefinitionIndex = 56966;

class Class_2_BF47C01E9CFEA39C : public ::System::Exception
{
public:
	::Class_0_16E4307DCC419505_614* Field_2_0; // 0x88
	::Il2CppArray<::System::Object*>* Field_2_1; // 0x90
	::System::Text::StringBuilder* Field_2_2; // 0x98
	::Class_0_16E4307DCC419505_616* Field_2_3; // 0xA0
	::System::Object* Field_2_4; // 0xA8
	::RPG::Client::ExeCode Field_2_5; // 0xB0

	::System::Void _ctor(::RPG::Client::ExeCode a1, ::Class_0_16E4307DCC419505_614* a2, ::Class_0_16E4307DCC419505_616* a3, ::System::Object* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ExeCode, ::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::RPG::Client::ExeCode a1, ::System::Exception* a2, ::Class_0_16E4307DCC419505_614* a3, ::Class_0_16E4307DCC419505_616* a4, ::System::Object* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ExeCode, ::System::Exception*, ::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::System::String* get_Message()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_GET_MESSAGE_OFFSET))(this);
	}

	::System::String* Method_2_CFDB2DF757369D2B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_CFDB2DF757369D2B_OFFSET))(this);
	}

	::System::Void Method_2_64E2D07FFAF1D7F3(::RPG::LogTag a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_64E2D07FFAF1D7F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8C7A0EBC62BF4B6D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_8C7A0EBC62BF4B6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D03B34424DEBC93(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_2D03B34424DEBC93_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_333EBEF2DE915430(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_333EBEF2DE915430_OFFSET))(a1);
	}

	::System::String* Method_2_126A583579A55C0E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_126A583579A55C0E_OFFSET))(this);
	}

	::Class_1_AA4BCBC1E3A957A3* Method_2_F66468C7AF0BD8F1()
	{
		return ((::Class_1_AA4BCBC1E3A957A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_F66468C7AF0BD8F1_OFFSET))(this);
	}

	::System::Void Method_2_46F7B17180F18369()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF47C01E9CFEA39C_METHOD_2_46F7B17180F18369_OFFSET))(this);
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
};
