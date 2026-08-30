#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C01BA129C3E40259;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_533B57E94BFD0E88___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AC0CA0)
#define CLASS_1_533B57E94BFD0E88___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC0CE0)
#define CLASS_1_533B57E94BFD0E88___C___TRIGGERCHIMERADEATH_B__2_0_OFFSET UNITYSDK_OFFSET(0x15AC0CF0)

inline static constexpr unsigned int Class_1_533B57E94BFD0E88___c_TypeDefinitionIndex = 75340;

class Class_1_533B57E94BFD0E88___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_C01BA129C3E40259*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::Class_2_C01BA129C3E40259*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_533B57E94BFD0E88___c_TypeDefinitionIndex)->GetStaticField(0x603C0);
	}
	static ::Class_1_533B57E94BFD0E88___c** StaticGet___9()
	{
		return (::Class_1_533B57E94BFD0E88___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_533B57E94BFD0E88___c_TypeDefinitionIndex)->GetStaticField(0x603C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_533B57E94BFD0E88___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533B57E94BFD0E88___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __TriggerChimeraDeath_b__2_0(::Class_2_C01BA129C3E40259* a1, ::Class_2_C01BA129C3E40259* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_C01BA129C3E40259*, ::Class_2_C01BA129C3E40259*))((::PBYTE)hIl2Cpp + CLASS_1_533B57E94BFD0E88___C___TRIGGERCHIMERADEATH_B__2_0_OFFSET))(this, a1, a2);
	}
};
