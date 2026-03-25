#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_75066476904C3229___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1172C3C0)
#define CLASS_2_75066476904C3229___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1172C3F0)
#define CLASS_2_75066476904C3229___C___QUERYGROUND_B__36_0_OFFSET UNITYSDK_OFFSET(0x1172C400)

inline static constexpr unsigned int Class_2_75066476904C3229___c_TypeDefinitionIndex = 62657;

class Class_2_75066476904C3229___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::UnityEngine::RaycastHit>** StaticGet___9__36_0()
	{
		return (::System::Comparison_1<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_75066476904C3229___c_TypeDefinitionIndex)->GetStaticField(0x41340);
	}
	static ::Class_2_75066476904C3229___c** StaticGet___9()
	{
		return (::Class_2_75066476904C3229___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_75066476904C3229___c_TypeDefinitionIndex)->GetStaticField(0x41348);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_75066476904C3229___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75066476904C3229___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __QueryGround_b__36_0(::UnityEngine::RaycastHit lhs, ::UnityEngine::RaycastHit rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_75066476904C3229___C___QUERYGROUND_B__36_0_OFFSET))(this, lhs, rhs);
	}
};
