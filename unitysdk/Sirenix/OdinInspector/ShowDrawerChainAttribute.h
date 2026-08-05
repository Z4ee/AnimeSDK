#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_SHOWDRAWERCHAINATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F771620)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ShowDrawerChainAttribute_TypeDefinitionIndex = 7355;

	class ShowDrawerChainAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWDRAWERCHAINATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
