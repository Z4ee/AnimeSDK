#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4E17DBE66E488E00;

#define CLASS_1_4E17DBE66E488E00___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0C60)
#define CLASS_1_4E17DBE66E488E00___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0CA0)
#define CLASS_1_4E17DBE66E488E00___C___CCTOR_B__65_0_OFFSET UNITYSDK_OFFSET(0x1E2A0CB0)

inline static constexpr unsigned int Class_1_4E17DBE66E488E00___c_TypeDefinitionIndex = 30468;

class Class_1_4E17DBE66E488E00___c : public ::System::Object
{
public:
	static ::Class_1_4E17DBE66E488E00___c** StaticGet___9()
	{
		return (::Class_1_4E17DBE66E488E00___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4E17DBE66E488E00___c_TypeDefinitionIndex)->GetStaticField(0x55BB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4E17DBE66E488E00___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E17DBE66E488E00___C__CTOR_OFFSET))(this);
	}

	::Class_1_4E17DBE66E488E00* __cctor_b__65_0()
	{
		return ((::Class_1_4E17DBE66E488E00*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E17DBE66E488E00___C___CCTOR_B__65_0_OFFSET))(this);
	}
};
