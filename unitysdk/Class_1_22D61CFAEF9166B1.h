#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_63D18ECF87218619;
class Class_1_8A3C2FE068793E61;
class Class_2_0A142DC5409043BE;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }

#define CLASS_1_22D61CFAEF9166B1_METHOD_1_0D7D95DDBF071E2B_OFFSET UNITYSDK_OFFSET(0x16730510)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16730350)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_42E1A7D2FA0D43F3_OFFSET UNITYSDK_OFFSET(0x16730870)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x16730660)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_5C7DABD97F895860_OFFSET UNITYSDK_OFFSET(0x16730580)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_6E6F865C6BBBA8DD_OFFSET UNITYSDK_OFFSET(0x16730470)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_7F7793441B14EE76_OFFSET UNITYSDK_OFFSET(0x167309C0)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_85BCB649B4B59640_OFFSET UNITYSDK_OFFSET(0x16730600)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_893814ED967AF5E7_OFFSET UNITYSDK_OFFSET(0x167302B0)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x167303E0)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_C784934903D1CFFC_OFFSET UNITYSDK_OFFSET(0x1672CE00)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_D49CA5EC31388564_OFFSET UNITYSDK_OFFSET(0x167306E0)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x167306A0)
#define CLASS_1_22D61CFAEF9166B1__CTOR_OFFSET UNITYSDK_OFFSET(0x16730A80)

inline static constexpr unsigned int Class_1_22D61CFAEF9166B1_TypeDefinitionIndex = 28852;

class Class_1_22D61CFAEF9166B1 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Entitas::IEntity* Field_1_2; // 0x18
	::Class_2_0A142DC5409043BE* Field_1_0; // 0x20
	::Class_1_8A3C2FE068793E61* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_893814ED967AF5E7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_893814ED967AF5E7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_C784934903D1CFFC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_C784934903D1CFFC_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E6F865C6BBBA8DD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_6E6F865C6BBBA8DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D7D95DDBF071E2B(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_0D7D95DDBF071E2B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C7DABD97F895860(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_5C7DABD97F895860_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIVariable* Method_1_85BCB649B4B59640(::System::String* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_85BCB649B4B59640_OFFSET))(this, a1);
	}

	::Class_2_0A142DC5409043BE* Method_1_457717A0CF438A7C()
	{
		return ((::Class_2_0A142DC5409043BE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_457717A0CF438A7C_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_D49CA5EC31388564(::Class_1_63D18ECF87218619* a1, ::Entitas::IEntity* a2, ::System::String* a3, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619*, ::Entitas::IEntity*, ::System::String*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_D49CA5EC31388564_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_42E1A7D2FA0D43F3(::Class_1_63D18ECF87218619* a1, ::Entitas::IEntity* a2, ::System::String* a3, ::RPG::GameCore::AIConfig* a4, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619*, ::Entitas::IEntity*, ::System::String*, ::RPG::GameCore::AIConfig*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_42E1A7D2FA0D43F3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_7F7793441B14EE76(::Class_1_8A3C2FE068793E61* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_1_8A3C2FE068793E61*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_7F7793441B14EE76_OFFSET))(a1, a2);
	}
};
