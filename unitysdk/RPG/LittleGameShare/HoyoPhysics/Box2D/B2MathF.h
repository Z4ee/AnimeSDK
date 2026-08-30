#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHF_ATAN2_OFFSET UNITYSDK_OFFSET(0x1C2F8920)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHF_COS_OFFSET UNITYSDK_OFFSET(0x1C2F8900)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHF_SIN_OFFSET UNITYSDK_OFFSET(0x1C2F88E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHF_SQRT_OFFSET UNITYSDK_OFFSET(0x1C2F88C0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2MathF_TypeDefinitionIndex = 36022;

	class B2MathF : public ::System::Object
	{
	public:
		static ::System::Single Sqrt(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHF_SQRT_OFFSET))(a1);
		}

		static ::System::Single Sin(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHF_SIN_OFFSET))(a1);
		}

		static ::System::Single Cos(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHF_COS_OFFSET))(a1);
		}

		static ::System::Single Atan2(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHF_ATAN2_OFFSET))(a1, a2);
		}
	};
}
