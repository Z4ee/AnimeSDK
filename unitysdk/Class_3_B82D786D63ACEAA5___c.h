#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_3_B82D786D63ACEAA5___C_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x13AD8590)
#define CLASS_3_B82D786D63ACEAA5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AD8540)
#define CLASS_3_B82D786D63ACEAA5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD8580)

inline static constexpr unsigned int Class_3_B82D786D63ACEAA5___c_TypeDefinitionIndex = 51428;

class Class_3_B82D786D63ACEAA5___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__5_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B82D786D63ACEAA5___c_TypeDefinitionIndex)->GetStaticField(0x36500);
	}
	static ::Class_3_B82D786D63ACEAA5___c** StaticGet___9()
	{
		return (::Class_3_B82D786D63ACEAA5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B82D786D63ACEAA5___c_TypeDefinitionIndex)->GetStaticField(0x36508);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B82D786D63ACEAA5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B82D786D63ACEAA5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B82D786D63ACEAA5___C_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}
};
