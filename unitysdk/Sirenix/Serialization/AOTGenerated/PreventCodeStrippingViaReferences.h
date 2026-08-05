#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SIRENIX_SERIALIZATION_AOTGENERATED_PREVENTCODESTRIPPINGVIAREFERENCES__CCTOR_OFFSET UNITYSDK_OFFSET(0x818A610)

namespace Sirenix::Serialization::AOTGenerated
{
	inline static constexpr unsigned int PreventCodeStrippingViaReferences_TypeDefinitionIndex = 94980;

	class PreventCodeStrippingViaReferences : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_AOTGENERATED_PREVENTCODESTRIPPINGVIAREFERENCES__CCTOR_OFFSET))();
		}
	};
}
