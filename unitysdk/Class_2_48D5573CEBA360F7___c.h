#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_48D5573CEBA360F7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB317BB0)
#define CLASS_2_48D5573CEBA360F7___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB317BE0)
#define CLASS_2_48D5573CEBA360F7___C___QUERYGROUND_B__6_0_OFFSET UNITYSDK_OFFSET(0xB317BF0)

inline static constexpr unsigned int Class_2_48D5573CEBA360F7___c_TypeDefinitionIndex = 77022;

class Class_2_48D5573CEBA360F7___c : public ::System::Object
{
public:
	static ::Class_2_48D5573CEBA360F7___c** StaticGet___9()
	{
		return (::Class_2_48D5573CEBA360F7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_48D5573CEBA360F7___c_TypeDefinitionIndex)->GetStaticField(0x331D0);
	}
	static ::System::Comparison_1<::UnityEngine::RaycastHit>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_48D5573CEBA360F7___c_TypeDefinitionIndex)->GetStaticField(0x331D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_48D5573CEBA360F7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48D5573CEBA360F7___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __QueryGround_b__6_0(::UnityEngine::RaycastHit a1, ::UnityEngine::RaycastHit a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_48D5573CEBA360F7___C___QUERYGROUND_B__6_0_OFFSET))(this, a1, a2);
	}
};
