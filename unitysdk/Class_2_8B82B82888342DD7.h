#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_95D444975EC437CC.h"

class Class_1_E4CB20B056222958;
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CLASS_2_8B82B82888342DD7_METHOD_2_022FD5565B560642_OFFSET UNITYSDK_OFFSET(0x16A20710)
#define CLASS_2_8B82B82888342DD7__CTOR_OFFSET UNITYSDK_OFFSET(0x16A206E0)

inline static constexpr unsigned int Class_2_8B82B82888342DD7_TypeDefinitionIndex = 47315;

class Class_2_8B82B82888342DD7 : public ::Class_1_95D444975EC437CC<::Class_1_E4CB20B056222958*>
{
public:
	::System::Void _ctor(::UnityEngine::Events::UnityAction_2<::Class_1_E4CB20B056222958*, ::System::Boolean>* a1, ::UnityEngine::Events::UnityAction_1<::Class_1_E4CB20B056222958*>* a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_2<::Class_1_E4CB20B056222958*, ::System::Boolean>*, ::UnityEngine::Events::UnityAction_1<::Class_1_E4CB20B056222958*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B82B82888342DD7__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Double Method_2_022FD5565B560642()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B82B82888342DD7_METHOD_2_022FD5565B560642_OFFSET))(this);
	}
};
