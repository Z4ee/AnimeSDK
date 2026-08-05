#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5742B37FBACD916C;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_AFA7C3CE6B838600___C_METHOD_1_2BA51ADAB1BBFA44_OFFSET UNITYSDK_OFFSET(0x13D4FBC0)
#define CLASS_3_AFA7C3CE6B838600___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D4FB70)
#define CLASS_3_AFA7C3CE6B838600___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D4FBB0)

inline static constexpr unsigned int Class_3_AFA7C3CE6B838600___c_TypeDefinitionIndex = 76054;

class Class_3_AFA7C3CE6B838600___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_5742B37FBACD916C*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_5742B37FBACD916C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AFA7C3CE6B838600___c_TypeDefinitionIndex)->GetStaticField(0x460E0);
	}
	static ::Class_3_AFA7C3CE6B838600___c** StaticGet___9()
	{
		return (::Class_3_AFA7C3CE6B838600___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AFA7C3CE6B838600___c_TypeDefinitionIndex)->GetStaticField(0x460E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AFA7C3CE6B838600___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFA7C3CE6B838600___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2BA51ADAB1BBFA44(::Class_3_5742B37FBACD916C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5742B37FBACD916C*))((::PBYTE)hIl2Cpp + CLASS_3_AFA7C3CE6B838600___C_METHOD_1_2BA51ADAB1BBFA44_OFFSET))(this, a1);
	}
};
