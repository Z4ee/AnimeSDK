#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ConfigInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_CONFIGINFOGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E370250)

namespace Foundation
{
	inline static constexpr unsigned int ConfigInfoGroup_TypeDefinitionIndex = 8308;

	class ConfigInfoGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::ConfigInfo*>* VersionInfoGroups; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONFIGINFOGROUP__CTOR_OFFSET))(this);
		}
	};
}
