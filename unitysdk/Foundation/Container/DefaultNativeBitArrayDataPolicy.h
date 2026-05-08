#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_CONTAINER_DEFAULTNATIVEBITARRAYDATAPOLICY_CALCULATECAPACITYFORRESERVE_OFFSET UNITYSDK_OFFSET(0x1C1B2D40)
#define FOUNDATION_CONTAINER_DEFAULTNATIVEBITARRAYDATAPOLICY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1B2DD0)

namespace Foundation::Container
{
	inline static constexpr unsigned int DefaultNativeBitArrayDataPolicy_TypeDefinitionIndex = 9096;

	class DefaultNativeBitArrayDataPolicy : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_MinWordCapacity()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(DefaultNativeBitArrayDataPolicy_TypeDefinitionIndex)->GetStaticField(0x3CD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_DEFAULTNATIVEBITARRAYDATAPOLICY__CCTOR_OFFSET))();
		}

		static ::System::Int64 CalculateCapacityForReserve(::System::Int64 desiredNumber)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_DEFAULTNATIVEBITARRAYDATAPOLICY_CALCULATECAPACITYFORRESERVE_OFFSET))(desiredNumber);
		}
	};
}
