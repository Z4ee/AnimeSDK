#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_27518451A20BB161_7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x99ABD10)
#define CLASS_3_27518451A20BB161_7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x99ABD50)
#define CLASS_3_27518451A20BB161_7___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x99ABD60)

inline static constexpr unsigned int Class_3_27518451A20BB161_7___c_TypeDefinitionIndex = 48710;

class Class_3_27518451A20BB161_7___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_7___c_TypeDefinitionIndex)->GetStaticField(0x1D610);
	}
	static ::Class_3_27518451A20BB161_7___c** StaticGet___9()
	{
		return (::Class_3_27518451A20BB161_7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_7___c_TypeDefinitionIndex)->GetStaticField(0x1D618);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_7___C__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_7___C__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
