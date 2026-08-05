#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_E9C11D8CE67E3DBC___C_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x16828AF0)
#define CLASS_2_E9C11D8CE67E3DBC___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x16828A60)
#define CLASS_2_E9C11D8CE67E3DBC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16828A10)
#define CLASS_2_E9C11D8CE67E3DBC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16828A50)

inline static constexpr unsigned int Class_2_E9C11D8CE67E3DBC___c_TypeDefinitionIndex = 60776;

class Class_2_E9C11D8CE67E3DBC___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__26_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9C11D8CE67E3DBC___c_TypeDefinitionIndex)->GetStaticField(0x4EE40);
	}
	static ::Class_2_E9C11D8CE67E3DBC___c** StaticGet___9()
	{
		return (::Class_2_E9C11D8CE67E3DBC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9C11D8CE67E3DBC___c_TypeDefinitionIndex)->GetStaticField(0x4EE48);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__26_5()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9C11D8CE67E3DBC___c_TypeDefinitionIndex)->GetStaticField(0x4EE50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9C11D8CE67E3DBC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9C11D8CE67E3DBC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9C11D8CE67E3DBC___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9C11D8CE67E3DBC___C_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}
};
