#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4ED867741030363A;

#define CLASS_1_4ED867741030363A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB3E4B0)
#define CLASS_1_4ED867741030363A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3E4F0)
#define CLASS_1_4ED867741030363A___C___CCTOR_B__108_0_OFFSET UNITYSDK_OFFSET(0x1EB3E500)

inline static constexpr unsigned int Class_1_4ED867741030363A___c_TypeDefinitionIndex = 29052;

class Class_1_4ED867741030363A___c : public ::System::Object
{
public:
	static ::Class_1_4ED867741030363A___c** StaticGet___9()
	{
		return (::Class_1_4ED867741030363A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4ED867741030363A___c_TypeDefinitionIndex)->GetStaticField(0x57CA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4ED867741030363A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED867741030363A___C__CTOR_OFFSET))(this);
	}

	::Class_1_4ED867741030363A* __cctor_b__108_0()
	{
		return ((::Class_1_4ED867741030363A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ED867741030363A___C___CCTOR_B__108_0_OFFSET))(this);
	}
};
