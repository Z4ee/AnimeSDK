#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Equation/OrdinaryDifferential/SecondOrderConstantCritical_ParticularSolutionType.h"
#include "unitysdk/Foundation/Equation/OrdinaryDifferential/SecondOrderHomogeneousCritical.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERCONSTANTCRITICAL_GETPARTICULARSOLUTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1DC993F0)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERCONSTANTCRITICAL_RESOLVE_OFFSET UNITYSDK_OFFSET(0xA3AC60)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERCONSTANTCRITICAL__CTOR_OFFSET UNITYSDK_OFFSET(0xA3AB80)

namespace Foundation::Equation::OrdinaryDifferential
{
	inline static constexpr unsigned int SecondOrderConstantCritical_TypeDefinitionIndex = 8476;

	struct alignas(4) SecondOrderConstantCritical
	{
		::Foundation::Equation::OrdinaryDifferential::SecondOrderConstantCritical_ParticularSolutionType _particularSolutionType; // 0x10
		::System::Single _b; // 0x14
		::Foundation::Equation::OrdinaryDifferential::SecondOrderHomogeneousCritical _homogeneous; // 0x18

		::System::Void _ctor(::System::Single a, ::System::Single b, ::System::Single x, ::System::Single dx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERCONSTANTCRITICAL__CTOR_OFFSET))(this, a, b, x, dx);
		}

		static ::Foundation::Equation::OrdinaryDifferential::SecondOrderConstantCritical_ParticularSolutionType GetParticularSolutionType(::System::Single a)
		{
			return ((::Foundation::Equation::OrdinaryDifferential::SecondOrderConstantCritical_ParticularSolutionType(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERCONSTANTCRITICAL_GETPARTICULARSOLUTIONTYPE_OFFSET))(a);
		}

		::System::Void Resolve(::System::Single t, ::System::Single& value, ::System::Single& derivative, ::System::Single& secondaryDerivative)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERCONSTANTCRITICAL_RESOLVE_OFFSET))(this, t, value, derivative, secondaryDerivative);
		}
	};
}
