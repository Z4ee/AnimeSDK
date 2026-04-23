#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_UIRANDOMUTILS_RANGEFLOAT_OFFSET UNITYSDK_OFFSET(0xB42FC80)
#define RPG_CLIENT_UIRANDOMUTILS_RANGEINT_OFFSET UNITYSDK_OFFSET(0xB42FCF0)
#define RPG_CLIENT_UIRANDOMUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xB42FD40)

namespace RPG::Client
{
	inline static constexpr unsigned int UIRandomUtils_TypeDefinitionIndex = 67387;

	class UIRandomUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIRANDOMUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Single RangeFloat(::System::Single minInclusive, ::System::Single maxInclusive)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIRANDOMUTILS_RANGEFLOAT_OFFSET))(minInclusive, maxInclusive);
		}

		static ::System::Int32 RangeInt(::System::Int32 minInclusive, ::System::Int32 maxExclusive)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIRANDOMUTILS_RANGEINT_OFFSET))(minInclusive, maxExclusive);
		}
	};
}
