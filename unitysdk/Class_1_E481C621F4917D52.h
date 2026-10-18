#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompilerFramework/DiagnosticSeverity.h"
#include "unitysdk/System/Object.h"

class Class_1_872B9BFACDB0D272;
class Class_1_B5BAE7EF32C11912;
namespace System { class IFormatProvider; }
namespace System { class String; }

#define CLASS_1_E481C621F4917D52_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C509300)
#define CLASS_1_E481C621F4917D52_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C509200)
#define CLASS_1_E481C621F4917D52_METHOD_1_21CD0441EB9FFE02_OFFSET UNITYSDK_OFFSET(0x1C509B80)
#define CLASS_1_E481C621F4917D52_METHOD_1_25872A18CEBE689B_OFFSET UNITYSDK_OFFSET(0x1C509950)
#define CLASS_1_E481C621F4917D52_METHOD_1_35FD81A5CEA82E0F_OFFSET UNITYSDK_OFFSET(0x1C5093B0)
#define CLASS_1_E481C621F4917D52_METHOD_1_37A9F8E5999E6AB6_1_OFFSET UNITYSDK_OFFSET(0x1C509CE0)
#define CLASS_1_E481C621F4917D52_METHOD_1_37A9F8E5999E6AB6_OFFSET UNITYSDK_OFFSET(0x1C509CD0)
#define CLASS_1_E481C621F4917D52_METHOD_1_42C71991F69DB899_OFFSET UNITYSDK_OFFSET(0x1C508D50)
#define CLASS_1_E481C621F4917D52_METHOD_1_45CCDE687DEEF3B6_OFFSET UNITYSDK_OFFSET(0x1C509CF0)
#define CLASS_1_E481C621F4917D52_METHOD_1_5792D337BF7340E8_OFFSET UNITYSDK_OFFSET(0x1C509900)
#define CLASS_1_E481C621F4917D52_METHOD_1_7945562A0F090D2F_OFFSET UNITYSDK_OFFSET(0x1C509830)
#define CLASS_1_E481C621F4917D52_METHOD_1_8040BAF29B6E8032_OFFSET UNITYSDK_OFFSET(0x1C509C70)
#define CLASS_1_E481C621F4917D52_METHOD_1_B790A4F70501AB3B_OFFSET UNITYSDK_OFFSET(0x1C509BD0)
#define CLASS_1_E481C621F4917D52_METHOD_1_BFEF778BDBA69F9A_OFFSET UNITYSDK_OFFSET(0x1C5091A0)
#define CLASS_1_E481C621F4917D52_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1C509C60)
#define CLASS_1_E481C621F4917D52_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C509590)
#define CLASS_1_E481C621F4917D52_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C509120)
#define CLASS_1_E481C621F4917D52__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C508C70)
#define CLASS_1_E481C621F4917D52__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C508D20)
#define CLASS_1_E481C621F4917D52__CTOR_OFFSET UNITYSDK_OFFSET(0x1C508B10)

inline static constexpr unsigned int Class_1_E481C621F4917D52_TypeDefinitionIndex = 41612;

class Class_1_E481C621F4917D52 : public ::System::Object
{
public:
	::Class_1_872B9BFACDB0D272* NFJDKCOENIJ; // 0x10
	::Il2CppArray<::System::Object*>* PGDBJIDJNBA; // 0x18
	::RPG::Client::CompilerFramework::DiagnosticSeverity AHADOKFBBMN; // 0x20
	::RPG::Client::CompilerFramework::DiagnosticSeverity GNDPJBDKIMB; // 0x24
	::System::Int32 KFEIPJJCELM; // 0x28

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

	static ::Class_1_B5BAE7EF32C11912* Method_1_42C71991F69DB899(::System::Int32 a1, ::RPG::Client::CompilerFramework::DiagnosticSeverity a2, ::Class_1_872B9BFACDB0D272* a3)
	{
		return ((::Class_1_B5BAE7EF32C11912*(*)(::System::Int32, ::RPG::Client::CompilerFramework::DiagnosticSeverity, ::Class_1_872B9BFACDB0D272*))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_42C71991F69DB899_OFFSET))(a1, a2, a3);
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

	::Class_1_B5BAE7EF32C11912* Method_1_5792D337BF7340E8()
	{
		return ((::Class_1_B5BAE7EF32C11912*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E481C621F4917D52_METHOD_1_5792D337BF7340E8_OFFSET))(this);
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
