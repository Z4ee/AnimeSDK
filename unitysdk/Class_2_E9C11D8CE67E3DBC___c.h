#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_E9C11D8CE67E3DBC___C_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x150B4300)
#define CLASS_2_E9C11D8CE67E3DBC___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x150B4270)
#define CLASS_2_E9C11D8CE67E3DBC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150B4220)
#define CLASS_2_E9C11D8CE67E3DBC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150B4260)

inline static constexpr unsigned int Class_2_E9C11D8CE67E3DBC___c_TypeDefinitionIndex = 81251;

class Class_2_E9C11D8CE67E3DBC___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__26_5()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9C11D8CE67E3DBC___c_TypeDefinitionIndex)->GetStaticField(0x32B30);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__26_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9C11D8CE67E3DBC___c_TypeDefinitionIndex)->GetStaticField(0x32B38);
	}
	static ::Class_2_E9C11D8CE67E3DBC___c** StaticGet___9()
	{
		return (::Class_2_E9C11D8CE67E3DBC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9C11D8CE67E3DBC___c_TypeDefinitionIndex)->GetStaticField(0x32B40);
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
