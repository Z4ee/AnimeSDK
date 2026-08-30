#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_APPROXEQUALS_OFFSET UNITYSDK_OFFSET(0x172D2EB0)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTLENGTH_OFFSET UNITYSDK_OFFSET(0x173167C0)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTTOHEX_OFFSET UNITYSDK_OFFSET(0x17316930)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int MathUtils_TypeDefinitionIndex = 9618;

	class MathUtils : public ::System::Object
	{
	public:
		static ::System::Int32 IntLength(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTLENGTH_OFFSET))(a1);
		}

		static ::System::Char IntToHex(::System::Int32 a1)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTTOHEX_OFFSET))(a1);
		}

		static ::System::Boolean ApproxEquals(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_APPROXEQUALS_OFFSET))(a1, a2);
		}
	};
}
