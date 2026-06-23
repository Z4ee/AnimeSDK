#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Equation/OrdinaryDifferential/SecondOrderConstant_ParticularSolutionType.h"
#include "unitysdk/Foundation/Equation/OrdinaryDifferential/SecondOrderHomogeneous.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERCONSTANT_GETPARTICULARSOLUTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E8229F0)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERCONSTANT_RESOLVE_OFFSET UNITYSDK_OFFSET(0xA7F440)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERCONSTANT__CTOR_OFFSET UNITYSDK_OFFSET(0xA7F430)

namespace Foundation::Equation::OrdinaryDifferential
{
	inline static constexpr unsigned int SecondOrderConstant_TypeDefinitionIndex = 8710;

	struct alignas(4) SecondOrderConstant
	{
		::Foundation::Equation::OrdinaryDifferential::SecondOrderConstant_ParticularSolutionType _particularSolutionType; // 0x10
		::System::Single _c; // 0x14
		::Foundation::Equation::OrdinaryDifferential::SecondOrderHomogeneous _homogeneous; // 0x18

		::System::Void _ctor(::System::Single a, ::System::Single b, ::System::Single c, ::System::Single x, ::System::Single dx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERCONSTANT__CTOR_OFFSET))(this, a, b, c, x, dx);
		}

		static ::Foundation::Equation::OrdinaryDifferential::SecondOrderConstant_ParticularSolutionType GetParticularSolutionType(::System::Single a, ::System::Single b)
		{
			return ((::Foundation::Equation::OrdinaryDifferential::SecondOrderConstant_ParticularSolutionType(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERCONSTANT_GETPARTICULARSOLUTIONTYPE_OFFSET))(a, b);
		}

		::System::Void Resolve(::System::Single t, ::System::Single& value, ::System::Single& derivative, ::System::Single& secondaryDerivative)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERCONSTANT_RESOLVE_OFFSET))(this, t, value, derivative, secondaryDerivative);
		}
	};
}
