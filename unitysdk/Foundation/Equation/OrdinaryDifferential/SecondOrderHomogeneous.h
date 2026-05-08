#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Equation/OrdinaryDifferential/SecondOrderHomogeneous_CharacteristicEquation.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_GET_A_OFFSET UNITYSDK_OFFSET(0x6E8AA0)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_GET_B_OFFSET UNITYSDK_OFFSET(0x7D0AF0)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVECHARACTEREQUATION_OFFSET UNITYSDK_OFFSET(0x1C1364D0)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVECONSTANTSSINGLEREALROOT_OFFSET UNITYSDK_OFFSET(0x1C1365C0)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVECONSTANTSTWOREALROOTS_OFFSET UNITYSDK_OFFSET(0x1C136570)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVECONSTANTSTWOVIRTUALROOTS_OFFSET UNITYSDK_OFFSET(0x1C1365E0)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVESINGLEREALROOT_OFFSET UNITYSDK_OFFSET(0x1C136860)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVETWOREALROOTS_OFFSET UNITYSDK_OFFSET(0x1C136780)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVETWOVIRTUALROOTS_OFFSET UNITYSDK_OFFSET(0x1C1368F0)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVE_OFFSET UNITYSDK_OFFSET(0x9C3940)
#define FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS__CTOR_OFFSET UNITYSDK_OFFSET(0x9C37C0)

namespace Foundation::Equation::OrdinaryDifferential
{
	inline static constexpr unsigned int SecondOrderHomogeneous_TypeDefinitionIndex = 9029;

	struct alignas(4) SecondOrderHomogeneous
	{
		::Foundation::Equation::OrdinaryDifferential::SecondOrderHomogeneous_CharacteristicEquation _type; // 0x10
		::System::Single _r; // 0x14
		::System::Single _w; // 0x18
		::System::Single _c1; // 0x1C
		::System::Single _c2; // 0x20
		::System::Single _a; // 0x24
		::System::Single _b; // 0x28

		::System::Void _ctor(::System::Single a, ::System::Single b, ::System::Single x, ::System::Single dx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS__CTOR_OFFSET))(this, a, b, x, dx);
		}

		::System::Single get_A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_GET_A_OFFSET))(this);
		}

		::System::Single get_B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_GET_B_OFFSET))(this);
		}

		static ::System::Void ResolveCharacterEquation(::System::Single a, ::System::Single b, ::System::Single& r, ::System::Single& w, ::Foundation::Equation::OrdinaryDifferential::SecondOrderHomogeneous_CharacteristicEquation& equation)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single&, ::Foundation::Equation::OrdinaryDifferential::SecondOrderHomogeneous_CharacteristicEquation&))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVECHARACTEREQUATION_OFFSET))(a, b, r, w, equation);
		}

		static ::System::Void ResolveConstantsTwoRealRoots(::System::Single x, ::System::Single dx, ::System::Single r, ::System::Single w, ::System::Single& c1, ::System::Single& c2)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVECONSTANTSTWOREALROOTS_OFFSET))(x, dx, r, w, c1, c2);
		}

		static ::System::Void ResolveConstantsSingleRealRoot(::System::Single x, ::System::Single dx, ::System::Single r, ::System::Single& c1, ::System::Single& c2)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVECONSTANTSSINGLEREALROOT_OFFSET))(x, dx, r, c1, c2);
		}

		static ::System::Void ResolveConstantsTwoVirtualRoots(::System::Single x, ::System::Single dx, ::System::Single r, ::System::Single w, ::System::Single& c1, ::System::Single& c2)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVECONSTANTSTWOVIRTUALROOTS_OFFSET))(x, dx, r, w, c1, c2);
		}

		static ::System::Void ResolveTwoRealRoots(::System::Single t, ::System::Single r, ::System::Single w, ::System::Single c1, ::System::Single c2, ::System::Single& value, ::System::Single& derivative)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVETWOREALROOTS_OFFSET))(t, r, w, c1, c2, value, derivative);
		}

		static ::System::Void ResolveSingleRealRoot(::System::Single t, ::System::Single r, ::System::Single c1, ::System::Single c2, ::System::Single& value, ::System::Single& derivative)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVESINGLEREALROOT_OFFSET))(t, r, c1, c2, value, derivative);
		}

		static ::System::Void ResolveTwoVirtualRoots(::System::Single t, ::System::Single r, ::System::Single w, ::System::Single c1, ::System::Single c2, ::System::Single& value, ::System::Single& derivative)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVETWOVIRTUALROOTS_OFFSET))(t, r, w, c1, c2, value, derivative);
		}

		::System::Void Resolve(::System::Single t, ::System::Single& value, ::System::Single& derivative, ::System::Single& secondaryDerivative)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_EQUATION_ORDINARYDIFFERENTIAL_SECONDORDERHOMOGENEOUS_RESOLVE_OFFSET))(this, t, value, derivative, secondaryDerivative);
		}
	};
}
