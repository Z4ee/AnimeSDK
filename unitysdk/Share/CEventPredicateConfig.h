#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SHARE_CEVENTPREDICATECONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B7A5480)
#define SHARE_CEVENTPREDICATECONFIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B7A5400)
#define SHARE_CEVENTPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A5490)

namespace Share
{
	inline static constexpr unsigned int CEventPredicateConfig_TypeDefinitionIndex = 11583;

	class CEventPredicateConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CEVENTPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CEVENTPREDICATECONFIG_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CEVENTPREDICATECONFIG_CLEAR_OFFSET))(this);
		}
	};
}
