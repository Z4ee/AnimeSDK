#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EasingFunction_Ease.h"
#include "unitysdk/System/Object.h"

class EasingFunction_Function;
class EasingFunction_FunctionValue;

#define EASINGFUNCTION_EASEINBACKD_OFFSET UNITYSDK_OFFSET(0x8B8C090)
#define EASINGFUNCTION_EASEINBACK_1_OFFSET UNITYSDK_OFFSET(0x8B8B470)
#define EASINGFUNCTION_EASEINBACK_OFFSET UNITYSDK_OFFSET(0x8B8B440)
#define EASINGFUNCTION_EASEINBOUNCED_OFFSET UNITYSDK_OFFSET(0x8B8BE20)
#define EASINGFUNCTION_EASEINBOUNCE_1_OFFSET UNITYSDK_OFFSET(0x8B8AF00)
#define EASINGFUNCTION_EASEINBOUNCE_OFFSET UNITYSDK_OFFSET(0x8B8AD70)
#define EASINGFUNCTION_EASEINCIRCD_OFFSET UNITYSDK_OFFSET(0x8B8BCA0)
#define EASINGFUNCTION_EASEINCIRC_1_OFFSET UNITYSDK_OFFSET(0x8B8AB70)
#define EASINGFUNCTION_EASEINCIRC_OFFSET UNITYSDK_OFFSET(0x8B8AB10)
#define EASINGFUNCTION_EASEINCUBICD_OFFSET UNITYSDK_OFFSET(0x8B8B910)
#define EASINGFUNCTION_EASEINCUBIC_1_OFFSET UNITYSDK_OFFSET(0x8B8A400)
#define EASINGFUNCTION_EASEINCUBIC_OFFSET UNITYSDK_OFFSET(0x8B8A3E0)
#define EASINGFUNCTION_EASEINELASTICD_OFFSET UNITYSDK_OFFSET(0x8B8C190)
#define EASINGFUNCTION_EASEINELASTIC_OFFSET UNITYSDK_OFFSET(0x8B8B5F0)
#define EASINGFUNCTION_EASEINEXPOD_OFFSET UNITYSDK_OFFSET(0x8B8BBA0)
#define EASINGFUNCTION_EASEINEXPO_1_OFFSET UNITYSDK_OFFSET(0x8B8A980)
#define EASINGFUNCTION_EASEINEXPO_OFFSET UNITYSDK_OFFSET(0x8B8A930)
#define EASINGFUNCTION_EASEINOUTBACKD_OFFSET UNITYSDK_OFFSET(0x8B8C100)
#define EASINGFUNCTION_EASEINOUTBACK_1_OFFSET UNITYSDK_OFFSET(0x8B8B580)
#define EASINGFUNCTION_EASEINOUTBACK_OFFSET UNITYSDK_OFFSET(0x8B8B500)
#define EASINGFUNCTION_EASEINOUTBOUNCED_OFFSET UNITYSDK_OFFSET(0x8B8BF40)
#define EASINGFUNCTION_EASEINOUTBOUNCE_1_OFFSET UNITYSDK_OFFSET(0x8B8B250)
#define EASINGFUNCTION_EASEINOUTBOUNCE_OFFSET UNITYSDK_OFFSET(0x8B8B080)
#define EASINGFUNCTION_EASEINOUTCIRCD_OFFSET UNITYSDK_OFFSET(0x8B8BD80)
#define EASINGFUNCTION_EASEINOUTCIRC_1_OFFSET UNITYSDK_OFFSET(0x8B8ACF0)
#define EASINGFUNCTION_EASEINOUTCIRC_OFFSET UNITYSDK_OFFSET(0x8B8AC40)
#define EASINGFUNCTION_EASEINOUTCUBICD_OFFSET UNITYSDK_OFFSET(0x8B8B950)
#define EASINGFUNCTION_EASEINOUTCUBIC_1_OFFSET UNITYSDK_OFFSET(0x8B8A4C0)
#define EASINGFUNCTION_EASEINOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x8B8A460)
#define EASINGFUNCTION_EASEINOUTELASTICD_OFFSET UNITYSDK_OFFSET(0x8B8C380)
#define EASINGFUNCTION_EASEINOUTELASTIC_OFFSET UNITYSDK_OFFSET(0x8B8B750)
#define EASINGFUNCTION_EASEINOUTEXPOD_OFFSET UNITYSDK_OFFSET(0x8B8BC30)
#define EASINGFUNCTION_EASEINOUTEXPO_1_OFFSET UNITYSDK_OFFSET(0x8B8AAB0)
#define EASINGFUNCTION_EASEINOUTEXPO_OFFSET UNITYSDK_OFFSET(0x8B8AA20)
#define EASINGFUNCTION_EASEINOUTQUADD_OFFSET UNITYSDK_OFFSET(0x8B8B8D0)
#define EASINGFUNCTION_EASEINOUTQUAD_1_OFFSET UNITYSDK_OFFSET(0x8B8A380)
#define EASINGFUNCTION_EASEINOUTQUAD_OFFSET UNITYSDK_OFFSET(0x8B8A310)
#define EASINGFUNCTION_EASEINOUTQUARTD_OFFSET UNITYSDK_OFFSET(0x8B8B9E0)
#define EASINGFUNCTION_EASEINOUTQUART_1_OFFSET UNITYSDK_OFFSET(0x8B8A610)
#define EASINGFUNCTION_EASEINOUTQUART_OFFSET UNITYSDK_OFFSET(0x8B8A5A0)
#define EASINGFUNCTION_EASEINOUTQUINTD_OFFSET UNITYSDK_OFFSET(0x8B8BA70)
#define EASINGFUNCTION_EASEINOUTQUINT_1_OFFSET UNITYSDK_OFFSET(0x8B8A780)
#define EASINGFUNCTION_EASEINOUTQUINT_OFFSET UNITYSDK_OFFSET(0x8B8A710)
#define EASINGFUNCTION_EASEINOUTSINED_OFFSET UNITYSDK_OFFSET(0x8B8BB50)
#define EASINGFUNCTION_EASEINOUTSINE_1_OFFSET UNITYSDK_OFFSET(0x8B8A900)
#define EASINGFUNCTION_EASEINOUTSINE_OFFSET UNITYSDK_OFFSET(0x8B8A8B0)
#define EASINGFUNCTION_EASEINQUADD_OFFSET UNITYSDK_OFFSET(0x8B8B890)
#define EASINGFUNCTION_EASEINQUAD_1_OFFSET UNITYSDK_OFFSET(0x8B8A2C0)
#define EASINGFUNCTION_EASEINQUAD_OFFSET UNITYSDK_OFFSET(0x8B8A2A0)
#define EASINGFUNCTION_EASEINQUARTD_OFFSET UNITYSDK_OFFSET(0x8B8B990)
#define EASINGFUNCTION_EASEINQUART_1_OFFSET UNITYSDK_OFFSET(0x8B8A530)
#define EASINGFUNCTION_EASEINQUART_OFFSET UNITYSDK_OFFSET(0x8B8A510)
#define EASINGFUNCTION_EASEINQUINTD_OFFSET UNITYSDK_OFFSET(0x8B8BA20)
#define EASINGFUNCTION_EASEINQUINT_1_OFFSET UNITYSDK_OFFSET(0x8B8A690)
#define EASINGFUNCTION_EASEINQUINT_OFFSET UNITYSDK_OFFSET(0x8B8A670)
#define EASINGFUNCTION_EASEINSINED_OFFSET UNITYSDK_OFFSET(0x8B8BAC0)
#define EASINGFUNCTION_EASEINSINE_1_OFFSET UNITYSDK_OFFSET(0x8B8A830)
#define EASINGFUNCTION_EASEINSINE_OFFSET UNITYSDK_OFFSET(0x8B8A7E0)
#define EASINGFUNCTION_EASEOUTBACKD_OFFSET UNITYSDK_OFFSET(0x8B8C0C0)
#define EASINGFUNCTION_EASEOUTBACK_1_OFFSET UNITYSDK_OFFSET(0x8B8B4D0)
#define EASINGFUNCTION_EASEOUTBACK_OFFSET UNITYSDK_OFFSET(0x8B8B490)
#define EASINGFUNCTION_EASEOUTBOUNCED_OFFSET UNITYSDK_OFFSET(0x8B8BEB0)
#define EASINGFUNCTION_EASEOUTBOUNCE_1_OFFSET UNITYSDK_OFFSET(0x8B8AFD0)
#define EASINGFUNCTION_EASEOUTBOUNCE_OFFSET UNITYSDK_OFFSET(0x8B8AE40)
#define EASINGFUNCTION_EASEOUTCIRCD_OFFSET UNITYSDK_OFFSET(0x8B8BD10)
#define EASINGFUNCTION_EASEOUTCIRC_1_OFFSET UNITYSDK_OFFSET(0x8B8AC10)
#define EASINGFUNCTION_EASEOUTCIRC_OFFSET UNITYSDK_OFFSET(0x8B8ABB0)
#define EASINGFUNCTION_EASEOUTCUBICD_OFFSET UNITYSDK_OFFSET(0x8B8B930)
#define EASINGFUNCTION_EASEOUTCUBIC_1_OFFSET UNITYSDK_OFFSET(0x8B8A440)
#define EASINGFUNCTION_EASEOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x8B8A410)
#define EASINGFUNCTION_EASEOUTELASTICD_OFFSET UNITYSDK_OFFSET(0x8B8C290)
#define EASINGFUNCTION_EASEOUTELASTIC_OFFSET UNITYSDK_OFFSET(0x8B8B6A0)
#define EASINGFUNCTION_EASEOUTEXPOD_OFFSET UNITYSDK_OFFSET(0x8B8BBF0)
#define EASINGFUNCTION_EASEOUTEXPO_1_OFFSET UNITYSDK_OFFSET(0x8B8A9F0)
#define EASINGFUNCTION_EASEOUTEXPO_OFFSET UNITYSDK_OFFSET(0x8B8A9A0)
#define EASINGFUNCTION_EASEOUTQUADD_OFFSET UNITYSDK_OFFSET(0x8B8B8A0)
#define EASINGFUNCTION_EASEOUTQUAD_1_OFFSET UNITYSDK_OFFSET(0x8B8A2F0)
#define EASINGFUNCTION_EASEOUTQUAD_OFFSET UNITYSDK_OFFSET(0x8B8A2D0)
#define EASINGFUNCTION_EASEOUTQUARTD_OFFSET UNITYSDK_OFFSET(0x8B8B9B0)
#define EASINGFUNCTION_EASEOUTQUART_1_OFFSET UNITYSDK_OFFSET(0x8B8A570)
#define EASINGFUNCTION_EASEOUTQUART_OFFSET UNITYSDK_OFFSET(0x8B8A540)
#define EASINGFUNCTION_EASEOUTQUINTD_OFFSET UNITYSDK_OFFSET(0x8B8BA40)
#define EASINGFUNCTION_EASEOUTQUINT_1_OFFSET UNITYSDK_OFFSET(0x8B8A6E0)
#define EASINGFUNCTION_EASEOUTQUINT_OFFSET UNITYSDK_OFFSET(0x8B8A6B0)
#define EASINGFUNCTION_EASEOUTSINED_OFFSET UNITYSDK_OFFSET(0x8B8BB10)
#define EASINGFUNCTION_EASEOUTSINE_1_OFFSET UNITYSDK_OFFSET(0x8B8A8A0)
#define EASINGFUNCTION_EASEOUTSINE_OFFSET UNITYSDK_OFFSET(0x8B8A860)
#define EASINGFUNCTION_GETEASINGFUNCTIONDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x8B8D2B0)
#define EASINGFUNCTION_GETEASINGFUNCTIONVALUE_OFFSET UNITYSDK_OFFSET(0x8B8CD50)
#define EASINGFUNCTION_GETEASINGFUNCTION_OFFSET UNITYSDK_OFFSET(0x8B8C740)
#define EASINGFUNCTION_LINEARD_OFFSET UNITYSDK_OFFSET(0x8B8B880)
#define EASINGFUNCTION_LINEAR_1_OFFSET UNITYSDK_OFFSET(0x8B8A0E0)
#define EASINGFUNCTION_LINEAR_OFFSET UNITYSDK_OFFSET(0x8B8A0B0)
#define EASINGFUNCTION_SPRINGD_OFFSET UNITYSDK_OFFSET(0x8B8C540)
#define EASINGFUNCTION_SPRING_1_OFFSET UNITYSDK_OFFSET(0x8B8A1E0)
#define EASINGFUNCTION_SPRING_OFFSET UNITYSDK_OFFSET(0x8B8A0F0)

inline static constexpr unsigned int EasingFunction_TypeDefinitionIndex = 40929;

class EasingFunction : public ::System::Object
{
public:
	// static const ::System::Single NATURAL_LOG_OF_2; // 0x0

	static ::System::Single Linear(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_LINEAR_OFFSET))(start, end, value);
	}

	static ::System::Single Linear_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_LINEAR_1_OFFSET))(value);
	}

	static ::System::Single Spring(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_SPRING_OFFSET))(start, end, value);
	}

	static ::System::Single Spring_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_SPRING_1_OFFSET))(value);
	}

	static ::System::Single EaseInQuad(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUAD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInQuad_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUAD_1_OFFSET))(value);
	}

	static ::System::Single EaseOutQuad(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUAD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutQuad_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUAD_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutQuad(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUAD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutQuad_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUAD_1_OFFSET))(value);
	}

	static ::System::Single EaseInCubic(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCUBIC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInCubic_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCUBIC_1_OFFSET))(value);
	}

	static ::System::Single EaseOutCubic(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCUBIC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutCubic_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCUBIC_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutCubic(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCUBIC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutCubic_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCUBIC_1_OFFSET))(value);
	}

	static ::System::Single EaseInQuart(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUART_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInQuart_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUART_1_OFFSET))(value);
	}

	static ::System::Single EaseOutQuart(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUART_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutQuart_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUART_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutQuart(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUART_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutQuart_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUART_1_OFFSET))(value);
	}

	static ::System::Single EaseInQuint(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUINT_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInQuint_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUINT_1_OFFSET))(value);
	}

	static ::System::Single EaseOutQuint(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUINT_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutQuint_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUINT_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutQuint(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUINT_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutQuint_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUINT_1_OFFSET))(value);
	}

	static ::System::Single EaseInSine(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINSINE_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInSine_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINSINE_1_OFFSET))(value);
	}

	static ::System::Single EaseOutSine(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTSINE_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutSine_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTSINE_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutSine(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTSINE_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutSine_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTSINE_1_OFFSET))(value);
	}

	static ::System::Single EaseInExpo(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINEXPO_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInExpo_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINEXPO_1_OFFSET))(value);
	}

	static ::System::Single EaseOutExpo(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTEXPO_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutExpo_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTEXPO_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutExpo(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTEXPO_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutExpo_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTEXPO_1_OFFSET))(value);
	}

	static ::System::Single EaseInCirc(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCIRC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInCirc_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCIRC_1_OFFSET))(value);
	}

	static ::System::Single EaseOutCirc(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCIRC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutCirc_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCIRC_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutCirc(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCIRC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutCirc_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCIRC_1_OFFSET))(value);
	}

	static ::System::Single EaseInBounce(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBOUNCE_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInBounce_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBOUNCE_1_OFFSET))(value);
	}

	static ::System::Single EaseOutBounce(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBOUNCE_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutBounce_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBOUNCE_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutBounce(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBOUNCE_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutBounce_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBOUNCE_1_OFFSET))(value);
	}

	static ::System::Single EaseInBack(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBACK_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInBack_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBACK_1_OFFSET))(value);
	}

	static ::System::Single EaseOutBack(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBACK_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutBack_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBACK_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutBack(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBACK_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutBack_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBACK_1_OFFSET))(value);
	}

	static ::System::Single EaseInElastic(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINELASTIC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutElastic(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTELASTIC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutElastic(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTELASTIC_OFFSET))(start, end, value);
	}

	static ::System::Single LinearD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_LINEARD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInQuadD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUADD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutQuadD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUADD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutQuadD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUADD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInCubicD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCUBICD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutCubicD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCUBICD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutCubicD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCUBICD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInQuartD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUARTD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutQuartD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUARTD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutQuartD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUARTD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInQuintD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUINTD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutQuintD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUINTD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutQuintD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUINTD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInSineD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINSINED_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutSineD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTSINED_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutSineD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTSINED_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInExpoD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINEXPOD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutExpoD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTEXPOD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutExpoD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTEXPOD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInCircD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCIRCD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutCircD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCIRCD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutCircD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCIRCD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInBounceD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBOUNCED_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutBounceD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBOUNCED_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutBounceD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBOUNCED_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInBackD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBACKD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutBackD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBACKD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutBackD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBACKD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInElasticD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINELASTICD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutElasticD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTELASTICD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutElasticD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTELASTICD_OFFSET))(start, end, value);
	}

	static ::System::Single SpringD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_SPRINGD_OFFSET))(start, end, value);
	}

	static ::EasingFunction_Function* GetEasingFunction(::EasingFunction_Ease easingFunction)
	{
		return ((::EasingFunction_Function*(*)(::EasingFunction_Ease))((::PBYTE)hIl2Cpp + EASINGFUNCTION_GETEASINGFUNCTION_OFFSET))(easingFunction);
	}

	static ::EasingFunction_FunctionValue* GetEasingFunctionValue(::EasingFunction_Ease easingFunction)
	{
		return ((::EasingFunction_FunctionValue*(*)(::EasingFunction_Ease))((::PBYTE)hIl2Cpp + EASINGFUNCTION_GETEASINGFUNCTIONVALUE_OFFSET))(easingFunction);
	}

	static ::EasingFunction_Function* GetEasingFunctionDerivative(::EasingFunction_Ease easingFunction)
	{
		return ((::EasingFunction_Function*(*)(::EasingFunction_Ease))((::PBYTE)hIl2Cpp + EASINGFUNCTION_GETEASINGFUNCTIONDERIVATIVE_OFFSET))(easingFunction);
	}
};
