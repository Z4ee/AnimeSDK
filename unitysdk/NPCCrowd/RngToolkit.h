#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_RNGTOOLKIT_ASBOOL_OFFSET UNITYSDK_OFFSET(0xFB5B1D0)
#define NPCCROWD_RNGTOOLKIT_ASFLOAT_1_OFFSET UNITYSDK_OFFSET(0xFB5B3B0)
#define NPCCROWD_RNGTOOLKIT_ASFLOAT_OFFSET UNITYSDK_OFFSET(0xFB5B360)
#define NPCCROWD_RNGTOOLKIT_ASINT_1_OFFSET UNITYSDK_OFFSET(0xFB5B260)
#define NPCCROWD_RNGTOOLKIT_ASINT_OFFSET UNITYSDK_OFFSET(0xFB5B220)
#define NPCCROWD_RNGTOOLKIT_ASUINT_1_OFFSET UNITYSDK_OFFSET(0xFB5B320)
#define NPCCROWD_RNGTOOLKIT_ASUINT_OFFSET UNITYSDK_OFFSET(0xFB5B2C0)

namespace NPCCrowd
{
	inline static constexpr unsigned int RngToolkit_TypeDefinitionIndex = 43310;

	class RngToolkit : public ::System::Object
	{
	public:
		static ::System::Boolean AsBool(::System::UInt32 u)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_RNGTOOLKIT_ASBOOL_OFFSET))(u);
		}

		static ::System::Int32 AsInt(::System::UInt32 u)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_RNGTOOLKIT_ASINT_OFFSET))(u);
		}

		static ::System::Int32 AsInt_1(::System::UInt32 u, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_RNGTOOLKIT_ASINT_1_OFFSET))(u, min, max);
		}

		static ::System::UInt32 AsUInt(::System::UInt32 u, ::System::UInt32 min, ::System::UInt32 max)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_RNGTOOLKIT_ASUINT_OFFSET))(u, min, max);
		}

		static ::System::UInt32 AsUInt_1(::System::Int32 x)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_RNGTOOLKIT_ASUINT_1_OFFSET))(x);
		}

		static ::System::Single AsFloat(::System::UInt32 a)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_RNGTOOLKIT_ASFLOAT_OFFSET))(a);
		}

		static ::System::Single AsFloat_1(::System::UInt32 u, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_RNGTOOLKIT_ASFLOAT_1_OFFSET))(u, min, max);
		}
	};
}
