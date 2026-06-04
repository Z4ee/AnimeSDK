#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D91471BD514F08CF;

#define CLASS_1_D91471BD514F08CF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A82F020)
#define CLASS_1_D91471BD514F08CF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A82F060)
#define CLASS_1_D91471BD514F08CF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1A82F070)

inline static constexpr unsigned int Class_1_D91471BD514F08CF___c_TypeDefinitionIndex = 28042;

class Class_1_D91471BD514F08CF___c : public ::System::Object
{
public:
	static ::Class_1_D91471BD514F08CF___c** StaticGet___9()
	{
		return (::Class_1_D91471BD514F08CF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D91471BD514F08CF___c_TypeDefinitionIndex)->GetStaticField(0x51530);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF___C__CTOR_OFFSET))(this);
	}

	::Class_1_D91471BD514F08CF* __cctor_b__23_0()
	{
		return ((::Class_1_D91471BD514F08CF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D91471BD514F08CF___C___CCTOR_B__23_0_OFFSET))(this);
	}
};
