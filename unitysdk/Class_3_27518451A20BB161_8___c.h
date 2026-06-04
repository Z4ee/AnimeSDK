#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_27518451A20BB161_8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C93BD0)
#define CLASS_3_27518451A20BB161_8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C93C10)
#define CLASS_3_27518451A20BB161_8___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x13C93C20)

inline static constexpr unsigned int Class_3_27518451A20BB161_8___c_TypeDefinitionIndex = 49375;

class Class_3_27518451A20BB161_8___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__1_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_8___c_TypeDefinitionIndex)->GetStaticField(0x66590);
	}
	static ::Class_3_27518451A20BB161_8___c** StaticGet___9()
	{
		return (::Class_3_27518451A20BB161_8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161_8___c_TypeDefinitionIndex)->GetStaticField(0x66598);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_8___C__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_8___C__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
