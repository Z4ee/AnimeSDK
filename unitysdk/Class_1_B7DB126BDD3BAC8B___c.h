#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_B7DB126BDD3BAC8B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CAC560)
#define CLASS_1_B7DB126BDD3BAC8B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12CAC5A0)
#define CLASS_1_B7DB126BDD3BAC8B___C___COLLECTRENDERERS_B__8_0_OFFSET UNITYSDK_OFFSET(0x12CAC5B0)

inline static constexpr unsigned int Class_1_B7DB126BDD3BAC8B___c_TypeDefinitionIndex = 60202;

class Class_1_B7DB126BDD3BAC8B___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::UnityEngine::Renderer*>** StaticGet___9__8_0()
	{
		return (::System::Predicate_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7DB126BDD3BAC8B___c_TypeDefinitionIndex)->GetStaticField(0x55EC0);
	}
	static ::Class_1_B7DB126BDD3BAC8B___c** StaticGet___9()
	{
		return (::Class_1_B7DB126BDD3BAC8B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7DB126BDD3BAC8B___c_TypeDefinitionIndex)->GetStaticField(0x55EC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7DB126BDD3BAC8B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7DB126BDD3BAC8B___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __CollectRenderers_b__8_0(::UnityEngine::Renderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_B7DB126BDD3BAC8B___C___COLLECTRENDERERS_B__8_0_OFFSET))(this, a1);
	}
};
