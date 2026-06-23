#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define DEST_MATH_INTEGRATOR_GAUSSIANQUADRATURE_OFFSET UNITYSDK_OFFSET(0x1DEC7260)
#define DEST_MATH_INTEGRATOR_ROMBERGINTEGRAL_OFFSET UNITYSDK_OFFSET(0x1DEC6E30)
#define DEST_MATH_INTEGRATOR_TRAPEZOIDRULE_OFFSET UNITYSDK_OFFSET(0x1DEC6CF0)
#define DEST_MATH_INTEGRATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC7720)

namespace Dest::Math
{
	inline static constexpr unsigned int Integrator_TypeDefinitionIndex = 34753;

	class Integrator : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet_root()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Integrator_TypeDefinitionIndex)->GetStaticField(0x27BA0);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_coeff()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Integrator_TypeDefinitionIndex)->GetStaticField(0x27BA8);
		}
		// static const ::System::Int32 _degree = 0x5; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_INTEGRATOR__CCTOR_OFFSET))();
		}

		static ::System::Single TrapezoidRule(::System::Func_2<::System::Single, ::System::Single>* function, ::System::Single a, ::System::Single b, ::System::Int32 sampleCount)
		{
			return ((::System::Single(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_INTEGRATOR_TRAPEZOIDRULE_OFFSET))(function, a, b, sampleCount);
		}

		static ::System::Single RombergIntegral(::System::Func_2<::System::Single, ::System::Single>* function, ::System::Single a, ::System::Single b, ::System::Int32 order)
		{
			return ((::System::Single(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_INTEGRATOR_ROMBERGINTEGRAL_OFFSET))(function, a, b, order);
		}

		static ::System::Single GaussianQuadrature(::System::Func_2<::System::Single, ::System::Single>* function, ::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_INTEGRATOR_GAUSSIANQUADRATURE_OFFSET))(function, a, b);
		}
	};
}
