#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_383AA0A44EC42B26;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_383AA0A44EC42B26___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B64E70)
#define CLASS_2_383AA0A44EC42B26___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B64EB0)
#define CLASS_2_383AA0A44EC42B26___C__GET_SWITCHTOIDLE_B__31_0_OFFSET UNITYSDK_OFFSET(0x10B64EC0)

inline static constexpr unsigned int Class_2_383AA0A44EC42B26___c_TypeDefinitionIndex = 62720;

class Class_2_383AA0A44EC42B26___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_2_383AA0A44EC42B26*>** StaticGet___9__31_0()
	{
		return (::System::Action_1<::Class_2_383AA0A44EC42B26*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_383AA0A44EC42B26___c_TypeDefinitionIndex)->GetStaticField(0x47D70);
	}
	static ::Class_2_383AA0A44EC42B26___c** StaticGet___9()
	{
		return (::Class_2_383AA0A44EC42B26___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_383AA0A44EC42B26___c_TypeDefinitionIndex)->GetStaticField(0x47D78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_383AA0A44EC42B26___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_383AA0A44EC42B26___C__CTOR_OFFSET))(this);
	}

	::System::Void _get_SwitchToIdle_b__31_0(::Class_2_383AA0A44EC42B26* state)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_383AA0A44EC42B26*))((::PBYTE)hIl2Cpp + CLASS_2_383AA0A44EC42B26___C__GET_SWITCHTOIDLE_B__31_0_OFFSET))(this, state);
	}
};
