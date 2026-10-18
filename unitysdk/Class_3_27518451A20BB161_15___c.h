#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_27518451A20BB161_15___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E15370)
#define CLASS_3_27518451A20BB161_15___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E153A0)
#define CLASS_3_27518451A20BB161_15___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x15E153B0)
#define CLASS_3_27518451A20BB161_15___C__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x15E154D0)

inline static constexpr unsigned int Class_3_27518451A20BB161_15___c_TypeDefinitionIndex = 52779;

class Class_3_27518451A20BB161_15___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__1_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_15___c_TypeDefinitionIndex)->GetStaticField(0x38550);
	}
	static ::Class_3_27518451A20BB161_15___c** StaticGet___9()
	{
		return (::Class_3_27518451A20BB161_15___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_15___c_TypeDefinitionIndex)->GetStaticField(0x38558);
	}
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_15___c_TypeDefinitionIndex)->GetStaticField(0x38560);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_15___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_15___C__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_15___C__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_15___C__ONTASKBEGIN_B__1_1_OFFSET))(this);
	}
};
