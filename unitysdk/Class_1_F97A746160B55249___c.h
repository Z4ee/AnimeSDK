#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F97A746160B55249;

#define CLASS_1_F97A746160B55249___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A19FC40)
#define CLASS_1_F97A746160B55249___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A19FC70)
#define CLASS_1_F97A746160B55249___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1A19FC80)

inline static constexpr unsigned int Class_1_F97A746160B55249___c_TypeDefinitionIndex = 31832;

class Class_1_F97A746160B55249___c : public ::System::Object
{
public:
	static ::Class_1_F97A746160B55249___c** StaticGet___9()
	{
		return (::Class_1_F97A746160B55249___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F97A746160B55249___c_TypeDefinitionIndex)->GetStaticField(0x32BC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F97A746160B55249___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F97A746160B55249___C__CTOR_OFFSET))(this);
	}

	::Class_1_F97A746160B55249* __cctor_b__73_0()
	{
		return ((::Class_1_F97A746160B55249*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F97A746160B55249___C___CCTOR_B__73_0_OFFSET))(this);
	}
};
