#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SRF_SRFFLOATEXTENSIONS_APPROXZERO_OFFSET UNITYSDK_OFFSET(0x1AD1BCE0)
#define SRF_SRFFLOATEXTENSIONS_APPROX_OFFSET UNITYSDK_OFFSET(0x1AD1BD10)
#define SRF_SRFFLOATEXTENSIONS_SQRRT_OFFSET UNITYSDK_OFFSET(0x1AD1BCC0)
#define SRF_SRFFLOATEXTENSIONS_SQR_OFFSET UNITYSDK_OFFSET(0x1AD1BCB0)

namespace SRF
{
	inline static constexpr unsigned int SRFFloatExtensions_TypeDefinitionIndex = 33561;

	class SRFFloatExtensions : public ::System::Object
	{
	public:
		static ::System::Single Sqr(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SRF_SRFFLOATEXTENSIONS_SQR_OFFSET))(a1);
		}

		static ::System::Single SqrRt(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SRF_SRFFLOATEXTENSIONS_SQRRT_OFFSET))(a1);
		}

		static ::System::Boolean ApproxZero(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + SRF_SRFFLOATEXTENSIONS_APPROXZERO_OFFSET))(a1);
		}

		static ::System::Boolean Approx(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRF_SRFFLOATEXTENSIONS_APPROX_OFFSET))(a1, a2);
		}
	};
}
