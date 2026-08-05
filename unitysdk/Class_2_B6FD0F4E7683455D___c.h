#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_B6FD0F4E7683455D___C_METHOD_1_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x1682CA20)
#define CLASS_2_B6FD0F4E7683455D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1682C9D0)
#define CLASS_2_B6FD0F4E7683455D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1682CA10)

inline static constexpr unsigned int Class_2_B6FD0F4E7683455D___c_TypeDefinitionIndex = 61232;

class Class_2_B6FD0F4E7683455D___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B6FD0F4E7683455D___c_TypeDefinitionIndex)->GetStaticField(0x33E40);
	}
	static ::Class_2_B6FD0F4E7683455D___c** StaticGet___9()
	{
		return (::Class_2_B6FD0F4E7683455D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B6FD0F4E7683455D___c_TypeDefinitionIndex)->GetStaticField(0x33E48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B6FD0F4E7683455D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6FD0F4E7683455D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6FD0F4E7683455D___C_METHOD_1_EBAB6A35C21A2A5B_OFFSET))(this);
	}
};
