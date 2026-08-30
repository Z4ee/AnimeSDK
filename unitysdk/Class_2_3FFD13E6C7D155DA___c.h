#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_3FFD13E6C7D155DA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170FFD10)
#define CLASS_2_3FFD13E6C7D155DA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x170FFD40)
#define CLASS_2_3FFD13E6C7D155DA___C___QUERYGROUND_B__39_0_OFFSET UNITYSDK_OFFSET(0x170FFD50)

inline static constexpr unsigned int Class_2_3FFD13E6C7D155DA___c_TypeDefinitionIndex = 76490;

class Class_2_3FFD13E6C7D155DA___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::UnityEngine::RaycastHit>** StaticGet___9__39_0()
	{
		return (::System::Comparison_1<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3FFD13E6C7D155DA___c_TypeDefinitionIndex)->GetStaticField(0x66CD0);
	}
	static ::Class_2_3FFD13E6C7D155DA___c** StaticGet___9()
	{
		return (::Class_2_3FFD13E6C7D155DA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3FFD13E6C7D155DA___c_TypeDefinitionIndex)->GetStaticField(0x66CD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3FFD13E6C7D155DA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFD13E6C7D155DA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __QueryGround_b__39_0(::UnityEngine::RaycastHit a1, ::UnityEngine::RaycastHit a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_3FFD13E6C7D155DA___C___QUERYGROUND_B__39_0_OFFSET))(this, a1, a2);
	}
};
