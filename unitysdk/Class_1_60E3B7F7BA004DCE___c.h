#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60E3B7F7BA004DCE;

#define CLASS_1_60E3B7F7BA004DCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8C0060)
#define CLASS_1_60E3B7F7BA004DCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C0090)
#define CLASS_1_60E3B7F7BA004DCE___C___CCTOR_B__103_0_OFFSET UNITYSDK_OFFSET(0x1D8C00A0)

inline static constexpr unsigned int Class_1_60E3B7F7BA004DCE___c_TypeDefinitionIndex = 25068;

class Class_1_60E3B7F7BA004DCE___c : public ::System::Object
{
public:
	static ::Class_1_60E3B7F7BA004DCE___c** StaticGet___9()
	{
		return (::Class_1_60E3B7F7BA004DCE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE___c_TypeDefinitionIndex)->GetStaticField(0x3ECA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE___C__CTOR_OFFSET))(this);
	}

	::Class_1_60E3B7F7BA004DCE* __cctor_b__103_0()
	{
		return ((::Class_1_60E3B7F7BA004DCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE___C___CCTOR_B__103_0_OFFSET))(this);
	}
};
