#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7AF1D57CA4301272;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_533B57E94BFD0E88___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA850F0)
#define CLASS_1_533B57E94BFD0E88___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEA85130)
#define CLASS_1_533B57E94BFD0E88___C___TRIGGERCHIMERADEATH_B__2_0_OFFSET UNITYSDK_OFFSET(0xEA85140)

inline static constexpr unsigned int Class_1_533B57E94BFD0E88___c_TypeDefinitionIndex = 61787;

class Class_1_533B57E94BFD0E88___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_7AF1D57CA4301272*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::Class_2_7AF1D57CA4301272*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_533B57E94BFD0E88___c_TypeDefinitionIndex)->GetStaticField(0x5350);
	}
	static ::Class_1_533B57E94BFD0E88___c** StaticGet___9()
	{
		return (::Class_1_533B57E94BFD0E88___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_533B57E94BFD0E88___c_TypeDefinitionIndex)->GetStaticField(0x5358);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_533B57E94BFD0E88___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533B57E94BFD0E88___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __TriggerChimeraDeath_b__2_0(::Class_2_7AF1D57CA4301272* a, ::Class_2_7AF1D57CA4301272* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_7AF1D57CA4301272*, ::Class_2_7AF1D57CA4301272*))((::PBYTE)hIl2Cpp + CLASS_1_533B57E94BFD0E88___C___TRIGGERCHIMERADEATH_B__2_0_OFFSET))(this, a, b);
	}
};
