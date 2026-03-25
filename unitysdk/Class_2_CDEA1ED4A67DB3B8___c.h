#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_CDEA1ED4A67DB3B8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA441E10)
#define CLASS_2_CDEA1ED4A67DB3B8___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA441E50)
#define CLASS_2_CDEA1ED4A67DB3B8___C___QUERYGROUND_B__6_0_OFFSET UNITYSDK_OFFSET(0xA441E60)

inline static constexpr unsigned int Class_2_CDEA1ED4A67DB3B8___c_TypeDefinitionIndex = 62713;

class Class_2_CDEA1ED4A67DB3B8___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::UnityEngine::RaycastHit>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CDEA1ED4A67DB3B8___c_TypeDefinitionIndex)->GetStaticField(0x48370);
	}
	static ::Class_2_CDEA1ED4A67DB3B8___c** StaticGet___9()
	{
		return (::Class_2_CDEA1ED4A67DB3B8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CDEA1ED4A67DB3B8___c_TypeDefinitionIndex)->GetStaticField(0x48378);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CDEA1ED4A67DB3B8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDEA1ED4A67DB3B8___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __QueryGround_b__6_0(::UnityEngine::RaycastHit lhs, ::UnityEngine::RaycastHit rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_CDEA1ED4A67DB3B8___C___QUERYGROUND_B__6_0_OFFSET))(this, lhs, rhs);
	}
};
