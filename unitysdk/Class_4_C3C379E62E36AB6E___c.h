#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EAF7984A8FAD6BE4;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_C3C379E62E36AB6E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA36BDB0)
#define CLASS_4_C3C379E62E36AB6E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA36BDE0)
#define CLASS_4_C3C379E62E36AB6E___C__POSTINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0xA36BDF0)
#define CLASS_4_C3C379E62E36AB6E___C__POSTINIT_B__6_1_OFFSET UNITYSDK_OFFSET(0xA36BE00)

inline static constexpr unsigned int Class_4_C3C379E62E36AB6E___c_TypeDefinitionIndex = 46543;

class Class_4_C3C379E62E36AB6E___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>** StaticGet___9__6_1()
	{
		return (::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_C3C379E62E36AB6E___c_TypeDefinitionIndex)->GetStaticField(0x17E90);
	}
	static ::Class_4_C3C379E62E36AB6E___c** StaticGet___9()
	{
		return (::Class_4_C3C379E62E36AB6E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_C3C379E62E36AB6E___c_TypeDefinitionIndex)->GetStaticField(0x17E98);
	}
	static ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_C3C379E62E36AB6E___c_TypeDefinitionIndex)->GetStaticField(0x17EA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_C3C379E62E36AB6E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C3C379E62E36AB6E___C__CTOR_OFFSET))(this);
	}

	::System::Void _PostInit_b__6_0(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_C3C379E62E36AB6E___C__POSTINIT_B__6_0_OFFSET))(this, a1);
	}

	::System::Void _PostInit_b__6_1(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_C3C379E62E36AB6E___C__POSTINIT_B__6_1_OFFSET))(this, a1);
	}
};
