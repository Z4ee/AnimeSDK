#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EAF7984A8FAD6BE4;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_77D259970EA56340___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x123EF200)
#define CLASS_4_77D259970EA56340___C__CTOR_OFFSET UNITYSDK_OFFSET(0x123EF230)
#define CLASS_4_77D259970EA56340___C__POSTINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x123EF240)
#define CLASS_4_77D259970EA56340___C__POSTINIT_B__6_1_OFFSET UNITYSDK_OFFSET(0x123EF250)

inline static constexpr unsigned int Class_4_77D259970EA56340___c_TypeDefinitionIndex = 45960;

class Class_4_77D259970EA56340___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>** StaticGet___9__6_1()
	{
		return (::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_77D259970EA56340___c_TypeDefinitionIndex)->GetStaticField(0x7840);
	}
	static ::Class_4_77D259970EA56340___c** StaticGet___9()
	{
		return (::Class_4_77D259970EA56340___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_77D259970EA56340___c_TypeDefinitionIndex)->GetStaticField(0x7848);
	}
	static ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_77D259970EA56340___c_TypeDefinitionIndex)->GetStaticField(0x7850);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_77D259970EA56340___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_77D259970EA56340___C__CTOR_OFFSET))(this);
	}

	::System::Void _PostInit_b__6_0(::Class_1_EAF7984A8FAD6BE4* node)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_77D259970EA56340___C__POSTINIT_B__6_0_OFFSET))(this, node);
	}

	::System::Void _PostInit_b__6_1(::Class_1_EAF7984A8FAD6BE4* node)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_77D259970EA56340___C__POSTINIT_B__6_1_OFFSET))(this, node);
	}
};
