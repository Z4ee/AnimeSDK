#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompilerFramework/DiagnosticSeverity.h"
#include "unitysdk/System/Object.h"

class Class_1_872B9BFACDB0D272;
class Class_1_E64E628023DB0DCB;
namespace System { class IFormatProvider; }
namespace System { class String; }

#define CLASS_1_E481C621F4917D52_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D24A4D0)
#define CLASS_1_E481C621F4917D52_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D24A3D0)
#define CLASS_1_E481C621F4917D52_METHOD_1_21CD0441EB9FFE02_OFFSET UNITYSDK_OFFSET(0x1D24AD50)
#define CLASS_1_E481C621F4917D52_METHOD_1_25872A18CEBE689B_OFFSET UNITYSDK_OFFSET(0x1D24AB20)
#define CLASS_1_E481C621F4917D52_METHOD_1_35FD81A5CEA82E0F_OFFSET UNITYSDK_OFFSET(0x1D24A580)
#define CLASS_1_E481C621F4917D52_METHOD_1_37A9F8E5999E6AB6_1_OFFSET UNITYSDK_OFFSET(0x1D24AEC0)
#define CLASS_1_E481C621F4917D52_METHOD_1_37A9F8E5999E6AB6_OFFSET UNITYSDK_OFFSET(0x1D24AEB0)
#define CLASS_1_E481C621F4917D52_METHOD_1_42C71991F69DB899_OFFSET UNITYSDK_OFFSET(0x1D249F20)
#define CLASS_1_E481C621F4917D52_METHOD_1_45CCDE687DEEF3B6_OFFSET UNITYSDK_OFFSET(0x1D24AED0)
#define CLASS_1_E481C621F4917D52_METHOD_1_5792D337BF7340E8_OFFSET UNITYSDK_OFFSET(0x1D24AAD0)
#define CLASS_1_E481C621F4917D52_METHOD_1_7945562A0F090D2F_OFFSET UNITYSDK_OFFSET(0x1D24AA00)
#define CLASS_1_E481C621F4917D52_METHOD_1_8040BAF29B6E8032_OFFSET UNITYSDK_OFFSET(0x1D24AE50)
#define CLASS_1_E481C621F4917D52_METHOD_1_B790A4F70501AB3B_OFFSET UNITYSDK_OFFSET(0x1D24ADA0)
#define CLASS_1_E481C621F4917D52_METHOD_1_BFEF778BDBA69F9A_OFFSET UNITYSDK_OFFSET(0x1D24A370)
#define CLASS_1_E481C621F4917D52_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1D24AE40)
#define CLASS_1_E481C621F4917D52_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D24A760)
#define CLASS_1_E481C621F4917D52_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D24A2F0)
#define CLASS_1_E481C621F4917D52__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D249E40)
#define CLASS_1_E481C621F4917D52__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D249EF0)
#define CLASS_1_E481C621F4917D52__CTOR_OFFSET UNITYSDK_OFFSET(0x1D249CE0)

inline static constexpr unsigned int Class_1_E481C621F4917D52_TypeDefinitionIndex = 39441;

class Class_1_E481C621F4917D52 : public ::System::Object
{
public:
	::Il2CppArray<::System::Object*>* Field_1_0; // 0x10
	::Class_1_872B9BFACDB0D272* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::RPG::Client::CompilerFramework::DiagnosticSeverity Field_1_3; // 0x24
	::RPG::Client::CompilerFramework::DiagnosticSeverity Field_1_4; // 0x28

	::System::Void _ctor(::Class_1_872B9BFACDB0D272* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_872B9BFACDB0D272*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_872B9BFACDB0D272* a1, ::System::Int32 a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_872B9BFACDB0D272*, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_2(::Class_1_E481C621F4917D52* a1, ::RPG::Client::CompilerFramework::DiagnosticSeverity a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E481C621F4917D52*, ::RPG::Client::CompilerFramework::DiagnosticSeverity))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52__CTOR_2_OFFSET))(this, a1, a2);
	}

	static ::Class_1_E64E628023DB0DCB* Method_1_42C71991F69DB899(::System::Int32 a1, ::RPG::Client::CompilerFramework::DiagnosticSeverity a2, ::Class_1_872B9BFACDB0D272* a3)
	{
		return ((::Class_1_E64E628023DB0DCB*(*)(::System::Int32, ::RPG::Client::CompilerFramework::DiagnosticSeverity, ::Class_1_872B9BFACDB0D272*))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_42C71991F69DB899_OFFSET))(a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_EQUALS_OFFSET))(this, a1);
	}

	::System::String* ToString_1(::System::String* a1, ::System::IFormatProvider* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_TOSTRING_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_BFEF778BDBA69F9A(::System::IFormatProvider* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_BFEF778BDBA69F9A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_35FD81A5CEA82E0F(::Class_1_E481C621F4917D52* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E481C621F4917D52*))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_35FD81A5CEA82E0F_OFFSET))(this, a1);
	}

	::Class_1_E481C621F4917D52* Method_1_7945562A0F090D2F(::RPG::Client::CompilerFramework::DiagnosticSeverity a1)
	{
		return ((::Class_1_E481C621F4917D52*(*)(::PVOID, ::RPG::Client::CompilerFramework::DiagnosticSeverity))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_7945562A0F090D2F_OFFSET))(this, a1);
	}

	::Class_1_E64E628023DB0DCB* Method_1_5792D337BF7340E8()
	{
		return ((::Class_1_E64E628023DB0DCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_5792D337BF7340E8_OFFSET))(this);
	}

	::System::String* Method_1_25872A18CEBE689B(::System::IFormatProvider* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_25872A18CEBE689B_OFFSET))(this, a1);
	}

	::Class_1_E481C621F4917D52* Method_1_B790A4F70501AB3B(::RPG::Client::CompilerFramework::DiagnosticSeverity a1)
	{
		return ((::Class_1_E481C621F4917D52*(*)(::PVOID, ::RPG::Client::CompilerFramework::DiagnosticSeverity))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_B790A4F70501AB3B_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Object*>* Method_1_21CD0441EB9FFE02(::System::IFormatProvider* a1)
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_21CD0441EB9FFE02_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::String* Method_1_8040BAF29B6E8032()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_8040BAF29B6E8032_OFFSET))(this);
	}

	::RPG::Client::CompilerFramework::DiagnosticSeverity Method_1_37A9F8E5999E6AB6()
	{
		return ((::RPG::Client::CompilerFramework::DiagnosticSeverity(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_37A9F8E5999E6AB6_OFFSET))(this);
	}

	::RPG::Client::CompilerFramework::DiagnosticSeverity Method_1_37A9F8E5999E6AB6_1()
	{
		return ((::RPG::Client::CompilerFramework::DiagnosticSeverity(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_37A9F8E5999E6AB6_1_OFFSET))(this);
	}

	::System::String* Method_1_45CCDE687DEEF3B6()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_45CCDE687DEEF3B6_OFFSET))(this);
	}
};
