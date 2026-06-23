#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_D80449748BE5D9D5;
class Class_3_F33F9DC5F4112336;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_B1197A63FC972D37___C_METHOD_1_3DE52AC7183E24F8_OFFSET UNITYSDK_OFFSET(0x142C4410)
#define CLASS_3_B1197A63FC972D37___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142C43C0)
#define CLASS_3_B1197A63FC972D37___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142C4400)

inline static constexpr unsigned int Class_3_B1197A63FC972D37___c_TypeDefinitionIndex = 66920;

class Class_3_B1197A63FC972D37___c : public ::System::Object
{
public:
	static ::Class_3_B1197A63FC972D37___c** StaticGet___9()
	{
		return (::Class_3_B1197A63FC972D37___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B1197A63FC972D37___c_TypeDefinitionIndex)->GetStaticField(0x42350);
	}
	static ::System::Action_2<::Class_3_D80449748BE5D9D5*, ::Class_3_F33F9DC5F4112336*>** StaticGet___9__4_0()
	{
		return (::System::Action_2<::Class_3_D80449748BE5D9D5*, ::Class_3_F33F9DC5F4112336*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B1197A63FC972D37___c_TypeDefinitionIndex)->GetStaticField(0x42358);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3DE52AC7183E24F8(::Class_3_D80449748BE5D9D5* a1, ::Class_3_F33F9DC5F4112336* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D80449748BE5D9D5*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_3_B1197A63FC972D37___C_METHOD_1_3DE52AC7183E24F8_OFFSET))(this, a1, a2);
	}
};
