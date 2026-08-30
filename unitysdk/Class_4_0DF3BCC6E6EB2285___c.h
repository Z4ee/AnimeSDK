#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EAF7984A8FAD6BE4;
namespace System { template <typename T> class Action_1; }

#define CLASS_4_0DF3BCC6E6EB2285___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C9FFD0)
#define CLASS_4_0DF3BCC6E6EB2285___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17CA0000)
#define CLASS_4_0DF3BCC6E6EB2285___C__POSTINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x17CA0010)
#define CLASS_4_0DF3BCC6E6EB2285___C__POSTINIT_B__6_1_OFFSET UNITYSDK_OFFSET(0x17CA0020)

inline static constexpr unsigned int Class_4_0DF3BCC6E6EB2285___c_TypeDefinitionIndex = 49788;

class Class_4_0DF3BCC6E6EB2285___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0DF3BCC6E6EB2285___c_TypeDefinitionIndex)->GetStaticField(0x617A0);
	}
	static ::Class_4_0DF3BCC6E6EB2285___c** StaticGet___9()
	{
		return (::Class_4_0DF3BCC6E6EB2285___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0DF3BCC6E6EB2285___c_TypeDefinitionIndex)->GetStaticField(0x617A8);
	}
	static ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>** StaticGet___9__6_1()
	{
		return (::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0DF3BCC6E6EB2285___c_TypeDefinitionIndex)->GetStaticField(0x617B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_0DF3BCC6E6EB2285___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DF3BCC6E6EB2285___C__CTOR_OFFSET))(this);
	}

	::System::Void _PostInit_b__6_0(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_0DF3BCC6E6EB2285___C__POSTINIT_B__6_0_OFFSET))(this, a1);
	}

	::System::Void _PostInit_b__6_1(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_0DF3BCC6E6EB2285___C__POSTINIT_B__6_1_OFFSET))(this, a1);
	}
};
