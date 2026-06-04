#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_UIRANDOMUTILS_RANGEFLOAT_OFFSET UNITYSDK_OFFSET(0xCB90130)
#define RPG_CLIENT_UIRANDOMUTILS_RANGEINT_OFFSET UNITYSDK_OFFSET(0xCB901A0)
#define RPG_CLIENT_UIRANDOMUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xCB901F0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIRandomUtils_TypeDefinitionIndex = 68339;

	class UIRandomUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIRANDOMUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Single RangeFloat(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIRANDOMUTILS_RANGEFLOAT_OFFSET))(a1, a2);
		}

		static ::System::Int32 RangeInt(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIRANDOMUTILS_RANGEINT_OFFSET))(a1, a2);
		}
	};
}
