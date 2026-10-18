#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A57EDD0666353753;

#define CLASS_1_A57EDD0666353753___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE70A30)
#define CLASS_1_A57EDD0666353753___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE70A60)
#define CLASS_1_A57EDD0666353753___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE70A70)

inline static constexpr unsigned int Class_1_A57EDD0666353753___c_TypeDefinitionIndex = 27842;

class Class_1_A57EDD0666353753___c : public ::System::Object
{
public:
	static ::Class_1_A57EDD0666353753___c** StaticGet___9()
	{
		return (::Class_1_A57EDD0666353753___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A57EDD0666353753___c_TypeDefinitionIndex)->GetStaticField(0x1CFA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753___C__CTOR_OFFSET))(this);
	}

	::Class_1_A57EDD0666353753* __cctor_b__33_0()
	{
		return ((::Class_1_A57EDD0666353753*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753___C___CCTOR_B__33_0_OFFSET))(this);
	}
};
