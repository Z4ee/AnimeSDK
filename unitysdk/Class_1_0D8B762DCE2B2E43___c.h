#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92B0B8C84327961B;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_0D8B762DCE2B2E43___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1665E350)
#define CLASS_1_0D8B762DCE2B2E43___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1665E390)
#define CLASS_1_0D8B762DCE2B2E43___C__UPDATEABILITIES_B__8_0_OFFSET UNITYSDK_OFFSET(0x1665E3A0)

inline static constexpr unsigned int Class_1_0D8B762DCE2B2E43___c_TypeDefinitionIndex = 28936;

class Class_1_0D8B762DCE2B2E43___c : public ::System::Object
{
public:
	static ::Class_1_0D8B762DCE2B2E43___c** StaticGet___9()
	{
		return (::Class_1_0D8B762DCE2B2E43___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D8B762DCE2B2E43___c_TypeDefinitionIndex)->GetStaticField(0x28D70);
	}
	static ::System::Predicate_1<::Class_1_92B0B8C84327961B*>** StaticGet___9__8_0()
	{
		return (::System::Predicate_1<::Class_1_92B0B8C84327961B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D8B762DCE2B2E43___c_TypeDefinitionIndex)->GetStaticField(0x28D78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _UpdateAbilities_b__8_0(::Class_1_92B0B8C84327961B* ability)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_92B0B8C84327961B*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43___C__UPDATEABILITIES_B__8_0_OFFSET))(this, ability);
	}
};
