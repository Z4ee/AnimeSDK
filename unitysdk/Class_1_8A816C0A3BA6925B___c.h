#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A816C0A3BA6925B;

#define CLASS_1_8A816C0A3BA6925B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1952B0D0)
#define CLASS_1_8A816C0A3BA6925B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1952B110)
#define CLASS_1_8A816C0A3BA6925B___C___CCTOR_B__64_0_OFFSET UNITYSDK_OFFSET(0x1952B120)

inline static constexpr unsigned int Class_1_8A816C0A3BA6925B___c_TypeDefinitionIndex = 23984;

class Class_1_8A816C0A3BA6925B___c : public ::System::Object
{
public:
	static ::Class_1_8A816C0A3BA6925B___c** StaticGet___9()
	{
		return (::Class_1_8A816C0A3BA6925B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A816C0A3BA6925B___c_TypeDefinitionIndex)->GetStaticField(0x46CB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A816C0A3BA6925B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A816C0A3BA6925B___C__CTOR_OFFSET))(this);
	}

	::Class_1_8A816C0A3BA6925B* __cctor_b__64_0()
	{
		return ((::Class_1_8A816C0A3BA6925B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A816C0A3BA6925B___C___CCTOR_B__64_0_OFFSET))(this);
	}
};
