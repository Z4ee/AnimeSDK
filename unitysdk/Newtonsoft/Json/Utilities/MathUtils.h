#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_APPROXEQUALS_OFFSET UNITYSDK_OFFSET(0x1646B730)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTLENGTH_OFFSET UNITYSDK_OFFSET(0x164A0F50)
#define NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTTOHEX_OFFSET UNITYSDK_OFFSET(0x164A10C0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int MathUtils_TypeDefinitionIndex = 8278;

	class MathUtils : public ::System::Object
	{
	public:
		static ::System::Int32 IntLength(::System::UInt64 i)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTLENGTH_OFFSET))(i);
		}

		static ::System::Char IntToHex(::System::Int32 n)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_INTTOHEX_OFFSET))(n);
		}

		static ::System::Boolean ApproxEquals(::System::Double d1, ::System::Double d2)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MATHUTILS_APPROXEQUALS_OFFSET))(d1, d2);
		}
	};
}
