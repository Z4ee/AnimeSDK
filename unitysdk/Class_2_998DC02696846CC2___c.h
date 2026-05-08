#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_998DC02696846CC2___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13AF7F70)
#define CLASS_2_998DC02696846CC2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AF7F20)
#define CLASS_2_998DC02696846CC2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13AF7F60)

inline static constexpr unsigned int Class_2_998DC02696846CC2___c_TypeDefinitionIndex = 69575;

class Class_2_998DC02696846CC2___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__9_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_998DC02696846CC2___c_TypeDefinitionIndex)->GetStaticField(0x365C0);
	}
	static ::Class_2_998DC02696846CC2___c** StaticGet___9()
	{
		return (::Class_2_998DC02696846CC2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_998DC02696846CC2___c_TypeDefinitionIndex)->GetStaticField(0x365C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_998DC02696846CC2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_998DC02696846CC2___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_998DC02696846CC2___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
