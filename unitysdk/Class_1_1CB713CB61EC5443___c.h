#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CB713CB61EC5443;

#define CLASS_1_1CB713CB61EC5443___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4A440)
#define CLASS_1_1CB713CB61EC5443___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4A480)
#define CLASS_1_1CB713CB61EC5443___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DF4A490)

inline static constexpr unsigned int Class_1_1CB713CB61EC5443___c_TypeDefinitionIndex = 27111;

class Class_1_1CB713CB61EC5443___c : public ::System::Object
{
public:
	static ::Class_1_1CB713CB61EC5443___c** StaticGet___9()
	{
		return (::Class_1_1CB713CB61EC5443___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CB713CB61EC5443___c_TypeDefinitionIndex)->GetStaticField(0x48E80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443___C__CTOR_OFFSET))(this);
	}

	::Class_1_1CB713CB61EC5443* __cctor_b__43_0()
	{
		return ((::Class_1_1CB713CB61EC5443*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
