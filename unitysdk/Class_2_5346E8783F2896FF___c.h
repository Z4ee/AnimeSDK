#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_5346E8783F2896FF___C_METHOD_1_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x187D54A0)
#define CLASS_2_5346E8783F2896FF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187D5450)
#define CLASS_2_5346E8783F2896FF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187D5490)

inline static constexpr unsigned int Class_2_5346E8783F2896FF___c_TypeDefinitionIndex = 48106;

class Class_2_5346E8783F2896FF___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__11_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5346E8783F2896FF___c_TypeDefinitionIndex)->GetStaticField(0x42320);
	}
	static ::Class_2_5346E8783F2896FF___c** StaticGet___9()
	{
		return (::Class_2_5346E8783F2896FF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5346E8783F2896FF___c_TypeDefinitionIndex)->GetStaticField(0x42328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5346E8783F2896FF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5346E8783F2896FF___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5346E8783F2896FF___C_METHOD_1_8DC652D916C182B2_OFFSET))(this);
	}
};
