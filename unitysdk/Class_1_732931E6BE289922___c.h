#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_732931E6BE289922___C__ASOBSERVABLE_B__0_0_OFFSET UNITYSDK_OFFSET(0xCF20B40)
#define CLASS_1_732931E6BE289922___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF20AF0)
#define CLASS_1_732931E6BE289922___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCF20B30)

inline static constexpr unsigned int Class_1_732931E6BE289922___c_TypeDefinitionIndex = 49984;

class Class_1_732931E6BE289922___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Action*, ::UnityEngine::Events::UnityAction*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::Action*, ::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_732931E6BE289922___c_TypeDefinitionIndex)->GetStaticField(0x4AEC0);
	}
	static ::Class_1_732931E6BE289922___c** StaticGet___9()
	{
		return (::Class_1_732931E6BE289922___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_732931E6BE289922___c_TypeDefinitionIndex)->GetStaticField(0x4AEC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_732931E6BE289922___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_732931E6BE289922___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Events::UnityAction* _AsObservable_b__0_0(::System::Action* a1)
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_732931E6BE289922___C__ASOBSERVABLE_B__0_0_OFFSET))(this, a1);
	}
};
