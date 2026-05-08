#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GLOBALPADDINGDATA_METHOD_1_E06B7E07D5241CFE_1_OFFSET UNITYSDK_OFFSET(0x13836A70)
#define MOLEMOLE_GLOBALPADDINGDATA_METHOD_1_E06B7E07D5241CFE_2_OFFSET UNITYSDK_OFFSET(0x13836B20)
#define MOLEMOLE_GLOBALPADDINGDATA_METHOD_1_E06B7E07D5241CFE_3_OFFSET UNITYSDK_OFFSET(0x13836BD0)
#define MOLEMOLE_GLOBALPADDINGDATA_METHOD_1_E06B7E07D5241CFE_OFFSET UNITYSDK_OFFSET(0x138369D0)
#define MOLEMOLE_GLOBALPADDINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x138369C0)

namespace MoleMole
{
	inline static constexpr unsigned int GlobalPaddingData_TypeDefinitionIndex = 53916;

	class GlobalPaddingData : public ::System::Object
	{
	public:
		::System::Int32 top; // 0x10
		::System::Int32 bottom; // 0x14
		::System::Int32 left; // 0x18
		::System::Int32 right; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALPADDINGDATA__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_E06B7E07D5241CFE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALPADDINGDATA_METHOD_1_E06B7E07D5241CFE_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_E06B7E07D5241CFE_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALPADDINGDATA_METHOD_1_E06B7E07D5241CFE_1_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_E06B7E07D5241CFE_2(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALPADDINGDATA_METHOD_1_E06B7E07D5241CFE_2_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_E06B7E07D5241CFE_3(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALPADDINGDATA_METHOD_1_E06B7E07D5241CFE_3_OFFSET))(this, a1, a2);
		}
	};
}
