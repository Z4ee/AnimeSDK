#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUSCRITICAL_GET_A_OFFSET UNITYSDK_OFFSET(0xA7F750)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUSCRITICAL_RESOLVE_OFFSET UNITYSDK_OFFSET(0xA7F780)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUSCRITICAL__CTOR_OFFSET UNITYSDK_OFFSET(0xA7F760)

namespace Foundation::Equation::OrdinaryDifferential
{
	inline static constexpr unsigned int SecondOrderHomogeneousCritical_TypeDefinitionIndex = 8780;

	struct alignas(4) SecondOrderHomogeneousCritical
	{
		::System::Single _r; // 0x10
		::System::Single _c1; // 0x14
		::System::Single _c2; // 0x18

		::System::Void _ctor(::System::Single a, ::System::Single x, ::System::Single dx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUSCRITICAL__CTOR_OFFSET))(this, a, x, dx);
		}

		::System::Single get_A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUSCRITICAL_GET_A_OFFSET))(this);
		}

		::System::Void Resolve(::System::Single t, ::System::Single& value, ::System::Single& derivative, ::System::Single& secondaryDerivative)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUSCRITICAL_RESOLVE_OFFSET))(this, t, value, derivative, secondaryDerivative);
		}
	};
}
