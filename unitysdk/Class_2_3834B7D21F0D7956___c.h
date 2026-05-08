#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_3834B7D21F0D7956___C_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0xFB5B640)
#define CLASS_2_3834B7D21F0D7956___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB5B5F0)
#define CLASS_2_3834B7D21F0D7956___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFB5B630)

inline static constexpr unsigned int Class_2_3834B7D21F0D7956___c_TypeDefinitionIndex = 59931;

class Class_2_3834B7D21F0D7956___c : public ::System::Object
{
public:
	static ::Class_2_3834B7D21F0D7956___c** StaticGet___9()
	{
		return (::Class_2_3834B7D21F0D7956___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3834B7D21F0D7956___c_TypeDefinitionIndex)->GetStaticField(0x33060);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__8_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3834B7D21F0D7956___c_TypeDefinitionIndex)->GetStaticField(0x33068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3834B7D21F0D7956___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3834B7D21F0D7956___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3834B7D21F0D7956___C_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}
};
