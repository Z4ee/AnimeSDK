#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_UIRANDOMUTILS_RANGEFLOAT_OFFSET UNITYSDK_OFFSET(0xA72B670)
#define RPG_CLIENT_UIRANDOMUTILS_RANGEINT_OFFSET UNITYSDK_OFFSET(0xA72B6E0)
#define RPG_CLIENT_UIRANDOMUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xA72B730)

namespace RPG::Client
{
	inline static constexpr unsigned int UIRandomUtils_TypeDefinitionIndex = 59989;

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
