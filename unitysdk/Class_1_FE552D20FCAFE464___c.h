#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FE552D20FCAFE464;
class Class_2_B9E8C2EEAA5C96EC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_FE552D20FCAFE464___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAAEF830)
#define CLASS_1_FE552D20FCAFE464___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAAEF860)
#define CLASS_1_FE552D20FCAFE464___C__SETIGNOREEXTERNALCOLLISION_B__6_0_OFFSET UNITYSDK_OFFSET(0xAAEF870)
#define CLASS_1_FE552D20FCAFE464___C__SETIGNOREEXTERNALCOLLISION_B__6_1_OFFSET UNITYSDK_OFFSET(0xAAEF8A0)

inline static constexpr unsigned int Class_1_FE552D20FCAFE464___c_TypeDefinitionIndex = 71410;

class Class_1_FE552D20FCAFE464___c : public ::System::Object
{
public:
	static ::Class_1_FE552D20FCAFE464___c** StaticGet___9()
	{
		return (::Class_1_FE552D20FCAFE464___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE552D20FCAFE464___c_TypeDefinitionIndex)->GetStaticField(0x5A70);
	}
	static ::System::Action_2<::Class_1_FE552D20FCAFE464*, ::Class_2_B9E8C2EEAA5C96EC*>** StaticGet___9__6_1()
	{
		return (::System::Action_2<::Class_1_FE552D20FCAFE464*, ::Class_2_B9E8C2EEAA5C96EC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE552D20FCAFE464___c_TypeDefinitionIndex)->GetStaticField(0x5A78);
	}
	static ::System::Action_2<::Class_1_FE552D20FCAFE464*, ::Class_2_B9E8C2EEAA5C96EC*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_1_FE552D20FCAFE464*, ::Class_2_B9E8C2EEAA5C96EC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE552D20FCAFE464___c_TypeDefinitionIndex)->GetStaticField(0x5A80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464___C__CTOR_OFFSET))(this);
	}

	::System::Void _SetIgnoreExternalCollision_b__6_0(::Class_1_FE552D20FCAFE464* a1, ::Class_2_B9E8C2EEAA5C96EC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE552D20FCAFE464*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464___C__SETIGNOREEXTERNALCOLLISION_B__6_0_OFFSET))(this, a1, a2);
	}

	::System::Void _SetIgnoreExternalCollision_b__6_1(::Class_1_FE552D20FCAFE464* a1, ::Class_2_B9E8C2EEAA5C96EC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE552D20FCAFE464*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_FE552D20FCAFE464___C__SETIGNOREEXTERNALCOLLISION_B__6_1_OFFSET))(this, a1, a2);
	}
};
