#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_3FFD13E6C7D155DA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CE0EF0)
#define CLASS_2_3FFD13E6C7D155DA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE0F20)
#define CLASS_2_3FFD13E6C7D155DA___C___QUERYGROUND_B__38_0_OFFSET UNITYSDK_OFFSET(0x16CE0F30)

inline static constexpr unsigned int Class_2_3FFD13E6C7D155DA___c_TypeDefinitionIndex = 73016;

class Class_2_3FFD13E6C7D155DA___c : public ::System::Object
{
public:
	static ::Class_2_3FFD13E6C7D155DA___c** StaticGet___9()
	{
		return (::Class_2_3FFD13E6C7D155DA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3FFD13E6C7D155DA___c_TypeDefinitionIndex)->GetStaticField(0x6B340);
	}
	static ::System::Comparison_1<::UnityEngine::RaycastHit>** StaticGet___9__38_0()
	{
		return (::System::Comparison_1<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3FFD13E6C7D155DA___c_TypeDefinitionIndex)->GetStaticField(0x6B348);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3FFD13E6C7D155DA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFD13E6C7D155DA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __QueryGround_b__38_0(::UnityEngine::RaycastHit a1, ::UnityEngine::RaycastHit a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_3FFD13E6C7D155DA___C___QUERYGROUND_B__38_0_OFFSET))(this, a1, a2);
	}
};
