#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_61F6C547D0193094___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x165A1060)
#define CLASS_2_61F6C547D0193094___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165A1010)
#define CLASS_2_61F6C547D0193094___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165A1050)

inline static constexpr unsigned int Class_2_61F6C547D0193094___c_TypeDefinitionIndex = 81807;

class Class_2_61F6C547D0193094___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__19_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_61F6C547D0193094___c_TypeDefinitionIndex)->GetStaticField(0x385E0);
	}
	static ::Class_2_61F6C547D0193094___c** StaticGet___9()
	{
		return (::Class_2_61F6C547D0193094___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_61F6C547D0193094___c_TypeDefinitionIndex)->GetStaticField(0x385E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_61F6C547D0193094___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61F6C547D0193094___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61F6C547D0193094___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
