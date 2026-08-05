#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_D64917D1E9139335___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x15471130)
#define CLASS_2_D64917D1E9139335___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154710E0)
#define CLASS_2_D64917D1E9139335___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15471120)

inline static constexpr unsigned int Class_2_D64917D1E9139335___c_TypeDefinitionIndex = 82412;

class Class_2_D64917D1E9139335___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__5_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D64917D1E9139335___c_TypeDefinitionIndex)->GetStaticField(0x35E60);
	}
	static ::Class_2_D64917D1E9139335___c** StaticGet___9()
	{
		return (::Class_2_D64917D1E9139335___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D64917D1E9139335___c_TypeDefinitionIndex)->GetStaticField(0x35E68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D64917D1E9139335___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D64917D1E9139335___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D64917D1E9139335___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
