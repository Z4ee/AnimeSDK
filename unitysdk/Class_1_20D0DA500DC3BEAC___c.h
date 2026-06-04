#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20D0DA500DC3BEAC;

#define CLASS_1_20D0DA500DC3BEAC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1D3CB0)
#define CLASS_1_20D0DA500DC3BEAC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1D3CE0)
#define CLASS_1_20D0DA500DC3BEAC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A1D3CF0)

inline static constexpr unsigned int Class_1_20D0DA500DC3BEAC___c_TypeDefinitionIndex = 27862;

class Class_1_20D0DA500DC3BEAC___c : public ::System::Object
{
public:
	static ::Class_1_20D0DA500DC3BEAC___c** StaticGet___9()
	{
		return (::Class_1_20D0DA500DC3BEAC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20D0DA500DC3BEAC___c_TypeDefinitionIndex)->GetStaticField(0x36500);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC___C__CTOR_OFFSET))(this);
	}

	::Class_1_20D0DA500DC3BEAC* __cctor_b__28_0()
	{
		return ((::Class_1_20D0DA500DC3BEAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D0DA500DC3BEAC___C___CCTOR_B__28_0_OFFSET))(this);
	}
};
