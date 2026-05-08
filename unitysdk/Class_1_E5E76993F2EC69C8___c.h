#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_E5E76993F2EC69C8___C_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x111AEFA0)
#define CLASS_1_E5E76993F2EC69C8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x111AEF50)
#define CLASS_1_E5E76993F2EC69C8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x111AEF90)

inline static constexpr unsigned int Class_1_E5E76993F2EC69C8___c_TypeDefinitionIndex = 81421;

class Class_1_E5E76993F2EC69C8___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__7_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5E76993F2EC69C8___c_TypeDefinitionIndex)->GetStaticField(0x3FBF0);
	}
	static ::Class_1_E5E76993F2EC69C8___c** StaticGet___9()
	{
		return (::Class_1_E5E76993F2EC69C8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5E76993F2EC69C8___c_TypeDefinitionIndex)->GetStaticField(0x3FBF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5E76993F2EC69C8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5E76993F2EC69C8___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5E76993F2EC69C8___C_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}
};
