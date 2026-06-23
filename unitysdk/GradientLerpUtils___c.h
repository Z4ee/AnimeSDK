#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GRADIENTLERPUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7E6110)
#define GRADIENTLERPUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E6150)
#define GRADIENTLERPUTILS___C___CCTOR_B__13_0_OFFSET UNITYSDK_OFFSET(0x1B7E6160)

inline static constexpr unsigned int GradientLerpUtils___c_TypeDefinitionIndex = 26751;

class GradientLerpUtils___c : public ::System::Object
{
public:
	static ::GradientLerpUtils___c** StaticGet___9()
	{
		return (::GradientLerpUtils___c**)Il2CppClass::FromTypeDefinitionIndex(GradientLerpUtils___c_TypeDefinitionIndex)->GetStaticField(0x220A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GRADIENTLERPUTILS___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRADIENTLERPUTILS___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__13_0(::System::Single a, ::System::Single b)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GRADIENTLERPUTILS___C___CCTOR_B__13_0_OFFSET))(this, a, b);
	}
};
