#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_0339E27AE29FFBC1;
class Class_3_846182BC37DE078E;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_70BDF4AA7459A0F1___C_METHOD_1_8E9C34D00027D211_OFFSET UNITYSDK_OFFSET(0x14EC56C0)
#define CLASS_3_70BDF4AA7459A0F1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EC5670)
#define CLASS_3_70BDF4AA7459A0F1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14EC56B0)

inline static constexpr unsigned int Class_3_70BDF4AA7459A0F1___c_TypeDefinitionIndex = 74213;

class Class_3_70BDF4AA7459A0F1___c : public ::System::Object
{
public:
	static ::Class_3_70BDF4AA7459A0F1___c** StaticGet___9()
	{
		return (::Class_3_70BDF4AA7459A0F1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_70BDF4AA7459A0F1___c_TypeDefinitionIndex)->GetStaticField(0x4A110);
	}
	static ::System::Action_2<::Class_3_0339E27AE29FFBC1*, ::Class_3_846182BC37DE078E*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_3_0339E27AE29FFBC1*, ::Class_3_846182BC37DE078E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_70BDF4AA7459A0F1___c_TypeDefinitionIndex)->GetStaticField(0x4A118);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8E9C34D00027D211(::Class_3_0339E27AE29FFBC1* a1, ::Class_3_846182BC37DE078E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0339E27AE29FFBC1*, ::Class_3_846182BC37DE078E*))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1___C_METHOD_1_8E9C34D00027D211_OFFSET))(this, a1, a2);
	}
};
