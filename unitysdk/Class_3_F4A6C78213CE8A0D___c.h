#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F4A6C78213CE8A0D;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F4A6C78213CE8A0D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BBDCC0)
#define CLASS_3_F4A6C78213CE8A0D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10BBDD00)
#define CLASS_3_F4A6C78213CE8A0D___C__GET_SWITCHTOGROUNDMOVE_B__6_0_OFFSET UNITYSDK_OFFSET(0x10BBDD10)

inline static constexpr unsigned int Class_3_F4A6C78213CE8A0D___c_TypeDefinitionIndex = 62722;

class Class_3_F4A6C78213CE8A0D___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_F4A6C78213CE8A0D*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_3_F4A6C78213CE8A0D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F4A6C78213CE8A0D___c_TypeDefinitionIndex)->GetStaticField(0x48350);
	}
	static ::Class_3_F4A6C78213CE8A0D___c** StaticGet___9()
	{
		return (::Class_3_F4A6C78213CE8A0D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F4A6C78213CE8A0D___c_TypeDefinitionIndex)->GetStaticField(0x48358);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F4A6C78213CE8A0D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4A6C78213CE8A0D___C__CTOR_OFFSET))(this);
	}

	::System::Void _get_SwitchToGroundMove_b__6_0(::Class_3_F4A6C78213CE8A0D* state)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F4A6C78213CE8A0D*))((::PBYTE)hIl2Cpp + CLASS_3_F4A6C78213CE8A0D___C__GET_SWITCHTOGROUNDMOVE_B__6_0_OFFSET))(this, state);
	}
};
