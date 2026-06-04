#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EasingFunction_Ease.h"
#include "unitysdk/System/Object.h"

class EasingFunction_Function;
class EasingFunction_FunctionValue;

#define EASINGFUNCTION_EASEINBACKD_OFFSET UNITYSDK_OFFSET(0xA0A8F60)
#define EASINGFUNCTION_EASEINBACK_1_OFFSET UNITYSDK_OFFSET(0xA0A8340)
#define EASINGFUNCTION_EASEINBACK_OFFSET UNITYSDK_OFFSET(0xA0A8310)
#define EASINGFUNCTION_EASEINBOUNCED_OFFSET UNITYSDK_OFFSET(0xA0A8CF0)
#define EASINGFUNCTION_EASEINBOUNCE_1_OFFSET UNITYSDK_OFFSET(0xA0A7DD0)
#define EASINGFUNCTION_EASEINBOUNCE_OFFSET UNITYSDK_OFFSET(0xA0A7C40)
#define EASINGFUNCTION_EASEINCIRCD_OFFSET UNITYSDK_OFFSET(0xA0A8B70)
#define EASINGFUNCTION_EASEINCIRC_1_OFFSET UNITYSDK_OFFSET(0xA0A7A40)
#define EASINGFUNCTION_EASEINCIRC_OFFSET UNITYSDK_OFFSET(0xA0A79E0)
#define EASINGFUNCTION_EASEINCUBICD_OFFSET UNITYSDK_OFFSET(0xA0A87E0)
#define EASINGFUNCTION_EASEINCUBIC_1_OFFSET UNITYSDK_OFFSET(0xA0A72D0)
#define EASINGFUNCTION_EASEINCUBIC_OFFSET UNITYSDK_OFFSET(0xA0A72B0)
#define EASINGFUNCTION_EASEINELASTICD_OFFSET UNITYSDK_OFFSET(0xA0A9060)
#define EASINGFUNCTION_EASEINELASTIC_OFFSET UNITYSDK_OFFSET(0xA0A84C0)
#define EASINGFUNCTION_EASEINEXPOD_OFFSET UNITYSDK_OFFSET(0xA0A8A70)
#define EASINGFUNCTION_EASEINEXPO_1_OFFSET UNITYSDK_OFFSET(0xA0A7850)
#define EASINGFUNCTION_EASEINEXPO_OFFSET UNITYSDK_OFFSET(0xA0A7800)
#define EASINGFUNCTION_EASEINOUTBACKD_OFFSET UNITYSDK_OFFSET(0xA0A8FD0)
#define EASINGFUNCTION_EASEINOUTBACK_1_OFFSET UNITYSDK_OFFSET(0xA0A8450)
#define EASINGFUNCTION_EASEINOUTBACK_OFFSET UNITYSDK_OFFSET(0xA0A83D0)
#define EASINGFUNCTION_EASEINOUTBOUNCED_OFFSET UNITYSDK_OFFSET(0xA0A8E10)
#define EASINGFUNCTION_EASEINOUTBOUNCE_1_OFFSET UNITYSDK_OFFSET(0xA0A8120)
#define EASINGFUNCTION_EASEINOUTBOUNCE_OFFSET UNITYSDK_OFFSET(0xA0A7F50)
#define EASINGFUNCTION_EASEINOUTCIRCD_OFFSET UNITYSDK_OFFSET(0xA0A8C50)
#define EASINGFUNCTION_EASEINOUTCIRC_1_OFFSET UNITYSDK_OFFSET(0xA0A7BC0)
#define EASINGFUNCTION_EASEINOUTCIRC_OFFSET UNITYSDK_OFFSET(0xA0A7B10)
#define EASINGFUNCTION_EASEINOUTCUBICD_OFFSET UNITYSDK_OFFSET(0xA0A8820)
#define EASINGFUNCTION_EASEINOUTCUBIC_1_OFFSET UNITYSDK_OFFSET(0xA0A7390)
#define EASINGFUNCTION_EASEINOUTCUBIC_OFFSET UNITYSDK_OFFSET(0xA0A7330)
#define EASINGFUNCTION_EASEINOUTELASTICD_OFFSET UNITYSDK_OFFSET(0xA0A9250)
#define EASINGFUNCTION_EASEINOUTELASTIC_OFFSET UNITYSDK_OFFSET(0xA0A8620)
#define EASINGFUNCTION_EASEINOUTEXPOD_OFFSET UNITYSDK_OFFSET(0xA0A8B00)
#define EASINGFUNCTION_EASEINOUTEXPO_1_OFFSET UNITYSDK_OFFSET(0xA0A7980)
#define EASINGFUNCTION_EASEINOUTEXPO_OFFSET UNITYSDK_OFFSET(0xA0A78F0)
#define EASINGFUNCTION_EASEINOUTQUADD_OFFSET UNITYSDK_OFFSET(0xA0A87A0)
#define EASINGFUNCTION_EASEINOUTQUAD_1_OFFSET UNITYSDK_OFFSET(0xA0A7250)
#define EASINGFUNCTION_EASEINOUTQUAD_OFFSET UNITYSDK_OFFSET(0xA0A71E0)
#define EASINGFUNCTION_EASEINOUTQUARTD_OFFSET UNITYSDK_OFFSET(0xA0A88B0)
#define EASINGFUNCTION_EASEINOUTQUART_1_OFFSET UNITYSDK_OFFSET(0xA0A74E0)
#define EASINGFUNCTION_EASEINOUTQUART_OFFSET UNITYSDK_OFFSET(0xA0A7470)
#define EASINGFUNCTION_EASEINOUTQUINTD_OFFSET UNITYSDK_OFFSET(0xA0A8940)
#define EASINGFUNCTION_EASEINOUTQUINT_1_OFFSET UNITYSDK_OFFSET(0xA0A7650)
#define EASINGFUNCTION_EASEINOUTQUINT_OFFSET UNITYSDK_OFFSET(0xA0A75E0)
#define EASINGFUNCTION_EASEINOUTSINED_OFFSET UNITYSDK_OFFSET(0xA0A8A20)
#define EASINGFUNCTION_EASEINOUTSINE_1_OFFSET UNITYSDK_OFFSET(0xA0A77D0)
#define EASINGFUNCTION_EASEINOUTSINE_OFFSET UNITYSDK_OFFSET(0xA0A7780)
#define EASINGFUNCTION_EASEINQUADD_OFFSET UNITYSDK_OFFSET(0xA0A8760)
#define EASINGFUNCTION_EASEINQUAD_1_OFFSET UNITYSDK_OFFSET(0xA0A7190)
#define EASINGFUNCTION_EASEINQUAD_OFFSET UNITYSDK_OFFSET(0xA0A7170)
#define EASINGFUNCTION_EASEINQUARTD_OFFSET UNITYSDK_OFFSET(0xA0A8860)
#define EASINGFUNCTION_EASEINQUART_1_OFFSET UNITYSDK_OFFSET(0xA0A7400)
#define EASINGFUNCTION_EASEINQUART_OFFSET UNITYSDK_OFFSET(0xA0A73E0)
#define EASINGFUNCTION_EASEINQUINTD_OFFSET UNITYSDK_OFFSET(0xA0A88F0)
#define EASINGFUNCTION_EASEINQUINT_1_OFFSET UNITYSDK_OFFSET(0xA0A7560)
#define EASINGFUNCTION_EASEINQUINT_OFFSET UNITYSDK_OFFSET(0xA0A7540)
#define EASINGFUNCTION_EASEINSINED_OFFSET UNITYSDK_OFFSET(0xA0A8990)
#define EASINGFUNCTION_EASEINSINE_1_OFFSET UNITYSDK_OFFSET(0xA0A7700)
#define EASINGFUNCTION_EASEINSINE_OFFSET UNITYSDK_OFFSET(0xA0A76B0)
#define EASINGFUNCTION_EASEOUTBACKD_OFFSET UNITYSDK_OFFSET(0xA0A8F90)
#define EASINGFUNCTION_EASEOUTBACK_1_OFFSET UNITYSDK_OFFSET(0xA0A83A0)
#define EASINGFUNCTION_EASEOUTBACK_OFFSET UNITYSDK_OFFSET(0xA0A8360)
#define EASINGFUNCTION_EASEOUTBOUNCED_OFFSET UNITYSDK_OFFSET(0xA0A8D80)
#define EASINGFUNCTION_EASEOUTBOUNCE_1_OFFSET UNITYSDK_OFFSET(0xA0A7EA0)
#define EASINGFUNCTION_EASEOUTBOUNCE_OFFSET UNITYSDK_OFFSET(0xA0A7D10)
#define EASINGFUNCTION_EASEOUTCIRCD_OFFSET UNITYSDK_OFFSET(0xA0A8BE0)
#define EASINGFUNCTION_EASEOUTCIRC_1_OFFSET UNITYSDK_OFFSET(0xA0A7AE0)
#define EASINGFUNCTION_EASEOUTCIRC_OFFSET UNITYSDK_OFFSET(0xA0A7A80)
#define EASINGFUNCTION_EASEOUTCUBICD_OFFSET UNITYSDK_OFFSET(0xA0A8800)
#define EASINGFUNCTION_EASEOUTCUBIC_1_OFFSET UNITYSDK_OFFSET(0xA0A7310)
#define EASINGFUNCTION_EASEOUTCUBIC_OFFSET UNITYSDK_OFFSET(0xA0A72E0)
#define EASINGFUNCTION_EASEOUTELASTICD_OFFSET UNITYSDK_OFFSET(0xA0A9160)
#define EASINGFUNCTION_EASEOUTELASTIC_OFFSET UNITYSDK_OFFSET(0xA0A8570)
#define EASINGFUNCTION_EASEOUTEXPOD_OFFSET UNITYSDK_OFFSET(0xA0A8AC0)
#define EASINGFUNCTION_EASEOUTEXPO_1_OFFSET UNITYSDK_OFFSET(0xA0A78C0)
#define EASINGFUNCTION_EASEOUTEXPO_OFFSET UNITYSDK_OFFSET(0xA0A7870)
#define EASINGFUNCTION_EASEOUTQUADD_OFFSET UNITYSDK_OFFSET(0xA0A8770)
#define EASINGFUNCTION_EASEOUTQUAD_1_OFFSET UNITYSDK_OFFSET(0xA0A71C0)
#define EASINGFUNCTION_EASEOUTQUAD_OFFSET UNITYSDK_OFFSET(0xA0A71A0)
#define EASINGFUNCTION_EASEOUTQUARTD_OFFSET UNITYSDK_OFFSET(0xA0A8880)
#define EASINGFUNCTION_EASEOUTQUART_1_OFFSET UNITYSDK_OFFSET(0xA0A7440)
#define EASINGFUNCTION_EASEOUTQUART_OFFSET UNITYSDK_OFFSET(0xA0A7410)
#define EASINGFUNCTION_EASEOUTQUINTD_OFFSET UNITYSDK_OFFSET(0xA0A8910)
#define EASINGFUNCTION_EASEOUTQUINT_1_OFFSET UNITYSDK_OFFSET(0xA0A75B0)
#define EASINGFUNCTION_EASEOUTQUINT_OFFSET UNITYSDK_OFFSET(0xA0A7580)
#define EASINGFUNCTION_EASEOUTSINED_OFFSET UNITYSDK_OFFSET(0xA0A89E0)
#define EASINGFUNCTION_EASEOUTSINE_1_OFFSET UNITYSDK_OFFSET(0xA0A7770)
#define EASINGFUNCTION_EASEOUTSINE_OFFSET UNITYSDK_OFFSET(0xA0A7730)
#define EASINGFUNCTION_GETEASINGFUNCTIONDERIVATIVE_OFFSET UNITYSDK_OFFSET(0xA0AA180)
#define EASINGFUNCTION_GETEASINGFUNCTIONVALUE_OFFSET UNITYSDK_OFFSET(0xA0A9C20)
#define EASINGFUNCTION_GETEASINGFUNCTION_OFFSET UNITYSDK_OFFSET(0xA0A9610)
#define EASINGFUNCTION_LINEARD_OFFSET UNITYSDK_OFFSET(0xA0A8750)
#define EASINGFUNCTION_LINEAR_1_OFFSET UNITYSDK_OFFSET(0xA0A6FB0)
#define EASINGFUNCTION_LINEAR_OFFSET UNITYSDK_OFFSET(0xA0A6F80)
#define EASINGFUNCTION_SPRINGD_OFFSET UNITYSDK_OFFSET(0xA0A9410)
#define EASINGFUNCTION_SPRING_1_OFFSET UNITYSDK_OFFSET(0xA0A70B0)
#define EASINGFUNCTION_SPRING_OFFSET UNITYSDK_OFFSET(0xA0A6FC0)

inline static constexpr unsigned int EasingFunction_TypeDefinitionIndex = 41747;

class EasingFunction : public ::System::Object
{
public:
	// static const ::System::Single NATURAL_LOG_OF_2; // 0x0

	static ::System::Single Linear(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_LINEAR_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Linear_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_LINEAR_1_OFFSET))(a1);
	}

	static ::System::Single Spring(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_SPRING_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Spring_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_SPRING_1_OFFSET))(a1);
	}

	static ::System::Single EaseInQuad(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUAD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInQuad_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUAD_1_OFFSET))(a1);
	}

	static ::System::Single EaseOutQuad(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUAD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutQuad_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUAD_1_OFFSET))(a1);
	}

	static ::System::Single EaseInOutQuad(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUAD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutQuad_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUAD_1_OFFSET))(a1);
	}

	static ::System::Single EaseInCubic(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCUBIC_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInCubic_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCUBIC_1_OFFSET))(a1);
	}

	static ::System::Single EaseOutCubic(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCUBIC_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutCubic_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCUBIC_1_OFFSET))(a1);
	}

	static ::System::Single EaseInOutCubic(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCUBIC_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutCubic_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCUBIC_1_OFFSET))(a1);
	}

	static ::System::Single EaseInQuart(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUART_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInQuart_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUART_1_OFFSET))(a1);
	}

	static ::System::Single EaseOutQuart(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUART_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutQuart_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUART_1_OFFSET))(a1);
	}

	static ::System::Single EaseInOutQuart(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUART_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutQuart_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUART_1_OFFSET))(a1);
	}

	static ::System::Single EaseInQuint(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUINT_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInQuint_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUINT_1_OFFSET))(a1);
	}

	static ::System::Single EaseOutQuint(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUINT_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutQuint_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUINT_1_OFFSET))(a1);
	}

	static ::System::Single EaseInOutQuint(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUINT_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutQuint_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUINT_1_OFFSET))(a1);
	}

	static ::System::Single EaseInSine(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINSINE_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInSine_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINSINE_1_OFFSET))(a1);
	}

	static ::System::Single EaseOutSine(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTSINE_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutSine_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTSINE_1_OFFSET))(a1);
	}

	static ::System::Single EaseInOutSine(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTSINE_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutSine_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTSINE_1_OFFSET))(a1);
	}

	static ::System::Single EaseInExpo(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINEXPO_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInExpo_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINEXPO_1_OFFSET))(a1);
	}

	static ::System::Single EaseOutExpo(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTEXPO_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutExpo_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTEXPO_1_OFFSET))(a1);
	}

	static ::System::Single EaseInOutExpo(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTEXPO_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutExpo_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTEXPO_1_OFFSET))(a1);
	}

	static ::System::Single EaseInCirc(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCIRC_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInCirc_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCIRC_1_OFFSET))(a1);
	}

	static ::System::Single EaseOutCirc(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCIRC_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutCirc_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCIRC_1_OFFSET))(a1);
	}

	static ::System::Single EaseInOutCirc(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCIRC_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutCirc_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCIRC_1_OFFSET))(a1);
	}

	static ::System::Single EaseInBounce(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBOUNCE_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInBounce_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBOUNCE_1_OFFSET))(a1);
	}

	static ::System::Single EaseOutBounce(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBOUNCE_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutBounce_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBOUNCE_1_OFFSET))(a1);
	}

	static ::System::Single EaseInOutBounce(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBOUNCE_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutBounce_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBOUNCE_1_OFFSET))(a1);
	}

	static ::System::Single EaseInBack(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBACK_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInBack_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBACK_1_OFFSET))(a1);
	}

	static ::System::Single EaseOutBack(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBACK_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutBack_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBACK_1_OFFSET))(a1);
	}

	static ::System::Single EaseInOutBack(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBACK_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutBack_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBACK_1_OFFSET))(a1);
	}

	static ::System::Single EaseInElastic(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINELASTIC_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutElastic(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTELASTIC_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutElastic(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTELASTIC_OFFSET))(a1, a2, a3);
	}

	static ::System::Single LinearD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_LINEARD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInQuadD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUADD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutQuadD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUADD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutQuadD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUADD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInCubicD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCUBICD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutCubicD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCUBICD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutCubicD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCUBICD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInQuartD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUARTD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutQuartD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUARTD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutQuartD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUARTD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInQuintD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUINTD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutQuintD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUINTD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutQuintD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUINTD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInSineD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINSINED_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutSineD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTSINED_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutSineD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTSINED_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInExpoD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINEXPOD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutExpoD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTEXPOD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutExpoD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTEXPOD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInCircD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCIRCD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutCircD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCIRCD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutCircD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCIRCD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInBounceD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBOUNCED_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutBounceD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBOUNCED_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutBounceD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBOUNCED_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInBackD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBACKD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutBackD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBACKD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutBackD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBACKD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInElasticD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINELASTICD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseOutElasticD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTELASTICD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single EaseInOutElasticD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTELASTICD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single SpringD(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_SPRINGD_OFFSET))(a1, a2, a3);
	}

	static ::EasingFunction_Function* GetEasingFunction(::EasingFunction_Ease a1)
	{
		return ((::EasingFunction_Function*(*)(::EasingFunction_Ease))((::PBYTE)hIl2Cpp + EASINGFUNCTION_GETEASINGFUNCTION_OFFSET))(a1);
	}

	static ::EasingFunction_FunctionValue* GetEasingFunctionValue(::EasingFunction_Ease a1)
	{
		return ((::EasingFunction_FunctionValue*(*)(::EasingFunction_Ease))((::PBYTE)hIl2Cpp + EASINGFUNCTION_GETEASINGFUNCTIONVALUE_OFFSET))(a1);
	}

	static ::EasingFunction_Function* GetEasingFunctionDerivative(::EasingFunction_Ease a1)
	{
		return ((::EasingFunction_Function*(*)(::EasingFunction_Ease))((::PBYTE)hIl2Cpp + EASINGFUNCTION_GETEASINGFUNCTIONDERIVATIVE_OFFSET))(a1);
	}
};
